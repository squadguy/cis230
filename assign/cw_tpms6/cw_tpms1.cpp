#include<iostream>
#include<array>
#include<vector>
#include<string>
#include<cstring>
#include<cstdlib>
#include<typeinfo>
#include<fstream>
#include<map>
#include<algorithm>
#include<iterator>

#include "cw_media.h"
#include "cw_media2.h"
#include "cw_media3.h"
#include "cw_media4.h"

#define MAX_TOKEN_SIZE 1024

using namespace std;

	void loadMediaTemp(map<string, Media*>*);
	void loadMedia(map<string, Media*>*);
	void displayMedia(map<string, Media*>*);
	void displayBooks(map<string, Media*>*);
	void displayMusic(map<string, Media*>*);
	void displayMovies(map<string, Media*>*);
	
	Media *editBook(Book*);
	Media *editAudioTrack(Music*);
	Media *editMovie(Movie*);

	void editDeleteMedia(map<string, Media*>*);
	void doSearch(map<string, Media*>*, bool);
	void editDeleteByTitle(map<string, Media*>*, bool);
	void editDeleteByGenre(map<string, Media*>*, bool);
	void editDeleteByDate(map<string, Media*>*, bool);
	void saveMedia(map<string, Media*>*);

	void displayMenu(map<string, Media*>*);
	void checkout(map<string, Media*>*);
	void deleteEditMedia(map<string, Media*>*);
	void callEditFn(map<string, Media*>*, string, bool);

int main()
{
	map < string, Media*>*medias = new map<string, Media*>;
	int num;

	cout << "Press 1 for hard-coded data, Press 2 to read from DB file: ";
	cin >> num;
	cin.ignore();	
	cout << "hi" << endl;

	if (num == 1)
	{
		loadMediaTemp(medias);
	}
	else
		loadMedia(medias);

	displayMenu(medias);
	
	saveMedia(medias);
	delete medias;

	return 0;
}

void loadMediaTemp(map<string, Media*>*medias)
{
//Create Music Objects
	medias->insert(make_pair("Leviathan", new Book("Leviathan", "Book", "Philosophy", "1651", "Thomas Hobbes")));
	medias->insert(make_pair("C++", new Book("C++", "Book", "Reference", "2014", "Paul Deitel")));
	medias->insert(make_pair("The Dictionary", new Book("The Dictionary", "Book", "Reference", "1941", "Webster")));
	medias->insert(make_pair("Fabric of the Cosmos", new Book("Fabric of the Cosmos", "Book", "Physics", "2004", "Brian Greene")));
	medias->insert(make_pair("Genology of Morals", new Book("Geneology of Morals", "Book", "Philosophy", "1887", "Fredrich Neitzche")));
	medias->insert(make_pair("Beyond Good and Evil", new Book("Beyond Good and Evil", "Book", "Philosophy", "1886", "Fredrich Neitzche")));
	medias->insert(make_pair("The Use and Abuse of History", new Book("The Use and Abuse of History","Book", "Philosophy", "1874",  "Fredrich Neitzsche")));
	medias->insert(make_pair("Thus Spoke Zarathusra", new Book("Thus Spoke Zarathustra", "Book", "Philosophy", "1891", "Fredrich Neitzsche")));
	medias->insert(make_pair("Building Construction for the Fire Service", new Book("Building Construction for the Fire Service","Book", "Educational", "1971",  "Francis Brannigan")));
	medias->insert(make_pair("Second Discourse", new Book("Second Discourse", "Book", "Philosophy", "1755", "Jean-Jacques Rousseau")));

//Create Music Objects
	medias->insert(make_pair("Back in Black", new Music("Back in Black", "Music", "Rock", "1980", "AC/DC")));
	medias->insert(make_pair("Ramble On", new Music("Ramble On", "Music", "Rock", "1969", "Led Zeppelin")));
	medias->insert(make_pair("Just a Memory", new Music("Just a Memory", "Music", "Brooklyn Rap", "2005", "Notrious Big")));
	medias->insert(make_pair("Brooklyn We Go Hard", new Music("Brooklyn We Go Hard", "Music", "Brooklyn Rap", "2009", "Jay Z")));
	medias->insert(make_pair("What You know", new Music("What You Know", "Music", "Atlanta Rap", "2006",  "TI")));
	medias->insert(make_pair("White and Nerdy", new Music("White and Nerdy", "Music", "Hip Hop", "2006", "Weird Al")));
	medias->insert(make_pair("Cowboys from Hell", new Music("Cowboys from Hell", "Music", "Rock", "1990", "Pantera")));
	medias->insert(make_pair("Lucky Man", new Music("Lucky Man", "Music", "Rock", "1997", "The Verve")));
	medias->insert(make_pair("Top of the World", new Music("Top of the World", "Music", "Rock", "1991", "Van Halen")));
	medias->insert(make_pair("Ain't Nothin but a G Thang", new Music("Ain't Nothin but a G Thang", "Music", "West Coast Rap", "1992", "Dr Dre")));

//Create new Movie Vector Objects

	medias->insert(make_pair("Appolo 13", new Movie("Apollo 13","Movie", "Drama", "1995", "Brian Grazer")));
	medias->insert(make_pair("Saving Private Ryan", new Movie("Saving Private Ryan", "Movie", "War", "1998", "Steven Spielberg")));
	medias->insert(make_pair("8 Mile", new Movie("8 Mile", "Movie", "Drama", "2002", "Marshall Mathers")));
	medias->insert(make_pair("Who Framed Roger Rabit", new Movie("Who Framed Roger Rabbit", "Movie", "Comedy", "1988", "Robert Zemeckis")));
	medias->insert(make_pair("Step Brothers", new Movie("Step Brothers", "Movie", "Comedy", "2008",  "Adam McKay")));
	medias->insert(make_pair("Jobs", new Movie("Jobs", "Movie", "Drama", "2013", "Joshua Michael Stern")));
	medias->insert(make_pair("The Blind Side", new Movie("The Blind Side", "Movie", "Drama", "2009", "John Lee Hancock")));
	medias->insert(make_pair("Backdraft", new Movie("Backdraft", "Movie", "Thriller", "1991", "Ron Howard")));
	medias->insert(make_pair("Ladder 49", new Movie("Ladder 49" , "Movie", "Thriller", "2004", "Jay Russel")));
	medias->insert(make_pair("We Were Soldiers", new Movie("We Were Soldiers", "Movie", "War", "2002", "Randall Wallace")));
}



void saveMedia(map<string, Media*>*medias)
{
	map<string, Media*>::iterator it;

	ofstream outClientFile("mediaDB.dat", ios::out);

	if ( !outClientFile)
	{
		cerr << "File could not be opened" << endl;
		exit(EXIT_FAILURE);
	}
	
	for(it = medias->begin(); it!=medias->end(); ++it)
	{
		outClientFile << *it->second << endl;
		delete it->second;
	}

	outClientFile.close();
}
	


void displayMedia(map<string, Media*>*medias)
{
	//char selection[MAX_TOKEN_SIZE] = {};

	int choice = 0;

	cout << "******************************************" << endl;
	cout << "*            DISPLAY MEDIA MENU          *" << endl;
	cout << "******************************************" << endl;

	cout << "What do you want to display?" << endl;

	cout << "1) ALL MEDIA" << endl;
	cout << "2) BOOKS" << endl;
	cout << "3) MUSIC" << endl;
	cout << "4) MOVIES" << endl;
	cout << "5) Cancel" << endl;
	cout << endl;

	cin >> choice;
	cin.ignore();

	switch(choice)
	{
		case 1:
			displayBooks(medias);
			displayMusic(medias);
			displayMovies(medias);
			break;

		case 2:
			displayBooks(medias);
			break;
		case 3:
			displayMusic(medias);
			break;
		case 4:
			displayMovies(medias);
			break;
		case 5:
			displayMenu(medias);
			break;
		default: 
			break;
	}

}

void displayBooks(map<string, Media*>*medias)
{
	map<string, Media*>::iterator it;
	for(it=medias->begin(); it!= medias->end(); it++)
	{
		if(Book* b = dynamic_cast<Book*>(it->second))
			cout << b->toString() << endl << endl;
	}
}

void displayMusic(map<string, Media*>*medias)
{
	map<string, Media*>::iterator it;
	for(it=medias->begin(); it!=medias->end(); it++)
	{
		if(Music* m = dynamic_cast<Music*>(it->second))
			cout << m->toString() << endl << endl;
	}
}

void displayMovies(map<string, Media*>*medias)
{
	map<string, Media*>::iterator it;
	for(it=medias->begin(); it!=medias->end(); it++)
	{
		if(Movie* y= dynamic_cast<Movie*>(it->second))
			cout << y->toString() << endl << endl;
	}
}
void loadMedia(map<string, Media*>*medias)
{
	ifstream inClientFile("mediaDB.dat", ios::in);

	if(!inClientFile)
	{
		exit(EXIT_FAILURE);
		cerr << "File could not be opened" << endl;
	}
	
	char token[MAX_TOKEN_SIZE];
	inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
		
	while(!inClientFile.eof())
	{
		string aTitle = "";
		string aType = "";
		string aGenre = "";
		string aYear = "";
		string x = "";

		if(strcmp(token, "Music") == 0)
		{
			//	Media *myNewMusic = new Music;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
				aTitle = token;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
				aType = token;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
				aGenre = token;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
				aYear = token;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '\n');
				x = token;
			
			medias->insert(make_pair(aTitle, new Music(aTitle, aType, aGenre, aYear, x)));
		}

		if(strcmp(token, "Movie") == 0)
		{
		//	Media *myNewMovie = new Movie;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
				aTitle = token;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
				aType = token;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
				aGenre = token;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
				aYear = token;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '\n');
				x = token;
				
			medias->insert(make_pair(aTitle, new Movie(aTitle, aType, aGenre, aYear, x)));
		}

		if(strcmp(token, "Book") == 0)
		{
			//	Media *myNewBook = new Book;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
				aTitle = token;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
				aType = token;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
				aGenre = token;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
				aYear = token;
			inClientFile.getline(token, MAX_TOKEN_SIZE, '\n');
				x = token;
			
			medias->insert(make_pair(aTitle, new Book(aTitle, aType, aGenre, aYear, x)));
		}

		inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
	}
	inClientFile.close();			
		
}


void editDeleteByTitle(map<string, Media*> *medias, bool del)
{
	char token[MAX_TOKEN_SIZE];

	cout << endl;
	cout << "**************************************************" << endl;
	cout << "                   Search by Title                " << endl;
	cout << "**************************************************" << endl;

	cout << "Enter Search Term" << endl;
	std::cin.getline(token, MAX_TOKEN_SIZE);
	string idx(token);
	Media* newItem = (*medias)[idx];

	if(newItem!=NULL)
		callEditFn(medias, idx, del);
	else
		cout << "Not found" << endl;

}

void callEditFn(map<string, Media*>*medias, string idx, bool del)
{
	if (del)
	{
		try
		{
			Media* item = medias->at(idx);
			medias->erase(idx);
			cout << endl;
			cout << "Item Deleted" << endl << item->toString() << endl;
			delete item;
		}
		catch (out_of_range e) 
		{
			cout << endl << "Item not Found! Nothing Deleted" << endl;
		}
	}
	else
	{
		try
		{
			if (Book* b = dynamic_cast<Book*>(medias->at(idx)))
				editBook(b);
			if(Music* a = dynamic_cast<Music*>(medias->at(idx)))
				editAudioTrack(a);
			if(Movie* m = dynamic_cast<Movie*>(medias->at(idx)))
				editMovie(m);
		}
		catch (out_of_range e)
		{
			cout << endl << "Item not Found! Nothing Edited" << endl;
		}
	}
}

void editDeleteByGenre(map<string, Media*>*medias, bool del)
{
	char token[MAX_TOKEN_SIZE];

	cout << endl;
	cout << "********************************************" << endl;
	cout << "               Search By Genre              " << endl;
	cout << "********************************************" << endl;
	cout << endl;

	std::cin.getline(token, MAX_TOKEN_SIZE);
	string idx(token);
	Media* newItem = (*medias)[idx];

	if(newItem!=NULL)
		callEditFn(medias, idx, del);
	else
		cout << "Not found" << endl;
}

void editDeleteByDate(map<string, Media*>*medias, bool del)
{
	char token[MAX_TOKEN_SIZE];

	cout << endl;
	cout << "********************************************" << endl;
	cout << "               Search By Year              " << endl;
	cout << "********************************************" << endl;
	cout << endl;

	std::cin.getline(token, MAX_TOKEN_SIZE);
	string idx(token);
	Media* newItem = (*medias)[idx];

	if(newItem!=NULL)
		callEditFn(medias, idx, del);
	else
		cout << "Not found" << endl;
}

void doSearch(map<string, Media*>*medias, bool del)
{
	char selection[MAX_TOKEN_SIZE] = {};
	
	int num = 0;
	cout << endl;
	cout << "**********************************************************" << endl;
	cout << "                    Find item by...                       " << endl;
	cout << "**********************************************************" << endl;
	cout << endl;

	cout << "\t1. Title" << endl;
	cout << "\t2. Genre" << endl;
	cout << "\t3. Date" << endl;
	cout << endl;
	std::cin.getline(selection, MAX_TOKEN_SIZE);
	cout << endl;

	selection[1] = '\0';
	num = atoi(selection);
	switch(num)
	{
		case 1:
			editDeleteByTitle(medias, del);
			break;
		case 2:
			editDeleteByGenre(medias, del);
			break;
		case 3:
			editDeleteByDate(medias, del);
			break;
		default:
			break;
		}
}

void editDeleteMedia(map<string, Media*> *medias)
{
	char selection[MAX_TOKEN_SIZE] = {};
	int choice = 0;

	cout << endl;
	cout << "***********************************************" << endl;
	cout << "                 Edit/Delete Menu              " << endl;
	cout << "***********************************************" << endl;
	cout << endl;

	cout << "\t1. Edit" << endl;
	cout << "\t2. Delete" << endl;
	cout << "\t3. Back to Main Menu" << endl;
	cout << endl;
	
	cout << "Enter your selection" << endl;
	std::cin.getline(selection, MAX_TOKEN_SIZE);
	cout << endl;
	selection[1] = '\0';
	choice = atoi(selection);
	switch (choice)
	{
		case 1:
			doSearch(medias, false);
			break;
		case 2:
			doSearch(medias, true);
			break;
		default:
			break;
	}
}

Media* editBook(Book* b)
{
	cout << endl;
	char token[MAX_TOKEN_SIZE];

	cout << endl;
	cout << "Enter title: ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	b->setTitle(token);

	cout << endl;
	cout << "Enter author: ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	b->setAuthor(token);

	cout << endl;
	cout << "Enter Type(book): ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	b->setMediaType(token);

	cout << endl;
	cout << "Enter Genre: ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	b->setGenre(token);

	cout << endl;
	cout << "Enter Year: ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	b->setYear(token);

	return b;
}

Media* editAudioTrack(Music* s)
{
	cout << endl;
	char token[MAX_TOKEN_SIZE];

	cout << endl;
	cout << "Enter title: ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	s->setTitle(token);

	cout << endl;
	cout << "Enter artist: ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	s->setArtist(token);

	cout << endl;
	cout << "Enter Type(Music): ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	s->setMediaType(token);

	cout << endl;
	cout << "Enter Genre: ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	s->setGenre(token);

	cout << endl;
	cout << "Enter Year: ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	s->setYear(token);

	return s;
}

Media* editMovie(Movie* v)
{
	cout << endl;
	char token[MAX_TOKEN_SIZE];

	cout << endl;
	cout << "Enter title: ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	v->setTitle(token);

	cout << endl;
	cout << "Enter Director: ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	v->setDirector(token);

	cout << endl;
	cout << "Enter Type(Movie): ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	v->setMediaType(token);

	cout << endl;
	cout << "Enter Genre: ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	v->setGenre(token);

	cout << endl;
	cout << "Enter Year: ";
	std::cin.getline(token, MAX_TOKEN_SIZE);
	v->setYear(token);

	return v;
}


void addMedia(map<string, Media*>*medias)
{
	char selection[MAX_TOKEN_SIZE] = {};
	int num = 0;
	Media* newItem;
	do
	{
		cout << endl;
		cout << "*****************************************" << endl;
		cout << "                 ADD MEDIA                " << endl;
		cout << "******************************************" << endl;
		cout << endl;

		cout << "Add a new:" << endl;
		
		cout << "1) Book" << endl;
		cout << "2) Movie" << endl;
		cout << "3) Song" << endl;
		cout << "4) Cancel" << endl;

		std::cin.getline(selection, MAX_TOKEN_SIZE);
		cout << endl;
		selection[1] = '\0';
		num = atoi(selection);

	switch(num)
	{
		case 1:
			newItem = editBook(new Book());
			medias->insert(make_pair(newItem->getTitle(), newItem));
			break;

		case 2:
			newItem = editAudioTrack(new Music);
			medias->insert(make_pair(newItem->getTitle(), newItem));
			break;

		case 3:
			newItem = editMovie(new Movie());
			medias->insert(make_pair(newItem->getTitle(), newItem));
			break;

		case 4:
			break;

		default:
			break;

		}	
	}
	while(num !=4);

}

void checkout(map<string, Media*>*medias)
{
	cout << endl;
	cout << "************************************" << endl;
	cout << "              CHECKOUT              " << endl;
	cout << "************************************" << endl;
	cout << "Feature comming soon" << endl;
}

void displayMenu(map<string, Media*>*media)
{
	char selection[MAX_TOKEN_SIZE] = {}; 
	int choice = 0;

	do
	{
	

		cout << "*****************************************" << endl;
		cout << "                MAIN MENU                " << endl;
		cout << "*****************************************" << endl;


		cout << "Enter selection from following menu" << endl;
		cout << "1) Display" << endl;
		cout << "2) Add New Media item" << endl;
		cout << "3) Edit/Delete Media Item" << endl;
		cout << "4) Check out Media Item" << endl;
		cout << "5) Exit" << endl;
		std:: cin.getline(selection, MAX_TOKEN_SIZE);
		selection[1] = '\0';
		choice = atoi(selection);

		switch(choice)
		{
			case 1:
				displayMedia(media);
				break;
			case 2: 
				addMedia(media);
				break;
			case 3:
				editDeleteMedia(media);
				break;
			case 4: 
				checkout(media);
				break;
			case 5:
				break;
			default:
				cout << "Not a Choice" << endl;
				break;

	
		}
	}
	while ( choice < 5 );
}



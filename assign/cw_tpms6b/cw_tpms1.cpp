#include<iostream>
#include<array>
#include<vector>
#include<string>
#include<cstring>
#include<cstdlib>
#include<typeinfo>
#include<fstream>
#include<algorithm>
#include<iterator>

#include "cw_media.h"
#include "cw_media2.h"
#include "cw_media3.h"
#include "cw_media4.h"

#define MAX_TOKEN_SIZE 1024

using namespace std;

	void loadMediaTemp(vector<Media*>*);
	void loadMedia(vector<Media*>*);
	void displayMedia(vector<Media*>*);
	void displayBooks(vector<Media*>*);
	void displayMusic(vector<Media*>*);
	void displayMovie(vector<Media*>*);
	
	Media *editBook(Book*);
	Media *editAudioTrack(Music*);
	Media *editMovie(Movie*);

	void editDeleteMedia(vector<Media*>*);
	void doSearch(vector<Media*>*, bool);
	void editDeleteByTitle(vector<Media*>*, bool);
	void editDeleteByGenre(vector<Media*>*, bool);
	void editDeleteByDate(vector<Media*>*, bool);

	void saveMedia(vector<Media*>*);

	void displayMenu(vector<Media*>*);
	void checkout(vector<Media*>*);
	void deleteEditMedia(vector<Media*>*);
	void callEditFn(vector<Media*> *, unsigned, bool);

int main()
{
	vector<Media*>*medias = new vector<Media*>;

	int num;

	cout << "Press 1 for hard-coded data, Press 2 to read from DB file: ";
	cin >> num;
	cin.ignore();	
	
	if (num == 1)
		loadMediaTemp(medias);
	else
		loadMedia(medias);

	displayMenu(medias);
	
	saveMedia(medias);
	delete medias;

	return 0;
}


void loadMediaTemp(vector<Media*>*medias)
{
//Create Music Objects
	medias->push_back(new Book("Leviathan", "Book", "Philosophy", "1651", "Thomas Hobbes"));
	medias->push_back(new Book("C++", "Book", "Reference", "2014", "Paul Deitel"));
	medias->push_back(new Book("The Dictionary", "Book", "Reference", "1941", "Webster"));
	medias->push_back(new Book("Fabric of the Cosmos", "Book", "Physics", "2004", "Brian Greene"));
	medias->push_back(new Book("Geneology of Morals", "Book", "Philosophy", "1887", "Fredrich Neitzche"));
	medias->push_back(new Book("Beyond Good and Evil", "Book", "Philosophy", "1886", "Fredrich Neitzche"));
	medias->push_back(new Book("The Use and Abuse of History","Book", "Philosophy", "1874",  "Fredrich Neitzsche"));
	medias->push_back(new Book("Thus Spoke Zarathustra", "Book", "Philosophy", "1891", "Fredrich Neitzsche"));
	medias->push_back(new Book("Building Construction for the Fire Service","Book", "Educational", "1971",  "Francis Brannigan"));
	medias->push_back(new Book("Second Discourse", "Book", "Philosophy", "1755", "Jean-Jacques Rousseau"));
	
//Create Music Objects
	medias->push_back(new Music("Back in Black", "Music", "Rock", "1980", "AC/DC"));
	medias->push_back(new Music("Ramble On", "Music", "Rock", "1969", "Led Zeppelin"));
	medias->push_back(new Music("Just a Memory", "Music", "Brooklyn Rap", "2005", "Notrious Big"));
	medias->push_back(new Music("Brooklyn We Go Hard", "Music", "Brooklyn Rap", "2009", "Jay Z"));
	medias->push_back(new Music("What You Know", "Music", "Atlanta Rap", "2006",  "TI"));
	medias->push_back(new Music("White and Nerdy", "Music", "Hip Hop", "2006", "Weird Al"));
	medias->push_back(new Music("Cowboys from Hell", "Music", "Rock", "1990", "Pantera"));
	medias->push_back(new Music("Lucky Man", "Music", "Rock", "1997", "The Verve"));
	medias->push_back(new Music("Top of the World", "Music", "Rock", "1991", "Van Halen"));
	medias->push_back(new Music("Ain't Nothin but a G Thang", "Music", "West Coast Rap", "1992", "Dr Dre"));

//Create new Movie Vector Objects

	medias->push_back(new Movie("Apollo 13","Movie", "Drama", "1995", "Brian Grazer"));
	medias->push_back(new Movie("Saving Private Ryan", "Movie", "War", "1998", "Steven Spielberg"));
	medias->push_back(new Movie("8 Mile", "Movie", "Drama", "2002", "Marshall Mathers"));
	medias->push_back(new Movie("Who Framed Roger Rabbit", "Movie", "Comedy", "1988", "Robert Zemeckis"));
	medias->push_back(new Movie("Step Brothers", "Movie", "Comedy", "2008",  "Adam McKay"));
	medias->push_back(new Movie("Jobs", "Movie", "Drama", "2013", "Joshua Michael Stern"));
	medias->push_back(new Movie("The Blind Side", "Movie", "Drama", "2009", "John Lee Hancock"));
	medias->push_back(new Movie("Backdraft", "Movie", "Thriller", "1991", "Ron Howard"));
	medias->push_back(new Movie("Ladder 49" , "Movie", "Thriller", "2004", "Jay Russel"));
	medias->push_back(new Movie("We Were Soldiers", "Movie", "War", "2002", "Randall Wallace"));
}

void saveMedia(vector<Media*>*medias)
{
	ofstream outClientFile("mediaDB.dat", ios::out);

	if ( !outClientFile)
	{
		cerr << "File could not be opened" << endl;
		exit(EXIT_FAILURE);
	}
		
	for (Media* m : *medias)
	{
		outClientFile << *m << endl;
	}

	for (Media* m : *medias)
		delete m;

	outClientFile.close();
}
	


void displayMedia(vector<Media*>*medias)
{
	for (Media* m : *medias)
	//for(unsigned int i = 0; i < medias->size(); i++)
	cout << m->toString() << endl;
}

void loadMedia(vector<Media*>*medias)
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
			
			medias->push_back(new Music(aTitle, aType, aGenre, aYear, x));
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
				
			medias->push_back(new Movie(aTitle, aType, aGenre, aYear, x));
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
			
			medias->push_back(new Book(aTitle, aType, aGenre, aYear, x));
		}

		inClientFile.getline(token, MAX_TOKEN_SIZE, '|');
	}
	inClientFile.close();			
		
}

void editDeleteByTitle(vector<Media*> *medias, bool del)
{
	char token[MAX_TOKEN_SIZE];

	cout << endl;
	cout << "**************************************************" << endl;
	cout << "                   Search by Title                " << endl;
	cout << "**************************************************" << endl;

	cout << "Enter Search Term" << endl;
	std::cin.getline(token, MAX_TOKEN_SIZE);
	string findStr(token);
	auto fn = [&findStr](const Media *m){ return m->getTitle() == findStr; };
	auto location = find_if(medias->cbegin(), medias->cend(), fn);
	unsigned idx = location - medias->cbegin();
	callEditFn(medias, idx, del);
}

void callEditFn(vector<Media*> *medias, unsigned idx, bool del)
{
	if (del)
	{
		try
		{
			Media* item = medias->at(idx);
			medias->erase(medias->begin() + idx);
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

void editDeleteByGenre(vector<Media*> *medias, bool del)
{
	char token[MAX_TOKEN_SIZE];

	cout << endl;
	cout << "********************************************" << endl;
	cout << "               Search By Genre              " << endl;
	cout << "********************************************" << endl;
	cout << endl;

	std::cin.getline(token, MAX_TOKEN_SIZE);
	string theString(token);
	auto fn = [&theString](const Media*m) { return m->getGenre() == theString; };
	auto location = find_if(medias->cbegin(), medias->cend(), fn);
	unsigned idx = location - medias->cbegin();
	callEditFn(medias, idx, del);
}

void editDeleteByDate(vector<Media*> *medias, bool del)
{
	char token[MAX_TOKEN_SIZE];

	cout << endl;
	cout << "********************************************" << endl;
	cout << "               Search By Genre              " << endl;
	cout << "********************************************" << endl;
	cout << endl;

	std::cin.getline(token, MAX_TOKEN_SIZE);
	string theString(token);
	auto fn = [&theString](const Media*m) { return m->getYear() == theString; };
	auto location = find_if(medias->cbegin(), medias->cend(), fn);
	unsigned idx = location - medias->cbegin();
	callEditFn(medias, idx, del);
}

void doSearch(vector<Media*>* medias, bool del)
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

void editDeleteMedia(vector<Media*> *medias)
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


void addMedia(vector<Media*>*medias)
{
	char selection[MAX_TOKEN_SIZE] = {};
	int num = 0;
	
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
			medias->push_back(editBook(new Book()));
			break;

		case 2:
			medias->push_back(editAudioTrack(new Music()));
			break;

		case 3:
			medias->push_back(editMovie(new Movie()));
			break;

		case 4:
			break;

		default:
			break;

		}	
	}
	while(num !=4);

}

void search(vector < Media* > *medias )
{
	cout << endl;
	cout << "******************************************" << endl;
	cout << "                 SEARCH                   " << endl;
	cout << "******************************************" << endl;

	char token[MAX_TOKEN_SIZE];
	std::cout << "Enter what you want to search for" << endl;
	std::cin.ignore();
	std::cin.getline(token, MAX_TOKEN_SIZE);	

	string findStr(token);

	auto location = find_if(medias->cbegin(), medias->cend(), [&findStr](Media* m) {return m->getTitle() == findStr; });

	if (location != medias->cend())
	{	
		unsigned int idx = location - medias->cbegin();
		{
			Media* m = (*medias)[idx];
			std::cout << *m << endl;
		}
	}
	else
		cout << "WHAT"<<endl;

}

void checkout(vector<Media*>*medias)
{
	cout << endl;
	cout << "************************************" << endl;
	cout << "              CHECKOUT              " << endl;
	cout << "************************************" << endl;
	cout << "Feature comming soon" << endl;
}

void displayMenu(vector <Media*> *media)
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
	while ( choice != 5 );
}



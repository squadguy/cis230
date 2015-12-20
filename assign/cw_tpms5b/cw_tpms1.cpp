#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<cstdlib>
#include<typeinfo>
#include<fstream>
#include "cw_media.h"
#include "cw_media2.h"
#include "cw_media3.h"
#include "cw_media4.h"

#define MAX_TOKEN_SIZE 1024

using namespace std;

	void loadMediaTemp(vector<Media*>*);
	void loadMedia(vector<Media*>*);
	void displayMedia(vector<Media*>*);
	void saveMedia(vector<Media*>*);

	void displayMenu(vector<Media*>*);
	void search();
	void checkout();
	void addMedia();
	void deleteEditMedia();
	
int main()
{
//	cout << endl << "*******************************************************" << endl;

//	cout << "Welcome to the CIS230 Media Player!" << endl;
//	cout << "This is 'Milestone #4' of the CIS230 Term Project" << endl;

//	cout << endl << endl;

	vector<Media*>*medias = new vector<Media*>;

	int num = 0;
	cout << "Press 1 for hard-coded data, Press 2 to read from DB file: ";
	cin >> num;
	if (num == 1)
		loadMediaTemp(medias);
	else
		loadMedia(medias);
	
//	cout << endl << "***********************************************************" << endl;

//	cout << endl << "***********************************************************" << endl;

//	cout << "Here are the medias available in the media player: " << endl << endl;

	displayMenu(medias);
	
	//displayMedia(medias);

//	cout << endl << "***********************************************************" << endl;

	saveMedia(medias);
	delete medias;

	return 0;
}


void loadMediaTemp(vector<Media*>*medias)
{
	ifstream inClientFile("mediaDB.dat", ios::in);

	//vector<Media*> medias;

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
		else
		{
			for (Media* m : *medias)
			{
				outClientFile << *m << endl;

			//	cout << "Deleting object of " << typeid(*m).name() << endl;

				delete m;
			}
			outClientFile.close();
		}
	}

/*
	cout << "Here are the medias available in the media player:" << endl << endl;
	for (Media* m : medias)
	{
		cout << *m << endl;
	}

	cout << endl << endl;

	for (Media* m : medias)
	{
		cout << "deleting object of " << typeid(*m).name() << endl;

		delete m;
	}

	cout << endl << endl;
*/


void displayMedia(vector<Media*>*medias)
	{
		for (Media* m : *medias)
								//for(unsigned int i = 0; i < medias->size(); i++)
		cout << m->toString() << endl;
	}


/*
void saveMedia(vector<Media*>*medias)
{
	ofstream outClientFile ("mediaDB.dat", ios::out);
	
	if ( !outClientFile)
	{
		cerr << "File could not be opened" << endl;
		exit (1);
	}

		outClientFile << "HI" << endl;
}
*/


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

void deleteEdit()
{
	cout << endl;
	cout << "************************************************" << endl;
	cout << "                 DELETE/EDIT                    " << endl;
	cout << " **********************************************" << endl;
	cout << endl;

	cout << "Feature coming soon" << endl;
}

void addMedia()
{
	cout << endl;
	cout << "*****************************************" << endl;
	cout << "                 ADD MEDIA                " << endl;
	cout << "******************************************" << endl;


	cout << "Feature coming soon" << endl;
}


void search()
{
	int num = 0;

	cout << endl;
	cout << "******************************************" << endl;
	cout << "                 SEARCH                   " << endl;
	cout << "******************************************" << endl;

	cout << "Search by:" << endl;
	cout << "1) Book" << endl;
	cout << "2) Movie" << endl;
	cout << "3) Music" << endl;

	cin >> num;

	cout << "Feature comming soon" << endl;
}

void checkout()
{
	cout << endl;
	cout << "************************************" << endl;
	cout << "              CHECKOUT              " << endl;
	cout << "************************************" << endl;
	cout << "Feature comming soon" << endl;
}

void displayMenu(vector <Media*> *media)
{
	cout << "*****************************************" << endl;
	cout << "                MAIN MENU                " << endl;
	cout << "*****************************************" << endl;

	int choice = 0;

	cout << "Enter selection from following menu" << endl;
	cout << "1) Display" << endl;
	cout << "2) Search" << endl;
	cout << "3) Checkout" << endl;
	cout << "4) Add Media Item" << endl;
	cout << "5) Delete/Edit Media Item" << endl;

	cin >> choice;

	switch(choice)
	{
		case 1:
			displayMedia(media);
			break;
		case 2: 
			search();
			break;
		case 3:
			checkout();
			break;
		case 4: 
			addMedia();
			break;
		case 5:
			deleteEdit();
			break;

	}

}



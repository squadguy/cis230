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
	void saveMedia(vector<Media*>*);

	void displayMenu(vector<Media*>*);
	void search(vector<Media*>*);
	void checkout();
	void addMedia();
	void deleteEditMedia(vector<Media*>*);

	void addBook();
	void addMovie();
	void addMusic();

int main()
{
	vector<Media*>*medias = new vector<Media*>;

	int num;

	cout << "Press 1 for hard-coded data, Press 2 to read from DB file: ";
	cin >> num;
	
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

void deleteEdit(vector<Media*> *medias)
{

	string newTitle;
	string newType;
	string newGenre;
	string newYear;
	string newX;

	cout << endl;
	cout << "************************************************" << endl;
	cout << "                 DELETE/EDIT                    " << endl;
	cout << " **********************************************" << endl;
	cout << endl;

	char token[MAX_TOKEN_SIZE];
	std::cout << "Enter the title you want to edit or delete" << endl;
	std::cin.ignore();
	std::cin.getline(token, MAX_TOKEN_SIZE);
	string findStr(token);

	auto location = find_if(medias->cbegin(), medias->cend(), [&findStr](Media* m) { return m->getTitle() == findStr; } );
	int num;

	if (location != medias->cend())
	{
		unsigned int idx = location - medias->cbegin();
		std::cout << "Press 1 for Delete" << endl;
		std::cout << "Press 2 for Edit" << endl;
		std::cin >> num;
	
		if(num == 1)
		{
			std::cout << "Deleting item" << endl;
			//delete object in memory
			delete (*medias)[idx];
			//remove from vector
			//medias->erase(medias->cbegin() + idx);
		}
		if(num == 2)
		{
			Book* b = dynamic_cast<Book*>((*medias)[idx]);
		
				cout << "Enter Title" << endl;
				cin >> newTitle;
				b->setTitle(newTitle);
				std::cin.ignore();

				cout << "Enter Media Type (Book)"<< endl;
				cin >> newType;
				b->setMediaType(newType);
				std::cin.ignore();

				cout << "Enter Genre" << endl;
				cin >> newGenre;
				b->setGenre(newGenre);
				std::cin.ignore();

				cout << "Enter Year" << endl;
				cin >> newYear;
				b->setYear(newYear);
				std::cin.ignore();

				cout << "Enter Author" << endl;
				cin >> newX;
				b->setAuthor(newX);
				std::cin.ignore();
		}
	}	
	else
		cout << "File Not Found" << endl;

}


void addMedia(vector<Media*>*medias)
{
	int num = 0;

	string title;
	string type;
	string genre;
	string year;
	string x;

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

	cin >> num;
	cin.ignore(500, '\n');

	switch(num)
	{
		case 1:
			cout << "Enter the Book's Title:" << endl;
			getline(cin, title);

			cout << "Enter the Book's type (Book):" << endl;
			getline(cin, type);

			cout << "Ente the Book's Genre:" << endl;
			getline(cin, genre);

			cout << "Enter the Year it was Written:" << endl;
			getline(cin, year);

			cout << "Enter the Author's Name:" << endl;
			getline(cin, x);
			cin.ignore(500, '\n');

			medias->push_back(new Book(title, type, genre, year, x));

			break;
		case 2:
			cout << "Enter the Movie's Title:" << endl;
			getline(cin, title);

			cout << "Enter the Movies type (Movie):" << endl;
			getline(cin, type);

			cout << "Enter the Movies Genre:" << endl;
			getline(cin, genre);

			cout << "Enter the Year is was made:" << endl;
			getline(cin, year);
			
			cout << "Enter the Producer's Name:" << endl;
			getline(cin, x);
			cin.ignore(500, '\n');

			medias->push_back(new Movie(title, type, genre, year, x));

			break;
		case 3:
			cout << "Enter the Song's Title:" << endl;
			getline(cin, title);

			cout << "Enter the Song's type (Music):" << endl;
			getline(cin, type);

			cout << "Enter the Songs Genre:" << endl;
			getline(cin, genre);

			cout << "Enter the Year Song was made:" << endl;
			getline(cin, year);
			
			cout << "Enter the Artist's Name:" << endl;
			getline(cin, x);
			cin.ignore(500, '\n');

			medias->push_back(new Music(title, type, genre, year, x));
			break;
		
		case 4:
			break;

	}
	
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
	int choice; 

	do
	{

		cout << "*****************************************" << endl;
		cout << "                MAIN MENU                " << endl;
		cout << "*****************************************" << endl;


		cout << "Enter selection from following menu" << endl;
		cout << "1) Display" << endl;
		cout << "2) Search" << endl;
		cout << "3) Checkout" << endl;
		cout << "4) Add Media Item" << endl;
		cout << "5) Delete/Edit Media Item" << endl;
		cout << "6) Exit" << endl;

		cin >> choice;

		switch(choice)
		{
			case 1:
				displayMedia(media);
				break;
			case 2: 
				search(media);
				break;
			case 3:
				checkout();
				break;
			case 4: 
				addMedia(media);
				break;
			case 5:
				deleteEdit(media);
				break;
			case 6:
				break;
			default:
				cout << "Not a Choice" << endl;

	
		}
	}
	while ( choice != 6 );
}



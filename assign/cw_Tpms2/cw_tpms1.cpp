#include<iostream>
#include<vector>
#include<string>
#include "cw_media.h"
#include "cw_media2.h"

using namespace std;

int main()
{
	
	vector <Book> books;
	vector <Music> songs;
/*	
	media[0].setTitle("Leviathan");
	media[0].setComposer("Thomas Hobbes");
	media[0].setMediaType("Book");
	media[0].setGenre("Philosophy");
	media[0].setYear("1651");
	media[1].setTitle("Band of Brothers");
	media[1].setComposer("Tom Hanks");
	media[1].setMediaType("TV Mini-Seres");
	media[1].setGenre("War");
	media[1].setYear("2001");
	media[2].setTitle("Back in Black");
	media[2].setComposer("AC/DC");
	media[2].setMediaType("Music");
	media[2].setGenre("Rock");
	media[2].setYear("1980");
	media[3].setTitle("Fabric of the Cosmos");
	media[3].setComposer("Brian Greene");
	*************************/

//Create Book Objects
	books.push_back(Book("Leviathan", "Thomas Hobbes", "Book", "Philosophy", "1651"));
	books.push_back(Book("Band of Brothers", "Tom Hanks", "TV Mini-Series", "War", "2001"));
	books.push_back(Book("", "AC/DC", "Music", "Rock", "1980"));
	books.push_back(Book("Fabric of the Cosmos", "Brian Greene", "Book", "Physics", "2004"));
	books.push_back(Book("Geneology of Morals", "Fredrich Neitzche", "Book", "Philosophy", "1887"));
	books.push_back(Book("Beyond Good and Evil", "Fredrich Neitzche", "Book", "Philosophy", "1886"));
	books.push_back(Book("The Use and Abuse of History", "Fredrich Neitzsche", "Book", "Philosophy", "1874"));
	books.push_back(Book("Thus Spoke Zarathustra" , "Fredrich Neitzsche", "Book", "Philosophy", "1891"));
	books.push_back(Book("Building Construction for the Fire Service", "Francis Brannigan", "Book", "Educational", "1971"));
	books.push_back(Book("Second Discourse", "Jean-Jacques Rousseau", "Book", "Philosophy", "1755"));
	
//Create Music Objects
	songs.push_back(Music("Back in Black", "AC/DC", "Music", "Rock", "1980"));
	songs.push_back(Music("Ramble On", "Led Zeppelin", "Music", "Rock", "1969"));
	songs.push_back(Music("Just a Memory", "Notrious Big", "Music", "Brooklyn Rap", "2005"));
	songs.push_back(Music("Brooklyn We Go Hard", "Jay Z", "Music", "Brooklyn Rap", "2009"));
	songs.push_back(Music("What You Know", "TI", "Music", "Atlanta Rap", "2006"));
	songs.push_back(Music("White and Nerdy", "Weird Al", "Music", "Hip Hop", "2006"));
	songs.push_back(Music("Cowboys from Hell", "Pantera", "Music", "Rock", "1990"));
	songs.push_back(Music("Lucky Man", "The Verve", "Music", "Rock", "1997"));
	songs.push_back(Music("Top of the World", "Van Halen", "Music", "Rock", "1991"));
	songs.push_back(Music("Ain't Nothin' but a G Thang", "Dr Dre", "Music", "West Coast Rap", "1992"));
/************************
	media[0] = media0;
	media[1] = media1;
	media[2] = media2;
	media[3] = media3;
	media[4] = media4;
	media[5] = media5;
	media[6] = media6;
	media[7] = media7;
	media[8] = media8;
	media[9] = media9;
************************/

/**************************
//Tests getter and setter functions
	cout << endl;
	cout<< "Testing getter and setter function w/ first object" << endl;
	cout << media1.getTitle() << endl;
	cout << media1.getMediaType() << endl;
	cout << media1.getGenre() << endl;
	cout << media1.getComposer() << endl;
	cout << media1.getYear() << endl;
	cout << endl;
	cout << endl;
*/

/*
//Using toString to return objects
	cout << "Displaying objects" << endl;
	cout << endl;
	cout << media1<<(media1) << endl;
	cout << media2<<(media2) << endl;
	cout << media3<<(media3) << endl;
	cout << media4<<(media4) << endl;
	cout << media5<<(media5) << endl;
	cout << media6<<(media6) << endl;
	cout << media7<<(media7) << endl;
	cout << media8<<(media8) << endl;
*/

/*
//Using toString to return book objects
	cout << "Displaying book objects" << endl;
	cout << endl;
	cout << book0.toString() << endl;
	cout << books[1].toString() << endl;
	cout << book2.toString() << endl;
	cout << book3.toString() << endl;
	cout << book4.toString() << endl;
	cout << book5.toString() << endl;
	cout << book6.toString() << endl;
	cout << book7.toString() << endl;
	cout << book8.toString() << endl;
	cout << book9.toString() << endl;

//Use toString to return Music Objects

	cout << "Displaying Music Objects" << endl;
	cout << endl;
	cout << music0.toString() << endl;
	cout << music1.toString() << endl;
	cout << music2.toString() << endl;
	cout << music3.toString() << endl;
	cout << music4.toString() << endl;
	cout << music5.toString() << endl;
	cout << music6.toString() << endl;
	cout << music7.toString() << endl;
	cout << music8.toString() << endl;
	cout << music9.toString() << endl;
*/


//Using for-loop to display books vector
	for(int i = 0; i < 10; i++)
	{
		cout << books[i] << endl;
	}
/*
//Using for-loop to display books vector
	for(int i = 0; i < 10; i++)
	{
		cout << books[i].toString() << endl;
	}
*/


//Using for-loop to display music vector
	for(int i = 0; i < 10; i++)
	{
		cout << songs[i] << endl;
	}

/*
//Using for-loop to display music vector
	for(int i = 0; i < 10; i++)
	{
		cout << songs[i].toString() << endl;
	}
*/
	return 0;
}


#include<iostream>
#include<vector>
#include<string>
#include "cw_media.h"

using namespace std;

int main()
{
	/************************
	vector <Media> media(3);
	
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

//Create Objects
	Media media0("Leviathan", "Thomas Hobbes", "Book", "Philosophy", "1651");
	Media media1("Band of Brothers", "Tom Hanks", "TV Mini-Series", "War", "2001");
	Media media2("Back in Black", "AC/DC", "Music", "Rock", "1980");
	Media media3("Fabric of the Cosmos", "Brian Greene", "Book", "Physics", "2004");
	Media media4("Geneology of Morals", "Fredrich Neitzche", "Book", "Philosophy", "1887");
	Media media5("Beyond Good and Evil", "Fredrich Neitzche", "Book", "Philosophy", "1886");
	Media media6("The Use and Abuse of History", "Fredrich Neitzsche", "Book", "Philosophy", "1874");
	Media media7("Thus Spoke Zarathustra" , "Fredrich Neitzsche", "Book", "Philosophy", "1891");
	Media media8("Building Construction for the Fire Service", "Francis Brannigan", "Book", "Educational", "1971");
	Media media9("Second Discourse", "Jean-Jacques Rousseau", "Book", "Philosophy", "1755");

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

//Using toString to return objects
	cout << "Displaying objects" << endl;
	cout << endl;
	cout << media1.toString() << endl;
	cout << media2.toString() << endl;
	cout << media3.toString() << endl;
	cout << media4.toString() << endl;
	cout << media5.toString() << endl;
	cout << media6.toString() << endl;
	cout << media7.toString() << endl;
	cout << media8.toString() << endl;

/******************************
//Using for-loop to display vector
	for(int i = 0; i < media.size(); i++)
	{
		cout << media[i].toString() << endl;
	}
******************************/

	return 0;
}

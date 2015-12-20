#include<iostream>
#include<vector>
#include<string>
#include "cw_media.h"
#include "cw_media2.h"
#include "cw_media3.h"
#include "cw_media4.h"

using namespace std;

int main()
{
	 //void loadMediaTemp(vector<media*>*);
	 //void loadMedia(vecor<Media*>*);
	 //void displayMedia(vector<Media*>*);
	 //void saveMedia(vector<Media*>*);
	
	vector <Media*> medias;
	//vector <Media*> songs;
	//vector <Media*> movies;

//	vector <Book> books;
//	vector <Music> songs;
//	vector <new Movie> movies;
/*	
	medias[0].setTitle("Leviathan");
	medias[0].setComposer("Thomas Hobbes");
	medias[0].setMediaType("Book");
	medias[0].setGenre("Philosophy");
	medias[0].setYear("1651");
	medias[1].setTitle("Band of Brothers");
	medias[1].setComposer("Tom Hanks");
	medias[1].setMediaType("TV Mini-Seres");
	medias[1].setGenre("War");
	medias[1].setYear("2001");
	medias[2].setTitle("Back in Black");
	medias[2].setComposer("AC/DC");
	medias[2].setMediaType("Music");
	medias[2].setGenre("Rock");
	medias[2].setYear("1980");
	medias[3].setTitle("Fabric of the Cosmos");
	medias[3].setComposer("Brian Greene");
	*************************/

//Create Book Objects
	medias.push_back(new Book("Leviathan", "Thomas Hobbes", "Book", "Philosophy", "1651"));
	medias.push_back(new Book("Band of Brothers", "Tom Hanks", "TV Mini-Series", "War", "2001"));
	medias.push_back(new Book("", "AC/DC", "Music", "Rock", "1980"));
	medias.push_back(new Book("Fabric of the Cosmos", "Brian Greene", "Book", "Physics", "2004"));
	medias.push_back(new Book("Geneology of Morals", "Fredrich Neitzche", "Book", "Philosophy", "1887"));
	medias.push_back(new Book("Beyond Good and Evil", "Fredrich Neitzche", "Book", "Philosophy", "1886"));
	medias.push_back(new Book("The Use and Abuse of History", "Fredrich Neitzsche", "Book", "Philosophy", "1874"));
	medias.push_back(new Book("Thus Spoke Zarathustra" , "Fredrich Neitzsche", "Book", "Philosophy", "1891"));
	medias.push_back(new Book("Building Construction for the Fire Service", "Francis Brannigan", "new Book", "Educational", "1971"));
	medias.push_back(new Book("Second Discourse", "Jean-Jacques Rousseau", "Book", "Philosophy", "1755"));
	
//Create Music Objects
	medias.push_back(new Music("Back in Black", "AC/DC", "Music", "Rock", "1980"));
	medias.push_back(new Music("Ramble On", "Led Zeppelin", "Music", "Rock", "1969"));
	medias.push_back(new Music("Just a Memory", "Notrious Big", "Music", "Brooklyn Rap", "2005"));
	medias.push_back(new Music("Brooklyn We Go Hard", "Jay Z", "Music", "Brooklyn Rap", "2009"));
	medias.push_back(new Music("What You Know", "TI", "Music", "Atlanta Rap", "2006"));
	medias.push_back(new Music("White and Nerdy", "Weird Al", "Music", "Hip Hop", "2006"));
	medias.push_back(new Music("Cowboys from Hell", "Pantera", "Music", "Rock", "1990"));
	medias.push_back(new Music("Lucky Man", "The Verve", "Music", "Rock", "1997"));
	medias.push_back(new Music("Top of the World", "Van Halen", "Music", "Rock", "1991"));
	medias.push_back(new Music("Ain't Nothin but a G Thang", "Dr Dre", "Music", "West Coast Rap", "1992"));

//Create new Movie Vector Objects

	medias.push_back(new Movie("Apollo 13", "Brian Grazer", "Movie", "Drama", "1995"));
	medias.push_back(new Movie("Saving Private Ryan", "Steven Spielberg", "Movie", "War", "1998"));
	medias.push_back(new Movie("8 Mile", "Marshall Mathers", "Movie", "Drama", "2002"));
	medias.push_back(new Movie("Who Framed Roger Rabbit", "Robert Zemeckis", "Movie", "Comedy", "1988"));
	medias.push_back(new Movie("Step Brothers", "Adam McKay", "Movie", "Comedy", "2008"));
	medias.push_back(new Movie("Jobs", "Joshua Michael Stern", "Movie", "Drama", "2013"));
	medias.push_back(new Movie("The Blind Side", "John Lee Hancock", "Movie", "Drama", "2009"));
	medias.push_back(new Movie("Backdraft", "Ron Howard", "Movie", "Thriller", "1991"));
	medias.push_back(new Movie("Ladder 49" , "Jay Russel", "Movie", "Thriller", "2004"));
	medias.push_back(new Movie("We Were Soldiers", "Randall Wallace", "Movie", "War", "2002"));
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
	for(unsigned int i = 0; i < medias.size(); i++)
	{
		cout << medias[i]->toString() << endl;
	}
/*
//Using for-loop to display books vector
	for(int i = 0; i < 10; i++)
	{
		cout << books[i].toString() << endl;
	}


//Using for-loop to display music vector
	for(int i = 0; i < 10; i++)
	{
		cout << songs[i] << endl;
	}


//Using for-loop to display music vector
	for(int i = 0; i < 10; i++)
	{
		cout << songs[i].toString() << endl;
	}


//Display movie vector w/ for-loop
	for(int i = 0; i < 10; i++)
	{
		cout << movies[i] << endl;
	}
*/

return 0;
}


#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include "cw_media.h"
#include "cw_media2.h"
#include "cw_media3.h"
#include "cw_media4.h"

using namespace std;

	void loadMediaTemp(vector<Media*>*);
	 //void loadMedia(vecor<Media*>*);
//	void displayMedia(vector<Media*>*);
	void saveMedia(vector<Media*>*);
	
int main()
{
	cout << endl << "*******************************************" << endl;
	cout << "Welecome to the CIS1230 Media Player!" << endl;
	cout << "This is 'Milestone #1 of the CIS230 Term Project" << endl;
	cout << endl << "*********************************************" << endl;

	vector<Media*>*medias = new vector<Media*>;
	loadMediaTemp(medias);
	
	cout << endl << "********************************************"<< endl;

	cout << endl << "***************************************" << endl;
	cout << "HEre are the medias avaialble in the media player: " << endl << endl;

//	displayMedia(medias);

	cout << endl << "********************************************" << endl;

	saveMedia(medias);
	

	return 0;
}

void loadMediaTemp(vector<Media*>*medias)
{
	//vector <Media*> medias;
	medias->push_back(new Book("Leviathan", "Thomas Hobbes", "Book", "Philosophy", "1651"));
	medias->push_back(new Book("Band of Brothers", "Tom Hanks", "TV Mini-Series", "War", "2001"));
	medias->push_back(new Book("", "AC/DC", "Music", "Rock", "1980"));
	medias->push_back(new Book("Fabric of the Cosmos", "Brian Greene", "Book", "Physics", "2004"));
	medias->push_back(new Book("Geneology of Morals", "Fredrich Neitzche", "Book", "Philosophy", "1887"));
	medias->push_back(new Book("Beyond Good and Evil", "Fredrich Neitzche", "Book", "Philosophy", "1886"));
	medias->push_back(new Book("The Use and Abuse of History", "Fredrich Neitzsche", "Book", "Philosophy", "1874"));
	medias->push_back(new Book("Thus Spoke Zarathustra" , "Fredrich Neitzsche", "Book", "Philosophy", "1891"));
	medias->push_back(new Book("Building Construction for the Fire Service", "Francis Brannigan", "new Book", "Educational", "1971"));
	medias->push_back(new Book("Second Discourse", "Jean-Jacques Rousseau", "Book", "Philosophy", "1755"));
	
//Create Music Objects
	medias->push_back(new Music("Back in Black", "AC/DC", "Music", "Rock", "1980"));
	medias->push_back(new Music("Ramble On", "Led Zeppelin", "Music", "Rock", "1969"));
	medias->push_back(new Music("Just a Memory", "Notrious Big", "Music", "Brooklyn Rap", "2005"));
	medias->push_back(new Music("Brooklyn We Go Hard", "Jay Z", "Music", "Brooklyn Rap", "2009"));
	medias->push_back(new Music("What You Know", "TI", "Music", "Atlanta Rap", "2006"));
	medias->push_back(new Music("White and Nerdy", "Weird Al", "Music", "Hip Hop", "2006"));
	medias->push_back(new Music("Cowboys from Hell", "Pantera", "Music", "Rock", "1990"));
	medias->push_back(new Music("Lucky Man", "The Verve", "Music", "Rock", "1997"));
	medias->push_back(new Music("Top of the World", "Van Halen", "Music", "Rock", "1991"));
	medias->push_back(new Music("Ain't Nothin but a G Thang", "Dr Dre", "Music", "West Coast Rap", "1992"));

//Create new Movie Vector Objects

	medias->push_back(new Movie("Apollo 13", "Brian Grazer", "Movie", "Drama", "1995"));
	medias->push_back(new Movie("Saving Private Ryan", "Steven Spielberg", "Movie", "War", "1998"));
	medias->push_back(new Movie("8 Mile", "Marshall Mathers", "Movie", "Drama", "2002"));
	medias->push_back(new Movie("Who Framed Roger Rabbit", "Robert Zemeckis", "Movie", "Comedy", "1988"));
	medias->push_back(new Movie("Step Brothers", "Adam McKay", "Movie", "Comedy", "2008"));
	medias->push_back(new Movie("Jobs", "Joshua Michael Stern", "Movie", "Drama", "2013"));
	medias->push_back(new Movie("The Blind Side", "John Lee Hancock", "Movie", "Drama", "2009"));
	medias->push_back(new Movie("Backdraft", "Ron Howard", "Movie", "Thriller", "1991"));
	medias->push_back(new Movie("Ladder 49" , "Jay Russel", "Movie", "Thriller", "2004"));
	medias->push_back(new Movie("We Were Soldiers", "Randall Wallace", "Movie", "War", "2002"));

}
/*
void displayMedia(vector<Media*>*medias)
	{
	for(unsigned int i = 0; i < medias->size(); i++)
		cout << medias[i]->toString() << endl;
	}
*/
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



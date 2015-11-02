#include<iostream>
#include<vector>
#include<string>
#include "cw_media2.h"

using namespace std;

Music::Music(string _title, string _composer, string _mediaType, string _genre, string _year)
{
	setTitle(_title);
	setComposer(_composer);
	setMediaType(_mediaType);
	setGenre(_genre);
	setYear(_year);
}

Music::Music(string _title, string _composer, string _mediaType, string _genre)
{
	setTitle(_title);
	setComposer(_composer);
	setMediaType(_mediaType);
	setGenre(_genre);
}

Music::Music(string _title, string _composer, string _mediaType)
{
	setTitle(_title);
	setComposer(_composer);
	setMediaType(_mediaType);
}

void Music::setTitle(string _title)
{
	title = _title;
}

string Music::getTitle()
{
	return title;
}

void Music::setMediaType(string _mediaType)
{
	mediaType = _mediaType;
}

string Music::getMediaType()
{
	return mediaType;
}

void Music::setGenre(string _genre)
{
	genre = _genre;
}

string Music::getGenre()
{
	return genre;
}

void Music::setComposer(string _composer)
{
	composer = _composer;
}

string Music::getComposer()
{
	return composer;
}

void Music::setYear(string _year)
{
	year = _year;
}

string Music::getYear()
{
	return year;
}

/****************************
string Music::toString()
{
	string x = "title: " + title  + "Composer: " + composer + "Category: " + mediaType + "Genre: " + genre + "Year: " + year;
}
***************************/

/*
string Music::toString()
{
	string x = "Title: " + this->getTitle() + "\n" + "Composer: " + getComposer() + "\n" + "Catagory: " +this->getMediaType() + "\n" + "Genre: " + this->getGenre() + "\n" + "Year: " + this->getYear() + "\n";
	
	return x;
}
*/


ostream &operator<<( ostream &output, const Music &song)
{
	output << "Title: " + song.title + "\n" + "Composer: " + song.composer + "\n" + "Catagory: " + song.mediaType + "\n" + "Genre: " + song.genre + "\n" + "Year: " + song.year + "\n";
	
	return output;
}



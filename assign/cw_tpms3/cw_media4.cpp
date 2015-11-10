#include<iostream>
#include<vector>
#include<string>
#include "cw_media4.h"

using namespace std;

Movie::Movie(string _title, string _composer, string _mediaType, string _genre, string _year)
{
	setTitle(_title);
	setComposer(_composer);
	setMediaType(_mediaType);
	setGenre(_genre);
	setYear(_year);
}

Movie::Movie(string _title, string _composer, string _mediaType, string _genre)
{
	setTitle(_title);
	setComposer(_composer);
	setMediaType(_mediaType);
	setGenre(_genre);
}

Movie::Movie(string _title, string _composer, string _mediaType)
{
	setTitle(_title);
	setComposer(_composer);
	setMediaType(_mediaType);
}

void Movie::setTitle(string _title)
{
	title = _title;
}

string Movie::getTitle()
{
	return title;
}

void Movie::setMediaType(string _mediaType)
{
	mediaType = _mediaType;
}

string Movie::getMediaType()
{
	return mediaType;
}

void Movie::setGenre(string _genre)
{
	genre = _genre;
}

string Movie::getGenre()
{
	return genre;
}

void Movie::setComposer(string _composer)
{
	composer = _composer;
}

string Movie::getComposer()
{
	return composer;
}

void Movie::setYear(string _year)
{
	year = _year;
}

string Movie::getYear()
{
	return year;
}

/****************************
string Media::toString()
{
	string x = "title: " + title  + "Composer: " + composer + "Category: " + mediaType + "Genre: " + genre + "Year: " + year;
}
***************************/

/*
string Movie::toString()
{
	string x = "Title: " + this->getTitle() + "\n" + "Composer: " + getComposer() + "\n" + "Catagory: " +this->getMediaType() + "\n" + "Genre: " + this->getGenre() + "\n" + "Year: " + this->getYear() + "\n";
	
	return x;
}
*/


ostream &operator<<( ostream &output, const Movie &movie )
{
	output << "Title: " + movie.title + "\n" + "Composer: " + movie.composer + "\n" + "Catagory: " + movie.mediaType + "\n" + "Genre: " + movie.genre + "\n" + "Year: " + movie.year + "\n";
	
	return output;
}



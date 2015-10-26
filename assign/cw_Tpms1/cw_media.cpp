#include<iostream>
#include<vector>
#include<string>
#include "cw_media.h"

using namespace std;

Media::Media(string _title, string _composer, string _mediaType, string _genre, string _year)
{
	setTitle(_title);
	setComposer(_composer);
	setMediaType(_mediaType);
	setGenre(_genre);
	setYear(_year);
}

Media::Media(string _title, string _composer, string _mediaType, string _genre)
{
	setTitle(_title);
	setComposer(_composer);
	setMediaType(_mediaType);
	setGenre(_genre);
}

Media::Media(string _title, string _composer, string _mediaType)
{
	setTitle(_title);
	setComposer(_composer);
	setMediaType(_mediaType);
}

void Media::setTitle(string _title)
{
	title = _title;
}

string Media::getTitle()
{
	return title;
}

void Media::setMediaType(string _mediaType)
{
	mediaType = _mediaType;
}

string Media::getMediaType()
{
	return mediaType;
}

void Media::setGenre(string _genre)
{
	genre = _genre;
}

string Media::getGenre()
{
	return genre;
}

void Media::setComposer(string _composer)
{
	composer = _composer;
}

string Media::getComposer()
{
	return composer;
}

void Media::setYear(string _year)
{
	year = _year;
}

string Media::getYear()
{
	return year;
}

/****************************
string Media::toString()
{
	string x = "title: " + title  + "Composer: " + composer + "Category: " + mediaType + "Genre: " + genre + "Year: " + year;
}
***************************/


string Media::toString()
{
	string x = "Title: " + this->getTitle() + "\n" + "Composer: " + getComposer() + "\n" + "Catagory: " +this->getMediaType() + "\n" + "Genre: " + this->getGenre() + "\n" + "Year: " + this->getYear() + "\n";
	
	return x;
}

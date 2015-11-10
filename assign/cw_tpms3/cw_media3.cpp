#include<iostream>
#include<vector>
#include<string>
#include "cw_media3.h"

using namespace std;

Book::Book(string _title, string _composer, string _mediaType, string _genre, string _year)
{
	setTitle(_title);
	setComposer(_composer);
	setMediaType(_mediaType);
	setGenre(_genre);
	setYear(_year);
}

Book::Book(string _title, string _composer, string _mediaType, string _genre)
{
	setTitle(_title);
	setComposer(_composer);
	setMediaType(_mediaType);
	setGenre(_genre);
}

Book::Book(string _title, string _composer, string _mediaType)
{
	setTitle(_title);
	setComposer(_composer);
	setMediaType(_mediaType);
}

void Book::setTitle(string _title)
{
	title = _title;
}

string Book::getTitle()
{
	return title;
}

void Book::setMediaType(string _mediaType)
{
	mediaType = _mediaType;
}

string Book::getMediaType()
{
	return mediaType;
}

void Book::setGenre(string _genre)
{
	genre = _genre;
}

string Book::getGenre()
{
	return genre;
}

void Book::setComposer(string _composer)
{
	composer = _composer;
}

string Book::getComposer()
{
	return composer;
}

void Book::setYear(string _year)
{
	year = _year;
}

string Book::getYear()
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
string Book::toString()
{
	string x = "Title: " + this->getTitle() + "\n" + "Composer: " + getComposer() + "\n" + "Catagory: " +this->getMediaType() + "\n" + "Genre: " + this->getGenre() + "\n" + "Year: " + this->getYear() + "\n";
	
	return x;
}
*/


ostream &operator<<( ostream &output, const Book &book )
{
	output << "Title: " + book.title + "\n" + "Composer: " + book.composer + "\n" + "Catagory: " + book.mediaType + "\n" + "Genre: " + book.genre + "\n" + "Year: " + book.year + "\n";
	
	return output;
}



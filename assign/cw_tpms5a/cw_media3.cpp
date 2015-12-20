#include<iostream>
#include<vector>
#include<string>
#include "cw_media3.h"

using namespace std;

	Book::Book(const string _title, const string _mediaType, const string _genre, const string _year, const string _author)
	: Media (_title, _mediaType, _genre, _year)
	{
		setAuthor(_author);
	}

	Book::~Book()
	{
	}
	
	void Book::setAuthor(const string _author)
	{
		author = _author;
	}
	string Book::getAuthor() const
	{
		return author;
	}

	string Book::toString() const
	{
		string x = "title: " + title + "\n" + "Author: " + author + "\n" + "Category: " + mediaType + "\n" + "genre : " "\n" + genre + "Year :" + year + "\n";
		return x;
	}

/***
ostream &operator<<( ostream &output, const Book &book)
{
	output << "Title: " + book.title + "\n" + "Composer: " + book.author + "\n" + "Catagory: " + book.mediaType + "\n" + "Genre: " + book.genre + "\n" + "Year: " + book.year + "\n";
	
	return output;
}
***/


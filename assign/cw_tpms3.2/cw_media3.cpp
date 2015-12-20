#include<iostream>
#include<vector>
#include<string>
#include "cw_media3.h"

using namespace std;

	Book::Book(string _title, string _mediaType, string _genre, string _year, string _author)
	: Media (_title, _mediaType, _genre, _year)
	{
		setAuthor(_author);
	}
	
	void Book::setAuthor(string _author)
	{
		author = _author;
	}
	string Book::getAuthor()
	{
		return author;
	}

ostream &operator<<( ostream &output, const Book &book)
{
	output << "Title: " + book.title + "\n" + "Composer: " + book.author + "\n" + "Catagory: " + book.mediaType + "\n" + "Genre: " + book.genre + "\n" + "Year: " + book.year + "\n";
	
	return output;
}



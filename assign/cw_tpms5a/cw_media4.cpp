#include<iostream>
#include<vector>
#include<string>
#include "cw_media4.h"

using namespace std;

	Movie::Movie(const string _title, const string _mediaType, const string _genre, const string _year, const string _director)
	: Media (_title, _mediaType, _genre, _year)
	{
		setDirector(_director);
	}

	Movie::~Movie()
	{
	}	
	
	void Movie::setDirector(const string _director)
	{
		director = _director;
	}
	string Movie::getDirector() const
	{
		return director;
	}

	string Movie::toString() const
	{
		string x = "Title: " + title + "\n" + "Director: " + director + "\n" + "Category: " + mediaType + "\n" + "Genre: " + genre + "\n" + "Year: " + year + "\n";
		return x;
	}
/*
ostream &operator<<( ostream &output, const Movie &movies)
{
	output << "Title: " + movies.title + "\n" + "Composer: " + movies.director + "\n" + "Catagory: " + movies.mediaType + "\n" + "Genre: " + movies.genre + "\n" + "Year: " + movies.year + "\n";
	
	return output;
}
*/


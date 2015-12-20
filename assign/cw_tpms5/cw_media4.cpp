#include<iostream>
#include<vector>
#include<string>
#include "cw_media4.h"

using namespace std;

	Movie::Movie(string _title, string _mediaType, string _genre, string _year, string _director)
	: Media (_title, _mediaType, _genre, _year)
	{
		setDirector(_director);
	}
	
	void Movie::setDirector(string _director)
	{
		director = _director;
	}
	string Movie::getDirector()
	{
		return director;
	}

	string Movie::toString()
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


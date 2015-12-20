#include<iostream>
#include<vector>
#include<string>
#include "cw_media2.h"

using namespace std;

	Music::Music(const string _title, const string _mediaType, const string _genre, const string _year, const string _artist)
	: Media (_title, _mediaType, _genre, _year)
	{
		setArtist(_artist);
	}

	Music::~Music()
	{
	}
	
	void Music::setArtist( const string _artist)
	{
		artist = _artist;
	}
	string Music::getArtist() const
	{
		return artist;
	}

	string Music::toString() const
	{
		string x = "title: " + title + "\n" + "Artist: " + artist + "\n" + "Category: " + mediaType + "\n" + "Genre: " + genre + "\n" + "Year :" + year + "\n";
		return x;
	}

/*
ostream &operator<<( ostream &output, const Music &song)
{
	output << "Title: " + song.title + "\n" + "Composer: " + song.artist + "\n" + "Catagory: " + song.mediaType + "\n" + "Genre: " + song.genre + "\n" + "Year: " + song.year + "\n";
	
	return output;
}
*/


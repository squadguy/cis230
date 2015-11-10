#include<iostream>
#include<vector>
#include<string>
#include "cw_media2.h"

using namespace std;

	Music::Music(string _title, string _mediaType, string _genre, string _year, string _artist)
	: Media (_title, _mediaType, _genre, _year)
	{
		setArtist(_artist);
	}
	
	void Music::setArtist(string _artist)
	{
		artist = _artist;
	}
	string Music::getArtist()
	{
		return artist;
	}

ostream &operator<<( ostream &output, const Music &song)
{
	output << "Title: " + song.title + "\n" + "Composer: " + song.artist + "\n" + "Catagory: " + song.mediaType + "\n" + "Genre: " + song.genre + "\n" + "Year: " + song.year + "\n";
	
	return output;
}



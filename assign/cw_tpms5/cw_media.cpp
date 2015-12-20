#include<iostream>
#include<vector>
#include<string>
#include "cw_media.h"

using namespace std;

Media::Media(string _title, string _mediaType, string _genre, string _year)
{
	setTitle(_title);
	setMediaType(_mediaType);
	setGenre(_genre);
	setYear(_year);
}

Media::Media(string _title, string _mediaType, string _genre)
	:title(_title), mediaType(_mediaType), genre(_genre)
{
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

void Media::setYear(string _year)
{
	year = _year;
}

string Media::getYear()
{
	return year;
}


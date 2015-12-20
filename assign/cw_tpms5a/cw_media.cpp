#include<iostream>
#include<vector>
#include<string>
#include "cw_media.h"

using namespace std;

Media::Media( const string _title, const string _mediaType, const string _genre, const string _year)
{
	setTitle(_title);
	setMediaType(_mediaType);
	setGenre(_genre);
	setYear(_year);
}

Media::Media( const string _title, const string _mediaType, const string _genre)
	:title(_title), mediaType(_mediaType), genre(_genre)
{
}

Media::~Media()
{
}

/*
string Media:: toString() const
{
	return "\nThis is the Base Class toString\n"
}
*/

ostream& operator<<(ostream& output, const Media& m)
{
	output << endl << m.toString() << endl;
	return output;
}

void Media::setTitle( const string _title)
{
	title = _title;
}

string Media::getTitle() const
{
	return title;
}

void Media::setMediaType( const string _mediaType)
{
	mediaType = _mediaType;
}

string Media::getMediaType() const
{
	return mediaType;
}

void Media::setGenre( const string _genre)
{
	genre = _genre;
}

string Media::getGenre() const
{
	return genre;
}

void Media::setYear(const string _year)
{
	year = _year;
}

string Media::getYear() const
{
	return year;
}


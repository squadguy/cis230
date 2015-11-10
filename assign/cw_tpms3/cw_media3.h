#ifndef CW_MEDIA3_H
#define CW_MEDIA3_H

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Book 
{
	friend ostream & operator<<( ostream &, const Book &);
	public:
		Book(string, string, string, string, string);
		Book(string, string, string, string);
		Book(string, string, string);
		void setTitle(string);
		string getTitle();
		void setMediaType(string);
		string getMediaType();
		void setGenre(string);
		string getGenre();
		void setComposer(string);
		string getComposer();
		void setYear(string);
		string getYear();
		string toString();
//		string operator<<(Media);

	private:
		string title;
		string composer;
		string mediaType;
		string genre;
		string year;
};

#endif

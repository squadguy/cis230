#ifndef CW_MEDIA_H
#define CW_MEDIA_H

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Media
{
	public:
		Media(string, string, string, string);
		Media(string, string, string);
		void setTitle(string);
		void setMediaType(string);
		void setGenre(string);
		void setYear(string);
		string getTitle();
		string getMediaType();
		string getGenre();
		string getYear();
		virtual string toString() = 0;
		
	protected:
		string title;
		string mediaType;
		string genre;
		string year;
};

#endif

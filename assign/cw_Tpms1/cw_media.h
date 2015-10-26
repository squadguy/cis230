#ifndef CW_MEDIA_H
#define CW_MEDIA_H

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Media
{
	public:
		Media(string, string, string, string, string);
		Media(string, string, string, string);
		Media(string, string, string);
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

	private:
		string title;
		string composer;
		string mediaType;
		string genre;
		string year;
};

#endif

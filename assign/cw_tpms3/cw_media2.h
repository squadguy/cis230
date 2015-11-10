#ifndef CW_MEDIA2_H
#define CW_MEDIA2_H

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Music
{
	friend ostream &operator<<(ostream &, const Music &);
	public:
		Music(string, string, string, string, string);
		Music(string, string, string, string);
		Music(string, string, string);
		void setTitle(string);
		void setMediaType(string);
		void setGenre(string);
		void setComposer(string);
		void setYear(string);
		string getTitle();
		string getMediaType();
		string getGenre();
		string getComposer();
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

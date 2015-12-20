#ifndef CW_MEDIA_H
#define CW_MEDIA_H

#include<iostream>
#include<vector>
#include<sstream>
#include<string>

using namespace std;

class Media
{
	friend ostream& operator<<(ostream&, const Media&);
	public:
		Media(string, string, string, string);
		Media(string, string, string);
		virtual ~Media();
		
		void setTitle(const string);
		void setMediaType(const string);
		void setGenre(const string);
		void setYear(const string);
		string getTitle() const;
		string getMediaType() const;
		string getGenre() const;
		string getYear() const;
		
		virtual string toString() const = 0;
		virtual string serialize() const = 0;

	protected:
		string title;
		string mediaType;
		string genre;
		string year;
};

#endif

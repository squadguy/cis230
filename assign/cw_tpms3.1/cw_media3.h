#ifndef CW_MEDIA3_H
#define CW_MEDIA3_H

#include<iostream>
#include<vector>
#include<string>
#include "cw_media.h"

using namespace std;

class Book : public Media

{
	friend ostream &operator<<(ostream &, const Book &);

	public:
		Book(string, string, string, string, string);
		void setAuthor(string);
		string getAuthor();
		
	private:
		string author;

};

#endif

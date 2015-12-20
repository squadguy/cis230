#ifndef CW_MEDIA3_H
#define CW_MEDIA3_H

#include<iostream>
#include<vector>
#include<string>
#include "cw_media.h"

using namespace std;

class Book : public Media

{
	//friend ostream &operator<<(ostream &, const Book &);

	public:
		Book(const string, const string, const string, const string, const string);
		~Book();
		void setAuthor(const string);
		string getAuthor() const;

		virtual string toString() const;	
	private:
		string author;

};

#endif

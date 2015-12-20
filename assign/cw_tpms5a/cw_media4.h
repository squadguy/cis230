#ifndef CW_MEDIA4_H
#define CW_MEDIA4_H

#include<iostream>
#include<vector>
#include<string>
#include "cw_media.h"
using namespace std;

class Movie : public Media

{
//	friend ostream &operator<<(ostream &, const Movie &);

	public:
		Movie(const string, const string, const string, const string, const string);
		~Movie();
		
		void setDirector(const string);
		string getDirector() const;

		virtual string toString() const;
		
	private:
		string director;

};

#endif

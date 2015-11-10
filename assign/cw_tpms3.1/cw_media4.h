#ifndef CW_MEDIA4_H
#define CW_MEDIA4_H

#include<iostream>
#include<vector>
#include<string>
#include "cw_media.h"
using namespace std;

class Movie : public Media

{
	friend ostream &operator<<(ostream &, const Movie &);

	public:
		Movie(string, string, string, string, string);
		void setDirector(string);
		string getDirector();
		
	private:
		string director;

};

#endif

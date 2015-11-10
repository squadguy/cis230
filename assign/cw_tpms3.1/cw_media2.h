#ifndef CW_MEDIA2_H
#define CW_MEDIA2_H

#include<iostream>
#include<vector>
#include<string>
#include"cw_media.h"

using namespace std;

class Music : public Media

{
	friend ostream &operator<<(ostream &, const Music &);

	public:
		Music(string, string, string, string, string);
		void setArtist(string);
		string getArtist();
		
	private:
		string artist;

};

#endif

#ifndef CW_MEDIA2_H
#define CW_MEDIA2_H

#include<iostream>
#include<vector>
#include<string>
#include"cw_media.h"

using namespace std;

class Music : public Media

{
	//friend ostream &operator<<(ostream &, const Music &);

	public:
		Music();
		Music(const string, const string, const string, const string, const string);
		~Music();
		void setArtist( const string);
		string getArtist() const;

		virtual string toString() const;
		virtual string serialize() const;
	private:
		string artist;

};

#endif

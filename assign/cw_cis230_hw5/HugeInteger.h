// Exercise 9.14 Solution: HugeInteger.h
// HugeInteger class definition.
#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H
#include <array>
#include <string>

class HugeInteger 
{
public:
   HugeInteger( long = 0 ); // conversion constructor
   HugeInteger( const std::string & ); // copy constructor

   // input
   void input( const std::string & );
   // output
   void output() const;

   // addition operator; HugeInteger + HugeInteger
   HugeInteger add( const HugeInteger & ) const;

   // addition operator; HugeInteger + int
   HugeInteger add( int ) const;            

   // addition operator; 
   // HugeInteger + string that represents large integer value
   HugeInteger add( const std::string & ) const;    

   // subtraction operator; HugeInteger - HugeInteger
   HugeInteger subtract( const HugeInteger &  ) const; 

   // subtraction operator; HugeInteger - int
   HugeInteger subtract( int ) const; 

   // subtraction operator; 
   // HugeInteger - string that represents large integer value
   HugeInteger subtract( const std::string & ) const; 

private:
    // 40 element array, initialized
	std::array< short, 40 > integer = { };
};

#endif

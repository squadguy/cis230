#ifndef ROUND_H
#define ROUND_H

class Round
{
public:
	Round();

	void setLowerLimit();
	void setUpperLimit();
	void setInterval();
	int getInterval() const;
	int getLowerLimit() const;
	int getUpperLimit() const;
	void setFahrenheit(int);
	int getFahreheit () const;
	//void displayInfo() const;

private:
	int lowerLimit;
	int upperLimit;
	int inFahreheit;
	int interval;

};

#endif
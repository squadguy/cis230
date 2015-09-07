#ifndef ROUND_H
#define ROUND_H

class Round
{
public:
	Round(int, int, int);

	void setLowerLimit();
	void setUpperLimit();
	void setInterval();
	int getInterval() const;
	int getLowerLimit() const;
	int getUpperLimit() const;
	void setFahrenheit(int);
	int getFahreheit () const;
	void displayInfo(int, int) const;

private:
	int lowerLimit;
	int upperLimit;
	int inFahreheit;
	int interval;

};

#endif
#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<iterator>

using namespace std;

class Stuff
{
	public:
		Stuff(string, int);
		string getName();
		int getAge();
		void setAge(int);
		void setName(string);


	private:
		string name;
		int age;
};

//void makeMap (vector<stuff>people);

int main()
{
	map <string, int> grade_list;
	map <string, int> people_map;
	
	vector <string> thing;
	vector <Stuff> people;

	Stuff stuff1("Phil", 43);
	Stuff stuff2("Jimmy", 33);
	Stuff stuff3("Tommy", 23);

	people.push_back(stuff1);
	people.push_back(stuff2);
	people.push_back(stuff3);
	
	//create map by cycling through vector 
	for(int i = 0; i < people.size(); i++)
	{
		people_map.insert (std::pair<string, int>(people[i].getName(), people[i].getAge()));	
	}
		
	map<string, int>::iterator it;

	cout << "List from vector -> map" << endl;

	for(it=people_map.begin(); it!=people_map.end(); ++it)
		cout << it->first << " " << it->second << endl;
	
	return 0;
}


Stuff::Stuff(string _name, int _age)
{
	setName(_name);
	setAge(_age);
}

string Stuff::getName()
{
	return name;
}

int Stuff::getAge()
{
	return age;
}

void Stuff::setName(string _name)
{
	name = _name;
}

void Stuff::setAge(int _age)
{
	age = _age;
}

//void makeMap(vector<Stuff>people)


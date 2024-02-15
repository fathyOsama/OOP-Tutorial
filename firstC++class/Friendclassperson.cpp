#include "Friendclassperson.h"
#include<iostream>
using namespace std;
class Person2
{
private:
	string name;
	string gender;
	float age;
public:
	Person2(string n, string g, float a)
	{
		name = n;
		gender = g;
		age = a;
	}
	void set_name(string n)
	{
		name = n;
	}
	string get_name()
	{
		return name;
	}
	friend class printclass;
};

class printclass
{
public:
	void print(Person2 p)
	{
		cout << "The Basicc Data of person" << endl;
		cout << "name = " << p.name << endl;
		cout << "gender = " << p.gender << endl;
		cout << "age = " << p.age << endl;
	}

};

/*int main()
{
	Person2 p("sheheb", "male", 26);
	printclass pc;
	pc.print(p);
	return 0;
}*/
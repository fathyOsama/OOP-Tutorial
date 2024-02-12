#include<iostream>
using namespace std;
class person
{
private:
	string name;
	string gender;
	float age;
public:
	person(string n, string g, float a)
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
	friend void print(person p);
};

void print(person p)
{
	cout << "The Basicc Data of person" << endl;
	cout << "name = " << p.name << endl;
	cout << "gender = " << p.gender << endl;
	cout << "age = " << p.age << endl;
}

/*void main()
{
	person x("FATHEY", "male", 30);
	print(x);
}*/
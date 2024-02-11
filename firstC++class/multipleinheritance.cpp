#include<iostream>
using namespace std;

class Employee
{
private:
	string name;
	string job;
	float salary;
public:
	Employee() :name("unknown"), job("unknown"), salary(0.0)
	{

	}
	Employee(string n, string j, float s)
	{
		name = n;
		job = j;
		salary = s;
	}
	void set_name(string n)
	{
		name = n;
	}
	string get_name()
	{
		return name;
	}
	void set_job(string j)
	{
		job = j;
	}
	string get_job()
	{
		return job;
	}
	void set_salary(float s)
	{
		salary = s;
	}
	float get_salary()
	{
		return salary;
	}
	void display()
	{
		cout << "name = " << name << ", job = " << job << ", salary = " << salary << endl;
	}

};

class SecandStudent
{
private:
	string name;
	string dapartment;
	string research_interest;
public:
	SecandStudent(string d, string re) :dapartment(d), research_interest(re)
	{

	}
	void set_name(string n)
	{
		name = n;
	}
	string get_name()
	{
		return name;
	}
	void set_dapartment(string d)
	{
		dapartment = d;
	}
	string get_dapartment()
	{
		return dapartment;
	}
	void set_research_interest(string re)
	{
		research_interest = re;
	}
	string get_research_interest()
	{
		return research_interest;
	}
	void display()
	{
		cout << "dapartment = " << dapartment << ", research_interest = " << research_interest << endl;
	}
};

class Teachingassistant : public SecandStudent,public Employee
{
public:
	Teachingassistant(string n, string j, float s, string d, string re) :Employee(n, j, s), SecandStudent(d, re)
	{

	}
	void display()
	{
		Employee::display();
		SecandStudent::display();
	}
};

//void main()
//{
//	Teachingassistant ta("fathey", "Ia", 5000, "Is", "databases");
//	ta.set_salary(8000);
//	ta.set_research_interest("data science");
//	ta.Employee::set_name("mohamed");
//	ta.display();
//}
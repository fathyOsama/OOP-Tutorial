#include "Employeefff.h"
#include<iostream>
using namespace std;
class Employee
{
protected:
	string name;
	int emp_id;
	float salary;
public:
	Employee() :name("unknow"), emp_id(0), salary(0.0)
	{

	}
	Employee(string n, int id, float s)
	{
		name = n;
		emp_id = id;
		salary = s;
	}
	virtual float get_total_salary() = 0;
	virtual void print()
	{
		cout << "name = " << name << endl;
		cout << "emp_id = " << emp_id << endl;
		cout << "salary = " << salary << endl;
	}
};


class Sales :public Employee
{
private:
	float gross_sales;
	float commission_rate;
public:
	Sales(string n, int id, float s, float gs, float cr) :Employee(n, id, s)
	{
		gross_sales = gs;
		commission_rate = cr;
	}
	float get_total_salary()
	{
		cout << "total salary sales = " << salary + (gross_sales * commission_rate) << endl;
		return salary + (gross_sales * commission_rate);
	}
	void print()
	{
		Employee::print();
		cout << "gross_sales = " << gross_sales << endl;
		cout << "commission_rate = " << commission_rate << endl;
	}
};

class Engineer :public Employee
{
private:
	string speciality;
	int experience;
	int overtime_hours;
	float overtime_hours_rate;
public:
	Engineer(string n, int id, float s, string sp, int e, int oh, float ohr) :Employee(n, id, s)
	{
		speciality = sp;
		experience = e;
		overtime_hours = oh;
		overtime_hours_rate = ohr;
	}
	float get_total_salary()
	{
		cout << "total salary Engineer = " << salary + (overtime_hours * overtime_hours_rate) << endl;
		return salary + (overtime_hours * overtime_hours_rate);
	}
	void print()
	{
		Employee::print();
		cout << "speciality = " << speciality << endl;
		cout << "experience = " << experience << endl;
		cout << "overtime_hours = " << overtime_hours << endl;
		cout << "overtime_hours_rate = " << overtime_hours_rate << endl;
	}
};


/*int main()
{
	Employee* emp_ptr;
	Sales s1("mohmed", 120, 5000, 50000, 0.10);
	Engineer e1("Fathey", 150, 7000, "sw engineer", 5, 10, 50);
	emp_ptr = &s1;
	emp_ptr->get_total_salary();
	cout << "============================\n";
	emp_ptr->print();
	cout << "============================\n";
	emp_ptr = &e1;
	emp_ptr->get_total_salary();
	cout << "============================\n";
	emp_ptr->print();
	return 0;

}*/
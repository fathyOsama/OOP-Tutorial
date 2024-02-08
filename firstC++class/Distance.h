#pragma once
class Distance
{
private:
	int feet;
	float inches;
public:
	Distance();
	Distance(int f, float i);
	void set_Distance(int f, float i);
	void print();
	Distance adda_Distance(Distance d4);
	~Distance();
};


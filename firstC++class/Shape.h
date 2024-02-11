#pragma once
#include<iostream>
using namespace std;
class Shape
{
private:
	string color;
public:
	Shape(string s)
	{
		color = s;
	}
	virtual int area() = 0;

	virtual void draw() = 0;

	virtual void erase() = 0;

	virtual void displqay() final
	{
		cout << " this display : " << endl;
	}
};

class Rectangle :public Shape
{
private:
	int length;
	int width;
public:
	Rectangle(int l, int w, string c) :Shape(c)
	{
		length = l;
		width = w;
	}
	int area()
	{
		cout << "Rectangle class area : " << (width * length) << endl;
		return (width * length);
	}
	void draw()
	{
		cout << "Draw Rectangle : " << endl;
	}
	void erase()
	{
		cout << "the rectangle erase : " << endl;
	}
};

class Circle :public Shape
{
private:
	int redius;
public:
	Circle(int r, string c) :Shape(c)
	{
		redius = r;
	}
	int area()
	{
		cout << "Circle area : " << 3.14 * (redius * redius) << endl;
		return(3.14 * redius * redius);
	}
	void draw()
	{
		cout << "draw circle : " << endl;
	}
	void erase()
		{
		cout << "the circle erase : " << endl;
		}

};
void use_Shape(Shape& sh_obj)
{

}

//int main()
//{
//    Shape* shap_ptr;
//	Rectangle rec(1, 7, "red");
//	Circle c(5, "yellow");
//	shap_ptr = &rec;
//	shap_ptr->area();
//	shap_ptr->draw();
//
//	shap_ptr = &c;
//	shap_ptr->area();
//	shap_ptr->draw();
//
//	return 0;
//}


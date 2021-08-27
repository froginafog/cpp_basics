#include <iostream>

using namespace std;

class Shape  //base class
{
private:
	string name;  //accessible to member functions of this class only

protected:
	double width;   //accessible to member functions of derived classes
	double height;  //accessible to member functions of derived classes

public:
	Shape(string inputName, double inputWidth, double inputHeight)
	{
		name = inputName;
		width = inputWidth;
		height = inputHeight;
	}

	~Shape()
	{
	}

	void print()
	{
		cout << "Shape::print() is called" << endl;
		cout << "shape : " << name << endl;
		cout << "width : " << width << endl;
		cout << "height: " << height << endl;
	}
};

class Rectangle : public Shape  //Rectangle is a derived class
{
public:
	Rectangle(string inputName, double inputWidth, double inputHeight)
	: Shape(inputName, inputWidth, inputHeight)
	{
	}

	~Rectangle()
	{
	}

	double calculateArea()
	{
		return height * width;  //we can access protected members of a base class
	}

	void print()
	{
		cout << "Rectangle::print() is called" << endl;
		Shape::print();
		cout << "area: " << calculateArea() << endl;
	}
};

class Triangle : public Shape
{
public:
	Triangle(string inputName, double inputWidth, double inputHeight)
	: Shape(inputName, inputWidth, inputHeight)
	{
	}

	~Triangle()
	{
	}

	double calculateArea()
	{
		return height * width / 2.0;  //we can access protected members of a base class
	}

	void print()
	{
		cout << "Triangle::print() is called" << endl;
		Shape::print();
		cout << "area: " << calculateArea() << endl;
	}
};

int main()
{
	Rectangle rectangle1("rectangle", 2.4, 3.2);
	Triangle triangle1("triangle", 10.2, 5.1);

	rectangle1.print();
	cout << "--------------------------------------------------" << endl;
	triangle1.print();

	return 0;
}

/*
Rectangle::print() is called
Shape::print() is called
shape : rectangle
width : 2.4
height: 3.2
area: 7.68
--------------------------------------------------
Triangle::print() is called
Shape::print() is called
shape : triangle
width : 10.2
height: 5.1
area: 26.01
 */

#include <iostream>
using namespace std;

class Rectangle
{
	// member functions
	double m_length;
	double m_width;

public:

	//function prototypes
	Rectangle(); // default constructor
	Rectangle(double l, double w); // constructor with 2 parameters
	double GetPerimeter(); // GetPerimeter function
	double GetArea(); // GetArea function
};

Rectangle::Rectangle()
{
	// constucted Rectagle object with default values of 1 length and 1 width
	m_length = 1.0;
	m_width = 1.0;
}

Rectangle::Rectangle(double l, double w)
{
	if (l < 0.0 && w < 0.0)
	{
		// default values if the entered value is negative
		m_length = 1; 
		m_width = 1; 
	}
	else
	{
		// if the values are valid then they will be assigned to the member variables
		m_length = l;
		m_width = w;
	}
}

double Rectangle::GetPerimeter()
{
	double perimeter;

	perimeter = (m_length * 2) + (m_width * 2);

	return perimeter;
}

double Rectangle::GetArea()
{
	double Area;

	Area = m_length * m_width;

	return Area;
}

int main()
{
	Rectangle Rect1;
	Rectangle Rect2(10.0, 4.0);

	cout << "The Perimeter of Rectagle 1 is " << Rect1.GetPerimeter() << endl;
	cout << "The Area of the Rectangle 1 is " << Rect1.GetArea() << endl;
	cout << "\n";

	cout << "The Perimeter of Rectagle 2 is " << Rect2.GetPerimeter() << endl;
	cout << "The Area of the Rectangle 2 is " << Rect2.GetArea() << endl;
	
	return 0;
}
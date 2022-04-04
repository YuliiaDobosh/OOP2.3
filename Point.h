#pragma once
#include <iostream>
#include <string>
using namespace std;

class Point
{
	double x,y;
public:
	Point(); // конструктор за умовчанням
	Point(double, double); // конструктор ініціалізації
	Point(const Point&); //копіювання
	~Point();

	void set_x(double);
	void set_y(double);
	double get_x() const;
	double get_y() const;
	friend double distance_to_point(Point p1 , Point p2) ;
	void move_x(double x);
	void move_y(double y);

	Point& operator = (const Point&); // присвоєння
	operator string() const; //літерний

	friend ostream& operator << (ostream&, const Point&); //вивід
	friend istream& operator >> (istream&, Point&); //ввід
	Point& operator ++(); // префіксний інкремент
	Point& operator --(); // префіксний декремент
	Point operator ++(int); // постфіксний інкремент
	Point operator --(int); // постфіксний декремент


};



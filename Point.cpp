#include "Point.h"
#include <sstream>
Point::Point()
{
	x = 0;
	y = 0;
}
Point::Point(double x_, double y_)
{
	x = x_;
	y = y_;
}
Point::Point(const Point& p)
{
	x = p.x;
	y = p.y;
}
Point::~Point()
{}
void Point::set_x(double x_)
{
	x = x_;
}
void Point::set_y(double y_)
{
	y = y_;
}
double Point::get_x() const
{
	return x;
}
double Point::get_y() const
{
	return y;
}

double distance_to_point( Point p1 , Point p2) 
{
	return sqrt(pow(p1.x -p2.x, 2) + pow(p1.y - p2.y, 2));;
}

Point& Point::operator = (const Point& p)
{
	x = p.x;
	y = p.y;
	return *this;
}
Point::operator string () const
{
	stringstream ss;
	ss << " x = " << x << endl;
	ss << " y = " << y << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Point& p)
{
	out << string(p);
	return out;
}
istream& operator >> (istream& in, Point& p)
{
	cout << " x = "; in >> p.x;
	cout << " y = "; in >> p.y;
	cout << endl;
	return in;
}
Point& Point::operator ++()
{
	x++;
	return *this;
}
Point& Point::operator --()
{
	x--;
	return *this;
}
Point Point::operator ++(int)
{
	Point t(*this);
	y++;
	return t;
}
Point Point::operator --(int)
{
	Point t(*this);
	y--;
	return t;
}
void Point::move_x(double x)
{
	this->x += x;
}
void Point::move_y(double y)
{
	this->y += y;
}



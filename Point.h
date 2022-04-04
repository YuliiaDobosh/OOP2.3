#pragma once
#include <iostream>
#include <string>
using namespace std;

class Point
{
	double x,y;
public:
	Point(); // ����������� �� ����������
	Point(double, double); // ����������� �����������
	Point(const Point&); //���������
	~Point();

	void set_x(double);
	void set_y(double);
	double get_x() const;
	double get_y() const;
	friend double distance_to_point(Point p1 , Point p2) ;
	void move_x(double x);
	void move_y(double y);

	Point& operator = (const Point&); // ���������
	operator string() const; //�������

	friend ostream& operator << (ostream&, const Point&); //����
	friend istream& operator >> (istream&, Point&); //���
	Point& operator ++(); // ���������� ���������
	Point& operator --(); // ���������� ���������
	Point operator ++(int); // ����������� ���������
	Point operator --(int); // ����������� ���������


};



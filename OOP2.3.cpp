#include "Point.h"
#include <iostream>
using namespace std;
int main() {
	Point a(1, 1);
	Point b(1, 1);
	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	Point x;
	cout << "Input point  " << endl;
	cin >> x;
	Point y;
	cout << "Input point  " << endl;
	cin >> y;
	cout << "distance_to_point = " << distance_to_point(x,y) << endl;
	cin.get();
	return 0;
}

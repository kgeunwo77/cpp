#pragma once
#include<iostream>
using namespace std;

class triangle
{
private:
	int x1, y1, x2, y2, x3, y3;
	double a{}, b{}, c{}, s{}, S{};
public:
	triangle(int _x1, int _y1, int _x2,int _y2, int _x3, int _y3) {
		x1 = _x1;
		y1 = _y1;
		x2 = _x2;
		y2 = _y2;
		x3 = _x3;
		y3 = _y3;
		//cout << "Constructor" << endl;
	}
	void line();
	void heron();
	void detect();

	~triangle() {
		//cout << "Destructor" << endl;
	}
};

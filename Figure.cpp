
#include "Figure.h"

void Figure::area() {} //기초클래스의 멤버함수 선언

void Triangle::area() {
	double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	double 	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	double s = (a + b + c) / 2;
	this->S = sqrt(s * (s - a) * (s - b) * (s - c)); //헤론의 공식
	cout << fixed; //소수점 이하 자릿수 고정
	cout.precision(2); //소수점 이하 자릿수 : 2
	cout << this->S << endl;
	//기초클래스에서 선언한 S에 값을 저장하기 위해 this-> 사용
}
//Triangle클래스에 대한 함수
void Square::area() {
	this->S = abs(x2 - x1) * abs(y2 - y1);
	cout << fixed;
	cout.precision(2);
	cout << this->S << endl;
}
//Square클래스에 대한 함수
void Circle::area() {
	double x = (x2 + x1) * 0.5;
	double y = (y2 + y1) * 0.5;
	cout << "중심좌표 : (" << x << ", " << y << ")" << endl;
	double R = sqrt(pow(x2 - x, 2) + pow(y2 - y, 2)); //두 점 사이의 거리 구하는 공식
	cout << fixed;
	cout.precision(2);
	cout << "반지름 : " << R << endl;
	this->S = M_PI * R * R; //파이값 : M_PI (3.141592...)
	cout << "원의 넓이 : " << this->S << endl;
}
//Circle클래스에 대한 함수
#pragma once
#include<iostream>
#define _USE_MATH_DEFINES //파이를 사용하기 위해 정의
#include<math.h>
using namespace std;

class Figure
{
protected:
	int x1, x2, y1, y2;
	double S;
public:
	Figure(int x1_, int x2_, int y1_, int y2_) {
		x1 = x1_;
		x2 = x2_;
		y1 = y1_;
		y2 = y2_;
	}
	virtual void area(); //virtual 키워드 사용 - 가상함수
	~Figure() {}
};
//기초클래스 Figure
//파생클래스에서 사용할 변수 protected에 선언
//멤버함수 area는 virtual 키워드를 통해 가상함수로 정의만 해놓았습니다.

class Triangle :public Figure {
private:
	int x3, y3;
public:
	Triangle(int x1_, int x2_, int x3_, int y1_, int y2_, int y3_) :Figure(x1_, x2_, y1_, y2_) {
		x3 = x3_;
		y3 = y3_; //삼각형에서만 좌표 세 개를 입력받기 때문에 변수 추가
	}
	void area() override; //오버라이딩했음을 명시
	double operator+(Triangle& p) {
		return this->S + p.S; //p1의 S와 p2의 S 더한 값을 반환
	} //연산자 오버로딩
	~Triangle() {}
};
//삼각형에 대한 파생클래스
//private에서 사용할 변수 선언
//동일한 이름(area)으로 함수 사용 (오버라이딩)
//연산자 오버로딩 정의
//넓이라는 변수 한개만 반환해야하기 때문에 클래스가 아닌 double로 만들었습니다.

class Square :public Figure {
private:
public:
	Square(int x1_, int x2_, int y1_, int y2_) :Figure(x1_, x2_, y1_, y2_) {}
	void area() override;
	double operator+(Square& p) {
		return this->S + p.S;
	}
	~Square() {}
};
//사각형에 대한 파생클래스

class Circle :public Figure {
private:
public:
	Circle(int x1_, int x2_, int y1_, int y2_) :Figure(x1_, x2_, y1_, y2_) {}
	void area() override;
	~Circle() {}
};
//원형에 대한 파생클래스
#pragma once
#include<iostream>
#define _USE_MATH_DEFINES //���̸� ����ϱ� ���� ����
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
	virtual void area(); //virtual Ű���� ��� - �����Լ�
	~Figure() {}
};
//����Ŭ���� Figure
//�Ļ�Ŭ�������� ����� ���� protected�� ����
//����Լ� area�� virtual Ű���带 ���� �����Լ��� ���Ǹ� �س��ҽ��ϴ�.

class Triangle :public Figure {
private:
	int x3, y3;
public:
	Triangle(int x1_, int x2_, int x3_, int y1_, int y2_, int y3_) :Figure(x1_, x2_, y1_, y2_) {
		x3 = x3_;
		y3 = y3_; //�ﰢ�������� ��ǥ �� ���� �Է¹ޱ� ������ ���� �߰�
	}
	void area() override; //�������̵������� ���
	double operator+(Triangle& p) {
		return this->S + p.S; //p1�� S�� p2�� S ���� ���� ��ȯ
	} //������ �����ε�
	~Triangle() {}
};
//�ﰢ���� ���� �Ļ�Ŭ����
//private���� ����� ���� ����
//������ �̸�(area)���� �Լ� ��� (�������̵�)
//������ �����ε� ����
//���̶�� ���� �Ѱ��� ��ȯ�ؾ��ϱ� ������ Ŭ������ �ƴ� double�� ��������ϴ�.

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
//�簢���� ���� �Ļ�Ŭ����

class Circle :public Figure {
private:
public:
	Circle(int x1_, int x2_, int y1_, int y2_) :Figure(x1_, x2_, y1_, y2_) {}
	void area() override;
	~Circle() {}
};
//������ ���� �Ļ�Ŭ����
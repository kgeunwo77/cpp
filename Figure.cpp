
#include "Figure.h"

void Figure::area() {} //����Ŭ������ ����Լ� ����

void Triangle::area() {
	double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	double 	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	double s = (a + b + c) / 2;
	this->S = sqrt(s * (s - a) * (s - b) * (s - c)); //����� ����
	cout << fixed; //�Ҽ��� ���� �ڸ��� ����
	cout.precision(2); //�Ҽ��� ���� �ڸ��� : 2
	cout << this->S << endl;
	//����Ŭ�������� ������ S�� ���� �����ϱ� ���� this-> ���
}
//TriangleŬ������ ���� �Լ�
void Square::area() {
	this->S = abs(x2 - x1) * abs(y2 - y1);
	cout << fixed;
	cout.precision(2);
	cout << this->S << endl;
}
//SquareŬ������ ���� �Լ�
void Circle::area() {
	double x = (x2 + x1) * 0.5;
	double y = (y2 + y1) * 0.5;
	cout << "�߽���ǥ : (" << x << ", " << y << ")" << endl;
	double R = sqrt(pow(x2 - x, 2) + pow(y2 - y, 2)); //�� �� ������ �Ÿ� ���ϴ� ����
	cout << fixed;
	cout.precision(2);
	cout << "������ : " << R << endl;
	this->S = M_PI * R * R; //���̰� : M_PI (3.141592...)
	cout << "���� ���� : " << this->S << endl;
}
//CircleŬ������ ���� �Լ�
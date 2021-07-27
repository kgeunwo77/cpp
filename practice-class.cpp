#include "class.h"
#include <math.h>

void triangle::line() {
	a = sqrt(pow(this->x1 - this->x2, 2) + pow(this->y1 - this->y2, 2));
	b = sqrt(pow(this->x1 - this->x3, 2) + pow(this->y1 - this->y3, 2));
	c = sqrt(pow(this->x2 - this->x3, 2) + pow(this->y2 - this->y3, 2));
	cout << "a-b의 거리 : " << this->a << endl;
	cout << "a-c의 거리 : " << this->b << endl;
	cout << "b-c의 거리 : " << this->c << endl;
}
void triangle::heron() {
	s = (this->a + this->b + this->c) / 2;
	S = sqrt(this->s * (this->s - this->a) * (this->s - this->b) * (this->s - this->c));
}
void triangle::detect() {
	cout << "삼각형 판별 : ";
	if (S == 0)
		cout << "삼각형 아닙니다." << endl;
	else {
		cout << "삼각형" << endl;
		cout << "넓이 : " << this->S << endl;
	}
}

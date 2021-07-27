#include "class.h"
#include <math.h>

void triangle::line() {
	a = sqrt(pow(this->x1 - this->x2, 2) + pow(this->y1 - this->y2, 2));
	b = sqrt(pow(this->x1 - this->x3, 2) + pow(this->y1 - this->y3, 2));
	c = sqrt(pow(this->x2 - this->x3, 2) + pow(this->y2 - this->y3, 2));
	cout << "a-bÀÇ °Å¸® : " << this->a << endl;
	cout << "a-cÀÇ °Å¸® : " << this->b << endl;
	cout << "b-cÀÇ °Å¸® : " << this->c << endl;
}
void triangle::heron() {
	s = (this->a + this->b + this->c) / 2;
	S = sqrt(this->s * (this->s - this->a) * (this->s - this->b) * (this->s - this->c));
}
void triangle::detect() {
	cout << "»ï°¢Çü ÆÇº° : ";
	if (S == 0)
		cout << "»ï°¢Çü ¾Æ´Õ´Ï´Ù." << endl;
	else {
		cout << "»ï°¢Çü" << endl;
		cout << "³ÐÀÌ : " << this->S << endl;
	}
}
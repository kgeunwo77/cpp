#include "class.h"

int main() {
	int x1, y1, x2, y2, x3, y3;
	cout << "a ÁÂÇ¥ : ";
	cin >> x1 >> y1;
	cout << "b ÁÂÇ¥ : ";
	cin >> x2 >> y2;
	cout << "c ÁÂÇ¥ : ";
	cin >> x3 >> y3;
	
	triangle p(x1, y1, x2, y2, x3, y3);

	p.line();
	p.heron();
	p.detect();
	
	return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int x1, y1, x2, y2;

	cout << "첫 번째 좌표 : ";
	cin >> x1 >> y1;
	cout << "두 번째 좌표 : ";
	cin >> x2 >> y2;
  
	double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  
	cout << "두 점 사이의 거리 : " << d << endl;
  
	return 0;
}

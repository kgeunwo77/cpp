#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int x1, x2, x3, y1, y2, y3;

	cout << "첫 번째 좌표 : ";
	cin >> x1 >> y1;
	cout << "두 번째 좌표 : ";
	cin >> x2 >> y2;
	cout << "세 번째 좌표 : ";
	cin >> x3 >> y3;

	double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	double b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	double s = (a + b + c) / 2;

	double S = sqrt(s * (s - a) * (s - b) * (s - c));

	if (S == 0)
		cout << "삼각형이 아닙니다." << endl;
	/*삼각형이 될 수 없는 경우는 세 가지가 있습니다.
	1. 세 점 중 어떤 두 점이라도 서로 같은 점인 경우
	2. 세 점이 모두 같은 점일 경우
	3. 세 점이 일직선 상에 있는 경우
	세 경우 모두 헤론의 공식에 의해 넓이를 계산할 경우
	결과가 0이 나옵니다.
	그래서 S가 0일 경우 '삼각형이 아닙니다.' 라는 문구를 출력합니다.*/

	else
		cout << "삼각형의 넓이 : " << S << endl;

	return 0;
}

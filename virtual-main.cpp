#include "Figure.h"

int main() {
	int fi;
	int x1[10], x2[10], x3[10], y1[10], y2[10], y3[10];

	cout << "무슨 도형입니까? " << endl << "1.삼각형 2.사각형 3.원형  >> ";
	cin >> fi;
	//숫자를 입력받아 도형 구분
	if (fi == 1) { //도형이 삼각형일 경우
		for (int i = 1; i <= 2; i++) {
			cout << i << "번 삼각형의 세 좌표 입력 : ";
			cin >> x1[i] >> y1[i] >> x2[i] >> y2[i] >> x3[i] >> y3[i];
		}
		//두 삼각형의 좌표를 각각 배열에 저장
		cout << "1번 삼각형 넓이 : ";
		Triangle p1(x1[1], x2[1], x3[1], y1[1], y2[1], y3[1]);
		p1.area();
		cout << "2번 삼각형 넓이 : ";
		Triangle p2(x1[2], x2[2], x3[2], y1[2], y2[2], y3[2]);
		p2.area();

		double p3 = p1 + p2;
		//연산자 오버로딩을 이용한 넓이 합
		cout << fixed;
		cout.precision(2); //소수점 이하 자릿수를 2로 고정
		cout << "넓이 합 : " << p3 << endl;
	}
	else if (fi == 2) { //도형이 사각형일 경우
		for (int i = 1; i <= 2; i++) {
			cout << i << "번 사각형의 두 좌표 입력 : ";
			cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
		}
		cout << "1번 사각형 넓이 : ";
		Square p1(x1[1], x2[1], y1[1], y2[1]);
		p1.area();
		cout << "2번 사각형 넓이 : ";
		Square p2(x1[2], x2[2], y1[2], y2[2]);
		p2.area();

		double p3 = p1 + p2;
		cout << fixed;
		cout.precision(2);
		cout << "넓이 합 : " << p3 << endl;
	}
	else if (fi == 3) { //도형이 원형일 경우
		cout << "원의 두 좌표 입력 : ";
		cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
		Circle p1(x1[1], x2[1], y1[1], y2[1]);
		p1.area();
	}
	else
		cout << "올바른 선택이 아닙니다.";
	//삼각형, 사각형, 원형이 모두 아닐 경우

	return 0;
}

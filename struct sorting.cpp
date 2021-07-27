#include<iostream>
#include<string>
using namespace std;

typedef struct student {
	string name;
	int stnum = 0;
	double score = 0;
}STUDENT;

int main() {
	int man;
	cout << "학생 수 : ";
	cin >> man;
	cout << "이름, 학번, 점수 : " << endl;

	STUDENT* p = new STUDENT[man];

	char arr[6];
	for (int i = 0; i < man; i++) {
		cin >> arr;
		p[i].name = arr;
		cin >> p[i].stnum;
		cin >> p[i].score;
	}

	for (int i = 0; i < man; i++) {
		if (p[i].score < 0 || p[i].score>100) {
			cout << "올바른 점수가 아닙니다." << endl;
			return 0;
		}
	}

	for (int i = 0; i < man; i++) {
		for (int j = 0; j < i; j++) {
			if (p[i].name < p[j].name)
				swap(p[i], p[j]);
		}
	}

	cout << endl << "정렬 후 결과 : " << endl;
	for (int i = 0; i < man; i++) {
		cout << p[i].name << ", " << p[i].stnum << ", " << p[i].score << endl;
	}
	
	delete[] p;

	return 0;
}

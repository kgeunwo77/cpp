#include "Person.h"

int main() {
	int num;
	cout << "사람의 수 : ";
	cin >> num;
	//입력할 사람의 수를 입력받아 반복횟수를 결정합니다.
	string name[10], tell[10], job[10];
	int age[10];
	for (int i = 1; i <= num; i++) {
		cout << i << "번 사람" << endl;
		cout << "이름 : ";
		cin >> name[i];
		cout << "나이: ";
		cin >> age[i];
		cout << "전화번호 : ";
		cin >> tell[i];
		cout << "직업 : ";
		cin >> job[i];
	}
	//반복문을 통해 사람의 수만큼 이름, 나이, 전화번호, 직업을 입력받아 각각 배열에 넣어 저장합니다.
	cout << endl << "ㅡㅡㅡ출력결과ㅡㅡㅡ" << endl;
	for (int i = 1; i <= num; i++) {
		if (job[i] == "학생") {
			Student p(tell[i], name[i], age[i], job[i]);
			cout << endl;
			p.talk();
		}
		else if (job[i] == "조교") {
			TA p(tell[i], name[i], age[i], job[i]);
			cout << endl;
			p.talk();
		}
		else if (job[i] == "교수") {
			Professor p(tell[i], name[i], age[i], job[i]);
			cout << endl;
			p.talk();
		}
		else
			cout << endl << "해당하지 않는 직업입니다." << endl;
	}
	//반복문을 통해 job의 내용으로 구분해서 변수들을 알맞은 클래스에 넣어줍니다.
	//변수를 클래스에 넣어주고 해당 범위에서 함수를 호출했으므로 p.talk는 바로 위의 클래스에 해당하는 함수입니다.
	//클래스의 이름과 job의 내용이 일치하지 않을 경우 "해당하지 않는 직업입니다."라는 문구를 출력합니다.

	return 0;
}
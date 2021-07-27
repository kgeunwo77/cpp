#include "Person.h"

void Person::talk() {
	cout << "나의 이름(나이) : " << name << " (" << age << ")" << endl;
	cout << "나의 직업 : " << job << endl;
	cout << "전화번호 : " << tell << endl;
	cout << "밥을 먹을 수 있음." << endl;
	cout << "말을 할 수 있음." << endl;
}
//기초클래스의 함수를 구현합니다. 이름, 나이, 직업, 전화번호를 변수로 입력받습니다.
//밥을 먹을 수 있고 말을 할 수 있는 것은 사람의 공통 특성이므로 기초클래스 함수에서 출력해줍니다.

void Student::talk() {
	__super::talk();
	cout << "과제를 할 수 있음." << endl;
}
void TA::talk() {
	__super::talk();
	cout << "수업 조교를 할 수 있음." << endl;
}
void Professor::talk() {
	__super::talk();
	cout << "강의를 할 수 있음." << endl;
}
//자식클래스에서 부모클래스를 가리키는 __super 키워드를 통해
//자식클래스 함수에서 부모클래스 함수 talk를 호출합니다.
//그리고 각각의 직업 클래스에 맞는 특성(할 수 있는 일)을 덧붙여서 출력합니다.
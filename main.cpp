#include "Person.h"

int main() {
	int num;
	cout << "����� �� : ";
	cin >> num;
	//�Է��� ����� ���� �Է¹޾� �ݺ�Ƚ���� �����մϴ�.
	string name[10], tell[10], job[10];
	int age[10];
	for (int i = 1; i <= num; i++) {
		cout << i << "�� ���" << endl;
		cout << "�̸� : ";
		cin >> name[i];
		cout << "����: ";
		cin >> age[i];
		cout << "��ȭ��ȣ : ";
		cin >> tell[i];
		cout << "���� : ";
		cin >> job[i];
	}
	//�ݺ����� ���� ����� ����ŭ �̸�, ����, ��ȭ��ȣ, ������ �Է¹޾� ���� �迭�� �־� �����մϴ�.
	cout << endl << "�ѤѤ���°���ѤѤ�" << endl;
	for (int i = 1; i <= num; i++) {
		if (job[i] == "�л�") {
			Student p(tell[i], name[i], age[i], job[i]);
			cout << endl;
			p.talk();
		}
		else if (job[i] == "����") {
			TA p(tell[i], name[i], age[i], job[i]);
			cout << endl;
			p.talk();
		}
		else if (job[i] == "����") {
			Professor p(tell[i], name[i], age[i], job[i]);
			cout << endl;
			p.talk();
		}
		else
			cout << endl << "�ش����� �ʴ� �����Դϴ�." << endl;
	}
	//�ݺ����� ���� job�� �������� �����ؼ� �������� �˸��� Ŭ������ �־��ݴϴ�.
	//������ Ŭ������ �־��ְ� �ش� �������� �Լ��� ȣ�������Ƿ� p.talk�� �ٷ� ���� Ŭ������ �ش��ϴ� �Լ��Դϴ�.
	//Ŭ������ �̸��� job�� ������ ��ġ���� ���� ��� "�ش����� �ʴ� �����Դϴ�."��� ������ ����մϴ�.

	return 0;
}
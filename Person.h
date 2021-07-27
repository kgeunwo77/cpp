#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class Person
{
private:
	string tell;
protected:
	string name;
	int age;
	string job;
public:
	Person(const string& tell_, const string& name_, const int& age_, const string& job_) {
		tell = tell_;
		name = name_;
		age = age_;
		job = job_;
	}
	void talk();
	~Person() {}
};
//����Ŭ������ �����մϴ�. tell������ ����� �Ұ����ؾ��ϱ� ������ private���� �����մϴ�.
//����� �Լ��� �����մϴ�.

class Student :public Person {
public:
	Student(const string& _tell, const string& _name, const int& _age, const string& _job) :Person(_tell, _name, _age, _job) {
	}
	void talk();
	~Student() {}
};

class TA :public Person {
public:
	TA(const string& _tell, const string& _name, const int& _age, const string& _job) :Person(_tell, _name, _age, _job) {
	}
	void talk();
	~TA() {}
};

class Professor :public Person {
public:
	Professor(const string& _tell, const string& _name, const int& _age, const string& _job) :Person(_tell, _name, _age, _job) {
	}
	void talk();
	~Professor() {}
};
//������ �Ļ�Ŭ�������� ������ݴϴ�. �������̵��� ���� �Ļ�Ŭ�������� ����� �Լ����� �̸��� ����Ŭ������ �Լ� �̸��� �����ϴ�.
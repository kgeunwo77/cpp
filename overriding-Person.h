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
//기초클래스를 선언합니다. tell변수는 상속이 불가능해야하기 때문에 private에서 선언합니다.
//사용할 함수를 선언합니다.

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
//각각의 파생클래스들을 만들어줍니다. 오버라이딩을 통해 파생클래스에서 사용할 함수들의 이름은 기초클래스의 함수 이름과 같습니다.

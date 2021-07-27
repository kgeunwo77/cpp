#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	
	ifstream fin;
	string str;
	string temp;

	fin.open("input.txt");

	if (fin.is_open()) {
		while (!fin.eof()) {
			getline(fin, temp);
			str += temp;
		}
	}
	fin.close();
	cout << str << endl;
	cout << endl << "Finish reading file" << endl << endl;

	int len = str.length();
	for (int i = 0; i < len; i++) {
		if (str[i] >= 33 && str[i] <= 38)
			str[i] = ' ';
		else if (str[i] >= 40 && str[i] <= 44)
			str[i] = ' ';
		else if (str[i] >= 46 && str[i] <= 47)
			str[i] = ' ';
		else if (str[i] >= 58 && str[i] <= 64)
			str[i] = ' ';
		else if (str[i] >= 91 && str[i] <= 96)
			str[i] = ' ';
		else if (str[i] >= 123 && str[i] <= 126)
			str[i] = ' ';
		else if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
	}
	//특수문자를 띄어쓰기로, 대문자를 소문자로 변환합니다.
	//아스키코드를 사용하고, '와 - 는 포함하지 않아야 사이트와 같이 개수가 출력됩니다.
	//('나 -를 띄어쓰기로 바꾸면 원래 한 문자가 두 문자가 되기 때문에 201개로 출력됨)
	//예) didn't, super-delicious
	

	string num;
	for (int i = 0; i < len; i++) {
		if (str[i] >= 48 && str[i] <= 57) {
			num += str[i];
			str.erase(i, 1);
			i--;
		}
	}
	//숫자만 따로 저장해놓습니다.
	//문자열에 저장한 숫자는 이후에 단어 배열만 정렬에 사용하기 위해 지웁니다.
	//i번째 숫자를 지우면 문자열이 당겨지기 때문에 i--를 해줘야 모든 문자를 빠짐없이 검사할 수 있습니다.
	
	string arr[300];
	int count = 0;
	for (int i = 0; i < len; i++) {
		int point = str.find(" ");

		if (point == string::npos) {
			arr[i] = str;
			//str.erase(0, str.length());
			count = i;
			break;
		}
		else if (point == 0) {
			if (str.length() == 1) {
				count = i - 1;
				break;
			}
			str.erase(0, 1);
			i--;
		}
		else {
			arr[i] = str.substr(0, point);
			str.erase(0, point);
		}
	}
	//처음에 저장해놨던 문자열의 길이를 기준으로 반복합니다.
	//(문자열을 최대로 끊어도 문자열의 길이 만큼이기 때문)
	//띄어쓰기를 기준으로 하여 단어별로 끊어서 배열에 넣습니다.
	//find로 띄어쓰기가 있는 곳이 몇번째인지 찾습니다.
	//마지막이 띄어쓰기로 끝날 때와 문자로 끝날 때의 경우의 수를 나눕니다.
	//나중에 출력할 때 단어의 개수를 알아야하므로 반복문이 끝날 때의 i를 다른 변수에 기록합니다.
	//(이때 i=단어의 개수-1. arr[0]부터 넣기 때문.)
	//이후 str을 사용하지 않기 때문에 마지막 단어는 굳이 str에서 지우지 않았습니다.
	//마지막 문자가 띄어쓰기일 경우 단어의 개수만 세고 바로 반복을 멈추도록 조건문을 써줍니다.

	int k = count;
	int flag = true;
	while (k > 0 && flag) {
		flag = false;
		for (int i = 0; i < k; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				flag = true;
			}
		}
		k--;
	}

	ofstream fout;
	fout.open("output.txt");

	fout << count + 1 << "개 ";
	for (int i = 0; i <= count; i++) {
		fout << arr[i] << " ";
	}
	fout << num << endl;
	
	fout.close();

	return 0;
}

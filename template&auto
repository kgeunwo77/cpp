#include<iostream>
using namespace std;

template<typename T1, typename T2>
auto sum(T1 t1, T2 t2)->decltype(t1 + t2) {
	return t1 + t2;
}
int main() {
	string str1 = "apple", str2 = "banana";
	cout << sum(1, 2) << endl;
	cout << sum(1.1, 2.2) << endl;
	cout << sum(str1, str2) << endl;
}

//다른 방법
//template<typename T>
//class Data{
//private:
//	T x, y;
//public:
//	Data(T x_,T y_) {
//		x = x_;
//		y = y_;
//	}
//	T sum() {
//		return x + y;
//	}
//};
//int main() {
//	Data<int> int_data(1, 2);
//	cout << "int_data : " << int_data.sum() << endl;
//
//	Data<double> double_data(1.1, 2.2);
//	cout << "double_data : " << double_data.sum() << endl;
//
//	Data<string> str_data("apple", "banana");
//	cout << "str_data : " << str_data.sum() << endl;
//
//	return 0;
//}

//다른 방법2
//template<typename T1, typename T2>
//auto sum(T1 t1, T2 t2)->decltype(t1 + t2) {
//	return t1 + t2;
//}
//
//int main() {
//	string str1 = "apple", str2 = "banana";
//	cout << sum(1, 2) << endl;
//	cout << sum(1.1, 2.2) << endl;
//	cout << sum("apple", "banana") << endl;
//}

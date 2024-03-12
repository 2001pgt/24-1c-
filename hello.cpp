#include<iostream>

using namespace std;//std이름 공간에 선언된 모든 이름에 std::생략

int main() {
	cout << "학번을 입력하세요";

	int 학번;//변수 "학번"은 정수이므로 int사용
	cin >> 학번;//학번 입력 

	cout << "학과를 입력하세요";
	string 학과;//변수 "학과"는 문자열이므로string사용
	cin >> 학과;//학과 입력

	cout << "이름을 입력하세요";
	string 이름;//변수 "이름"은 문자열이므로string사용
	cin >> 이름;//이름 입력

	cout << "학번:" << 학번;//학번:_,학과:_,이름:_형태로 출력
	cout << ",학과:" << 학과;
	cout << ",이름:" << 이름;

	


}

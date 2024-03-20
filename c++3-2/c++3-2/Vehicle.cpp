#pragma once
#include<iostream>
using namespace std;

class Vehicle {
	//private://접근 허용X class는 기본적으로 이 상태이다
//public://class 접근 허용 class내 인자들은 영향 X
	float fuel;
	int power;
	int speed;
	string name;//▲▲변수
	//--------------------------------
public:
	Vehicle() :Vehicle(0.0, 0) {       }//생성자//클래스와 이름 동일//매개변수없는 생성자//위임생성자
	//순서는 위임생성자와 인자개수가 같은 타겟생성자로 대입후 출력
	Vehicle(float feul, int power);//매개 변수가 있는 생성자//타겟 생성자
	Vehicle(string name,int speed, float feul, int power);
	void speed_up();//▼▼함수
	void speed_up(int x);//int x값을 대입
	void speed_down();
	//private://어디든 사용가능
	void go() {}//함수만 지정해놓을때는 {}를 사용
	void stop() {}
	void Vehicle_info();
};



void Vehicle::Vehicle_info() {
	cout << "이름:" << name << "속도:" << speed << "마력:" << power << "연료:" << endl;
}



Vehicle::Vehicle() {//초기화 작업을 해준다 
	name = "Object";
	speed = 0;
	power = 0;
	fuel = 0.0;

}
Vehicle::Vehicle(float feul, int power) {//()안에 매개변수에 값을 줘야한다
	name = "Object";
	speed = 0;
	this->power = power;//this는 자기자신을 부르는 주소값
	this->fuel = feul;

}
Vehicle::Vehicle(string name, int speed,float feul, int power) {
	this->name = name;
	this->speed = speed;
	this->fuel = feul;
	this->power = power;
}
void Vehicle::speed_up()
{
	speed += 10;
	cout << "속도 증가" << speed << endl;

}
void Vehicle::speed_up(int x)
{
	speed += x;
	cout << "속도 증가" << speed << endl;

}
void Vehicle::speed_down()
{
	speed -= 10;
	cout << "속도 감소" << speed << endl;
}

int main() {
	int a;
	Vehicle v1;//객체//묻지도 따지지도 말고 생성자를 찾아라//v1은 인자가 없으므로 위에 생성자중 처음 생성자를 찾아간다
	Vehicle v2(5.5, 120);//v2는 인자가 있으므로 그밑에 매개변수가 있는 생서자를 찾아간다
	v1.Vehicle_info();
	v2.Vehicle_info();
	Vehicle v3("ufo", 3000, 60.3, 10000);

	v3.Vehicle_info()





	v1.speed_up();//에러 main과 상관없기 때문에 class에public 을 적어준다
	//v1.speed_down();,
	return 0;
}
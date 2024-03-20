#pragma once
#include<iostream>
using namespace std;

class Vehicle {
	//private://���� ���X class�� �⺻������ �� �����̴�
//public://class ���� ��� class�� ���ڵ��� ���� X
	float fuel;
	int power;
	int speed;
	string name;//��㺯��
	//--------------------------------
public:
	Vehicle() :Vehicle(0.0, 0) {       }//������//Ŭ������ �̸� ����//�Ű��������� ������//���ӻ�����
	//������ ���ӻ����ڿ� ���ڰ����� ���� Ÿ�ٻ����ڷ� ������ ���
	Vehicle(float feul, int power);//�Ű� ������ �ִ� ������//Ÿ�� ������
	Vehicle(string name,int speed, float feul, int power);
	void speed_up();//����Լ�
	void speed_up(int x);//int x���� ����
	void speed_down();
	//private://���� ��밡��
	void go() {}//�Լ��� �����س������� {}�� ���
	void stop() {}
	void Vehicle_info();
};



void Vehicle::Vehicle_info() {
	cout << "�̸�:" << name << "�ӵ�:" << speed << "����:" << power << "����:" << endl;
}



Vehicle::Vehicle() {//�ʱ�ȭ �۾��� ���ش� 
	name = "Object";
	speed = 0;
	power = 0;
	fuel = 0.0;

}
Vehicle::Vehicle(float feul, int power) {//()�ȿ� �Ű������� ���� ����Ѵ�
	name = "Object";
	speed = 0;
	this->power = power;//this�� �ڱ��ڽ��� �θ��� �ּҰ�
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
	cout << "�ӵ� ����" << speed << endl;

}
void Vehicle::speed_up(int x)
{
	speed += x;
	cout << "�ӵ� ����" << speed << endl;

}
void Vehicle::speed_down()
{
	speed -= 10;
	cout << "�ӵ� ����" << speed << endl;
}

int main() {
	int a;
	Vehicle v1;//��ü//������ �������� ���� �����ڸ� ã�ƶ�//v1�� ���ڰ� �����Ƿ� ���� �������� ó�� �����ڸ� ã�ư���
	Vehicle v2(5.5, 120);//v2�� ���ڰ� �����Ƿ� �׹ؿ� �Ű������� �ִ� �����ڸ� ã�ư���
	v1.Vehicle_info();
	v2.Vehicle_info();
	Vehicle v3("ufo", 3000, 60.3, 10000);

	v3.Vehicle_info()





	v1.speed_up();//���� main�� ������� ������ class��public �� �����ش�
	//v1.speed_down();,
	return 0;
}
#include <iostream>
using namespace std;

class Car
{
	private:
		int num;
		double gas;
	public:
		Car();
		Car(int n, double g);
		void setCar(int n, double g);
		void show();
};

class RacingCar :public Car 
{
	private:
		int course;
	public:
		RacingCar();
		RacingCar(int n, double g, int c);
		void setCourse(int c);
};

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "자동차가 만들어졌습니다. \n";
}

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "차량 번호: " << num << "이고, 연료량: " << gas << " 인 자동차가 만들어졌습니다.\n";
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "차량 번호: " << num << "이고, 연료량: " << gas << " 으로 변경하였습니다.\n";
}

void Car::show()
{
	cout << "차량번호 : " << num << " 입니다.\n";
	cout << "연료량 : " << gas << " 입니다.\n";
}

RacingCar::RacingCar()
{
	course = 0;
	cout << "레이싱 카가 만들어졌습니다.\n";
}

RacingCar::RacingCar(int n, double g, int c) : Car(n, g)
{
	course = c;
	cout << "코스번호가 " << course << " 인 레이싱 카가 만들어졌습니다.\n";
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "코스 번호를" << course << " 로 했습니다.\n";
}

int main()
{
	RacingCar rccar1(1234, 20.5, 5);

	return 0;
}
//Source.ccp
#include "HourlyPayment.h"
#include "Salary.h"
#include <Windows.h> 


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "C��������� � ���������� ������� : " << endl;
	HourlyPayment A( 14, 75);
	A.Print();
	cout << "������� �� ������� ������������� ����� = " << A.salary() << "���" << endl;
	cout << endl << endl;

	cout << "C��������� � ������� : " << endl;
	Salary B( 20, 450);
	B.Print();
	cout << "������ �� ������� ������������� ��� = " << B.salary() << "���" << endl;
	cout << endl << endl;


	Employee* pa = new HourlyPayment();
	Employee* pb = new Salary();


	cout << typeid(pa).name() << endl;
	cout << typeid(*pa).name() << endl;
	cout << typeid(pb).name() << endl;
	cout << typeid(*pb).name() << endl;


	delete pa, delete pb;


	Employee* N[2];

	N[0] = &A;
	N[1] = &B;


	cout << " ������� �� ������� ������������� ����� N[0] = " << N[0]->salary() << endl;
	cout << " ������ �� ������� ������������� ��� N[1] = " << N[1]->salary() << endl;

}
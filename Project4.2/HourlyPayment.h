//HourlyPayment.h
#pragma once
#include "Employee.h"

class HourlyPayment : public Employee
{
private:
	int hours, perhour;
public:
	HourlyPayment();
	HourlyPayment(int hours, int perhour);
	 
	int GetHours()const { return hours; }

	int GetPerhour()const { return perhour; }

	void SetHours(int value);

	void SetPerhour(int value);


	virtual double salary();
	virtual void Print();
};

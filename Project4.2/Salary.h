//Salary.h
#pragma once
#include "Employee.h"

class Salary : public Employee
{
private:
	int days, perday;
public:
	Salary();
	Salary( int days, int perday);

	
	int GetDays()const { return days; }
	int GetPerday()const { return perday; }

	void SetDays(int value);
	void SetPerday(int value);

	virtual double salary();
	virtual void Print();
};



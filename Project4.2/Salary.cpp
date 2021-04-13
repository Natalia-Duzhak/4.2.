//Salary.ccp
#include "Salary.h"

void Salary::SetDays(int value)
{
    if (value > 0)
        days = value;
    else
        days = 0;
}
void Salary::SetPerday(int value)
{
    if (value > 0)
        perday = value;
    else
        perday = 0;
}
Salary::Salary()
    : days(0),perday(0)
{}

Salary::Salary(int days, int perday)
    : days(days), perday (perday)
{}
double Salary::salary()
{
    double SPD = GetDays() * GetPerday();
    return SPD;
}
void Salary::Print()
{

    cout << "Кількість відпрацьованих днів: " << GetDays() << endl;
    cout << "Оплата за день : " << GetPerday() << endl;
}

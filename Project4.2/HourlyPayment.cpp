//HourlyPayment.ccp
#include "HourlyPayment.h"
void HourlyPayment::SetHours(int value)
{
    if (value > 0)
        hours = value;
    else
        hours = 0;
}
void HourlyPayment::SetPerhour(int value)
{
    if (value > 0)
        perhour = value;
    else
        perhour = 0;
}
HourlyPayment::HourlyPayment()
    : hours(0), perhour(0)
{}

HourlyPayment::HourlyPayment(int hours, int perhour)
    : hours(hours), perhour(perhour)
{}
double HourlyPayment::salary()
{
    double SPH = GetHours() * GetPerhour();
    return SPH;
}
void HourlyPayment::Print()
{
    cout << "Кількість відпрацьованих годин : " << GetHours() << endl;
    cout << "Оплата за годину : " << GetPerhour() << endl;
}

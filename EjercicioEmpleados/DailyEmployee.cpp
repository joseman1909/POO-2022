#include <iostream>
#include "DailyEmployee.h"

using namespace std;

DailyEmployee::DailyEmployee(const string &first, const string &last, const string &ssn,
                             double dailyWage, double workedDays) : Employee(first, last, ssn){
    setWage(dailyWage);
    setDays(workedDays);
}

void DailyEmployee::setWage(double dailyWage){
    wage = (dailyWage < 0.0 ? 0.0 : dailyWage);
}

double DailyEmployee::getWage() const{
    return wage;
}

void DailyEmployee::setDays(double workedDays){
    days = workedDays;
}

double DailyEmployee::getDays() const{
    return days;
}

double DailyEmployee::earnings() const{
    if(getDays() > 0)
        return getWage() * getDays();
    else
        return 0;
}

void DailyEmployee::print() const{
    cout << "daily employee: ";
    Employee::print();
    cout << "\ndaily wage: " << getWage() << "; days worked: "<< getDays();
}

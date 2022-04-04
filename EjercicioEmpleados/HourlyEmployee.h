#ifndef EJERCICIOEMPLEADOS_HOURLYEMPLOYEE_H
#define EJERCICIOEMPLEADOS_HOURLYEMPLOYEE_H

#include "Employee.h"
class HourlyEmployee : public Employee{
    private:
        double wage;
        double hours;
    public:
        static const int hoursPerWeek = 168;
        HourlyEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);

        void setWage(double);
        double getWage() const;

        void setHours(double);
        double getHours() const;

        virtual double earnings() const;
        virtual void print() const;
};
#endif //EJERCICIOEMPLEADOS_HOURLYEMPLOYEE_H

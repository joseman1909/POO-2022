#ifndef EJERCICIOEMPLEADOS_COMMISSIONEMPLOYEE_H
#define EJERCICIOEMPLEADOS_COMMISSIONEMPLOYEE_H

#include "Employee.h"

class CommissionEmployee : public Employee{
    private:
        double grossSales;
        double commissionRate;
    public:
        CommissionEmployee(const string &, const string &, const string &,
                           double = 0.0, double = 0.0);

        void setCommissionRate(double);
        double getCommissionRate() const;

        void setGrossSales(double);
        double getGrossSales() const;

        virtual double earnings() const;
        virtual void print() const;
};
#endif //EJERCICIOEMPLEADOS_COMMISSIONEMPLOYEE_H

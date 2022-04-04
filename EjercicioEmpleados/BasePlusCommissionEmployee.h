#ifndef EJERCICIOEMPLEADOS_BASEPLUSCOMMISSIONEMPLOYEE_H
#define EJERCICIOEMPLEADOS_BASEPLUSCOMMISSIONEMPLOYEE_H

#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee{
    private:
        double baseSalary;
    public:
        BasePlusCommissionEmployee(const string &, const string &, const string &,
                                   double = 0.0, double = 0.0, double = 0.0);
        void setBaseSalary(double);
        double getBaseSalary() const;

        virtual double earnings() const;
        virtual void print() const;

};
#endif //EJERCICIOEMPLEADOS_BASEPLUSCOMMISSIONEMPLOYEE_H

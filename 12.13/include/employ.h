#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"Date.h"
#include <string>

class Employee
{

private:
   std::string firstName;
   std::string lastName;
   std::string socialSecurityNumber;
   public:
   Employee( const std::string &, const std::string &,
      const std::string & );
   virtual ~Employee() { }

   void setFirstName( const std::string & );
   std::string getFirstName() const;

   void setLastName( const std::string & );
   std::string getLastName() const;

   void setSocialSecurityNumber( const std::string & );
   std::string getSocialSecurityNumber() const;


   virtual double earnings() const = 0;
   virtual void print() const;
};
class CommissionEmployee : public Employee
{
public:
   CommissionEmployee( const std::string &, const std::string &,
      const std::string &, double = 0.0, double = 0.0 );
   virtual ~CommissionEmployee() { }

   void setCommissionRate( double );
   double getCommissionRate() const;

   void setGrossSales( double );
   double getGrossSales() const;

   virtual double earnings() const override;
   virtual void print() const override;
private:
   double grossSales;
   double commissionRate; };

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
   BasePlusCommissionEmployee( const std::string &, const std::string &,
      const std::string &, double = 0.0, double = 0.0, double = 0.0 );
   virtual ~BasePlusCommissionEmployee() { }
   void setBaseSalary( double );
   double getBaseSalary() const;


   virtual double earnings() const override;
   virtual void print() const override;
private:
   double baseSalary;
};
class EmployeePlus:public BasePlusCommissionEmployee
{

public:
   EmployeePlus();
   virtual double earnings() const = 0;
   virtual void print() const;
   void setBirthday(Date day);
   Date getBirthday();

private:
    Date birthDay;


};


#endif // EMPLOYEE_H

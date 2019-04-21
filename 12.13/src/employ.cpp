#include <iostream>
#include "Employee.h"
#include<iostream>
using namespace std;

Employee::Employee( const string &first, const string &last,
   const string &ssn )
   : firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{

}
void Employee::setFirstName( const string &first )
{
   firstName = first;
}
string Employee::getFirstName() const
{
   return firstName;
}
void Employee::setLastName( const string &last )
{
   lastName = last;
}
string Employee::getLastName() const
{
   return lastName;
}
void Employee::setSocialSecurityNumber( const string &ssn )
{
   socialSecurityNumber = ssn;
}
string Employee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;
}
CommissionEmployee::CommissionEmployee( const string &first,
   const string &last, const string &ssn, double sales, double rate )
   : Employee( first, last, ssn )
{
   setGrossSales( sales );
   setCommissionRate( rate );
}
void CommissionEmployee::setGrossSales( double sales )
{
   if ( sales >= 0.0 )
      grossSales = sales;
   else
      throw invalid_argument( "Gross sales must be >= 0.0" );
}
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}
void CommissionEmployee::setCommissionRate( double rate )
{
   if ( rate > 0.0 && rate < 1.0 )
      commissionRate = rate;
   else
      throw invalid_argument( "Commission rate must be > 0.0 and < 1.0" );
}
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}
double CommissionEmployee::earnings() const
{
   return getCommissionRate() * getGrossSales();
}
void CommissionEmployee::print() const
{
   cout << "commission employee: ";
   Employee::print();
   cout << "\ngross sales: " << getGrossSales()
      << "; commission rate: " << getCommissionRate();
}

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
   const string &first, const string &last, const string &ssn,
   double sales, double rate, double salary )
   : CommissionEmployee( first, last, ssn, sales, rate )
{
   setBaseSalary( salary );
}
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
   if ( salary >= 0.0 )
      baseSalary = salary;
   else
      throw invalid_argument( "Salary must be >= 0.0" );
}
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}
double BasePlusCommissionEmployee::earnings() const
{
    return getBaseSalary() + CommissionEmployee::earnings();
}
void BasePlusCommissionEmployee::print() const
{
   cout << "base-salaried ";
   CommissionEmployee::print();
   cout << "; base salary: " << getBaseSalary();
}
void Employee::print() const
{
   cout << getFirstName() << ' ' << getLastName()
      << "\nsocial security number: " << getSocialSecurityNumber();
}
void EmployeePlus::setBirthday(Date day)
{
    birthDay = day;
}
Date EmployeePlus::getBirthday()
{
    return birthDay;
}
double EmployeePlus::earnings() const
{
 return 100+CommissionEmployee::earnings();
}
void EmployeePlus::print()const
{

    CommissionEmployee::print();
    cout<<"This month is birthday month"<<endl;
    cout << "Plus birthday bonus $100,reslut:" << earnings();

}

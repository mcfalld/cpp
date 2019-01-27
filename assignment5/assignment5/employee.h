//
// Created by Derrick on 7/5/2017.
//

#ifndef ASSIGNMENT5_EMPLOYEE_H
#define ASSIGNMENT5_EMPLOYEE_H

#include <string>
#include <iomanip>
#include <iostream>

class employee
{
 private:
  std::string first_name;
  std::string last_name;
  float monthly_pay;

 public:
  employee(std::string last, std::string first, float pay)
  {
    first_name = first;
    last_name = last;
    monthly_pay = pay;
  }


 public:void toString()
{
  std::cout << std::fixed << std::setprecision(2) << first_name << ' ' << last_name << ' ' << monthly_pay << std::endl;
}

  void toCsv(std::ostream& s)
  {
    s << std::fixed << std::setprecision(2) << last_name << ',' << first_name << ',' << monthly_pay << std::endl;
  }

//  void set_first(std::string first)
//  {
//    first_name = first;
//  }
//  void set_pay(float pay)
//  {
//    monthly_pay = pay;
//  }
//  std::string get_first()
//  {
//    return first_name;
//  }
//
//  std::string get_last()
//  {
//    return last_name;
//  }
//
//  float get_pay()
//  {
//    return monthly_pay;
//  }
};



#endif //ASSIGNMENT5_EMPLOYEE_H

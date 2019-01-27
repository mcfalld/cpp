//
// Created by Derrick on 7/11/2017.
//

#ifndef ASSIGNMENT6_ACCOUNT_H
#define ASSIGNMENT6_ACCOUNT_H

#include <string>
#include <iomanip>
class account
{
  std::string account_code;
  std::string first_name;
  std::string last_name;
  double balance;

 public:
  account(std::string account, std::string last, std::string first, double bal)
  {
    account_code = account;
    first_name = first;
    last_name = last;
    balance = bal;
  }

  void toString()
  {
    std::cout <<std::fixed << std::setprecision(2) << account_code << first_name << last_name << balance << std::endl;
  }

  void toCsv(std::ostream& s)
  {
    s << std::fixed << std::setprecision(2) << trim(account_code) << ',' << trim(first_name)
      << ',' << trim(last_name) << ',' << balance << std::endl;
  }

  std::string get_account_number()
  {
    return account_code;
  }

};

#endif //ASSIGNMENT6_ACCOUNT_H

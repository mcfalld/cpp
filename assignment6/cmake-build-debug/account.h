//
// Created by Derrick on 7/11/2017.
//

#ifndef ASSIGNMENT6_ACCOUNT_H
#define ASSIGNMENT6_ACCOUNT_H

#include <string>
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

};

#endif //ASSIGNMENT6_ACCOUNT_H

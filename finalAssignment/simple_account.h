//
// Created by Derrick on 19Jul2017.
//

#ifndef FINALASSIGNMENT_SIMPLE_ACCOUNT_H
#define FINALASSIGNMENT_SIMPLE_ACCOUNT_H

#include "account.h"
//#include <string>

class simple_account : public account{


 public:
  simple_account(std::string &init_account, std::string &last, std::string &first, double bal) : account(init_account, last, first, bal)
  {}


 private:

void monthly_update() override
  {
  balance *= 1.05;
  }

  char type() override
  {

  }
//
//
//
};


#endif //FINALASSIGNMENT_SIMPLE_ACCOUNT_H

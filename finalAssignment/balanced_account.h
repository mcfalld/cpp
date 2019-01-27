//
// Created by Derrick on 19Jul2017.
//

#ifndef FINALASSIGNMENT_BALANCED_ACCOUNT_H
#define FINALASSIGNMENT_BALANCED_ACCOUNT_H

#include "account.h"

class balanced_account : public account{
 public:balanced_account(std::string &init_account, std::string &last, std::string &first, double bal) :
      account(init_account, last, first, bal)
  {}

  void monthly_update() override
  {
    balance = balance > 500.0 ? balance * 1.05 : (balance - 5.0) * 1.03;
  }

  char type()
  {

  }
};
#endif //FINALASSIGNMENT_BALANCED_ACCOUNT_H
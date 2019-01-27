//
// Created by Derrick on 19Jul2017.
//

#ifndef FINALASSIGNMENT_SERVICE_ACCOUNT_H
#define FINALASSIGNMENT_SERVICE_ACCOUNT_H

#include "account.h"

class service_account : public account{
 public:
  service_account(std::string &init_account, std::string &last, std::string &first, double bal)
  : account(init_account, last, first, bal)
  {}

  void monthly_update() override
  {
    balance = (balance - 5.0) * 1.04;
  }
  char type()
  {
  }

};

#endif //FINALASSIGNMENT_SERVICE_ACCOUNT_H
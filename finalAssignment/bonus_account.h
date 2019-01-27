//
// Created by Derrick on 19Jul2017.
//

#ifndef FINALASSIGNMENT_BONUS_ACCOUNT_H
#define FINALASSIGNMENT_BONUS_ACCOUNT_H

#include "account.h"

//char type;

class bonus_account : public account{

 public: bonus_account(std::string &init_account, std::string &last, std::string &first, double bal):account(init_account, last, first, bal)
  {}
 private:
  void monthly_update() override
  {
  balance = balance * (balance > 5000 ? 1.06 : 1.04);
  }

char type() override
{

}

};
//




#endif //FINALASSIGNMENT_BONUS_ACCOUNT_H

#ifndef FINALASSIGNMENT_ACCOUNT_H
#define FINALASSIGNMENT_ACCOUNT_H

#include <string>
#include <iomanip>
#include <utility>
class account
{
  std::string account_code;
  std::string first_name;
  std::string last_name;
//  char type_;
 public:double balance;

 public:
  account(std::string account, std::string last, std::string first, double bal)
  {
    account_code = std::move(account);
    first_name = std::move(first);
    last_name = std::move(last);
//    type_ = type;
    balance = bal;
  }

  virtual void monthly_update() = 0;
  virtual char type() = 0;


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


#endif //FINALASSIGNMENT_ACCOUNT_H


//#include "manager.h"
//#include "simple_account.h"
//#include "bonus_account.h"
//#include "service_account.h"
//#include "balanced_account.h"
//std::unique_ptr<account> factory(std::string line)
//{
//  std::string account_number;
//  std::string anything_after;
//  std::string fname;
//  std::string lname;
//  std::string balance;
//  double bal = 0;
////  std::vector<account> accounts_vector;
////  std::map<;
//  char type = 0;
//
//
//  if (line.length() == 62 || (line.length() == 63 && line[62] == '\r'))
//  {
//
//    fname = trim(line.substr(10, 15));
//    lname = trim(line.substr(25, 25));
//    account_number = trim(line.substr(0, 10));
//    type = line[50];
//
//    balance = trim(line.substr(51, 11));
//
//  } else
//  {
//    std::cout << "A line is too long. Please check your file and try again\n"
//        "Line skipped. It may help to remove empty spaces\n";
////      continue;
//  }
//  if (IsDouble(balance))
//  {
//    bal = std::stod(balance);
//  } else
//  {
//    std::cout << "At least one of your balances is not a valid number.\n"
//        "That line will be skipped";
//  }
//  if (type == 'A')
//  {
//    //simple_account:account(account_number, fname, lname, bal);
//    return std::unique_ptr<account>{ new simple_account(account_number, lname, fname, bal)};
////    accounts_map.emplace(make_pair(account_number,std::unique_ptr<account>{ new simple_account{account_number, lname, fname, bal}}));
//
//  } else if (type == 'B')
//  {
//    return std::unique_ptr<account>{ new bonus_account(account_number, fname, lname, bal)};
//  } else if (type == 'C')
//  {
//    return std::unique_ptr<account>{ new service_account(account_number, fname, lname, bal)};
//  } else if (type == 'D')
//  {
//    return std::unique_ptr<account>{ new balanced_account(account_number, fname, lname, bal)};
//  } else if (type == 'X')
//  {
////      continue;
//  } else
//  {
//    std::cout << "Error check file for types." << std::endl;
//  }
//
//}
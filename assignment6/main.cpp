#include <iostream>
//#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include "trim.h"
#include "account.h"

bool IsDouble(const std::string& MyString)
{
  try
  {
    std::stod(MyString);
  }
  catch(...)
  {
    return false;
  }
  return true;
}

int main()
{
//  std::cout << "Executing assignment 6\n";

  std::ofstream file2;
  std::string line;
  std::string account_number;
  std::string anything_after;
  std::string fname;
  std::string lname;
  std::string balance;
  double bal = 0;
  std::vector<account> accounts_vector;
  std::string full_line;
  int count = 0;

  std::ifstream file{"account.dat"};

  if (!file) {
    std::cout << "Please check your file path and try again.";
    return 0;
  }
  while (std::getline(file, line))
  {
    count++;
      if (line.length() < 61)
      {
        std::cout << "Line " << count << " had too few characters.  Line skipped" << std::endl;
        continue;

      }
      else if( line.length() > 62 || (line.length()==62 && line[61] != '\r') || isspace(line[60]))
      {
        std::cout << "Line " << count << " had too many characters.  Line skipped" << std::endl;
        continue;

      }
      else if (line[49] != ' ')
      {
        std::cout << "There appears to be an error with line " << count << ". That line will be skipped\n"
            "Please check your file." << std::endl;
        continue;
      }
      else if (line.length() == 61 || (line.length()==62 && line[61] == '\r'))
      {
        fname = trim(line.substr(10, 15));
        lname = trim(line.substr(25, 25));
        account_number = trim(line.substr(0, 10));
        balance = trim(line.substr(50, 11));
      }
      else
      {
        std::cout << "A line is too long. Please check your file and try again\n"
            "Line skipped. It may help to remove empty spaces\n";
        continue;
      }
      if (IsDouble(balance))
      {
        bal = std::stod(balance);
      } else
      {
        std::cout << "At least one of your balances is not a valid number.\n"
            "That line will be skipped";
      }
      accounts_vector.push_back(account(account_number, fname, lname, bal));
  }

  std::sort( accounts_vector.begin( ), accounts_vector.end( ), [ ]( account& lhs, account& rhs )
  {
    return lhs.get_account_number() < rhs.get_account_number();
  });
  file.close();
  file2.open("account.csv");
  if (file2)
  {
    for (int i = 0; i <= accounts_vector.size() ; ++i)
    {
      accounts_vector[i].toCsv(file2);
    }
  }else
  {
    std::cout << "Output file not opened properly." << std::endl;
  }
  file2.close();

  return 0;
}
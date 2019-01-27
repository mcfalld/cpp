#include <iostream>
//#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include "C:\lib\trim.h"
#include "account.h"
#include "C:\lib\derrick_math.h"
#include "factory.h"
#include "manager.h"
//#include "simple_account.h"
//#include "bonus_account.h"
//#include "service_account.h"
//#include "balanced_account.h"

int main()
{

  std::ifstream file("C:\\Users\\Derrick\\Desktop\\C\\c++\\finalAssignment\\account2.dat");
  std::string line;
  int count = 0;
  char type;
//  manager mgr;
  if (!file)
  {
    std::cout << "Please check your file path and try again.";
    return 0;
  }
  while (std::getline(file, line))
  {
    std::cout << type <<'\n';
    count++;
    if (line.length() < 62)
    {
      std::cout << "Line " << count << " had too few characters.  Line skipped" << std::endl;
      continue;
    }
    if (line.length() > 63 || (line.length() == 63 && line[62] != '\r') || (isspace(line[61]) != 0))
    {
      std::cout << "Line " << count << " had too many characters.  Line skipped" << std::endl;
      continue;
    }
    if (line[49] != ' ')
    {
      std::cout << "There appears to be an error with line " << count << ". That line will be skipped\n"
          "Please check your file." << std::endl;
      continue;
    }

    manager mgr;

    mgr.accounts_map.emplace( mgr.factory(line));

    file.close();

//    account_map.emplace(make_pair(account_number,std::unique_ptr<account> new account));

    return 0;
  }
}
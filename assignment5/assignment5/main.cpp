#include <iostream>
#include <fstream>
#include <vector>
#include <cstddef>
#include <iomanip>

#include "employee.h"

bool IsFloat(const std::string& MyString)
{
  try
  {
    std::stof(MyString);
  }
  catch(...)
  {
    return false;
  }
  return true;
}

int main()
{
  try
  {
    std::ifstream file;
    std::ofstream file2;
    std::string line;
    std::vector<employee> employee_vector;
    std::vector<employee> employee_raise_vector;
    std::string first_name;
    std::string last_name;
    std::string pay;
    std::string str2(",");

    file.open("employee.dat");

    if (file.good())
    {
      while (getline(file, line))
      {
        last_name = line.substr(0, line.find(','));
        first_name = line.substr(line.find(',') + 1, (','));
        pay = line.substr(line.find_last_of(',') + 1);
        first_name = first_name.substr(0, first_name.size() - (pay.size() + 1));
        std::size_t found = line.find(str2, line.find(str2) + 1);

        if (last_name.empty() || first_name.empty() || pay.empty())//ensures there is some characters in the provided fields
        {
          std::cout << "Please check your file, remove fields with errors and try again\n";
        }
          if (line.find(str2, (found + 1)) == std::string::npos) //makes sure there is not more than 2 commas, lines with more will be ignored
          {
            if (line.find(str2) != std::string::npos && line.find(str2, line.find(str2) + 1) != std::string::npos) //makes sure there is not less than 2 commas
            {                                                                                                      //lines with less will be ignored.
              if (IsFloat(pay))
              {
                employee_vector.push_back(employee(last_name, first_name, stof(pay))); //makes my vector of employees
                employee_raise_vector.push_back(employee(last_name, first_name, stof(pay) + 50)); //gives my employees a raise and stores them into a new vector
              } else
              {
                std::cout << "You have entered a pay that was not an appropriate number\nPlease check your file and fix any errors before trying again\n"<<
                    "Errored lines have been skipped." << std::endl;
                continue;
              }

            } else
            {
              std::cout << "Please make sure you entered enough fields\nThe program will ignore faulty input but you have been warned.\n" ;
              continue; //this is what ignores more or less than 2 commas
            }
          }else{std::cout << "Please check your file, there may be\nlines with too many fields provided\n";}
      }
    } else std::cout << "Unable to open file";
      file.close();
      std::cout << std::fixed << std::setprecision(2) << '\n';
//      std::cout << employee_vector.size() << std::endl;// displays the size of the vector of employees
    std::cout << std::fixed << std::setprecision(2) << std::endl;

    file2.precision(2);
    file2.setf(std::ios::fixed);
    file2.setf(std::ios::showpoint);
    file2.open("update.dat");
    for (int i = 0; i < employee_vector.size(); i++)
    {
//      employee_vector[i].toString();
      employee_raise_vector[i].toCsv(file2);
//      employee_raise_vector[i].toCsv(std::cout);
    }
      file2.close();
      return 0;
    }

    catch (...)
    {
      std::cout << "something went wrong." << std::endl;
      return 1;
    }
  }

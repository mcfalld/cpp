#include <iostream>
#include <fstream>
#include <vector>
//#include <string>

#include "employee.h"

int main( ) {
  std::string str;
  std::ifstream file;
  std::string line;
  std::vector<employee> employee_vector;
  std::string first_name;
  std::string last_name;
  std::string pay;

  file.open("employee.dat");
  std::cout << employee_vector.size();


  if (file.good()) {
    while (getline(file, line)) {

        last_name = line.substr(0, line.find(','));
        first_name = line.substr(line.find(','), line.find(','));
        pay = line.substr(line.find_last_of(','), '\n');

        std::cout << "last name: " << last_name << std::endl;
				std::cout << "first name: "	<< first_name << std::endl;
				std::cout << "pay (as string): " << pay << std::endl;
        // employee_vector.push_back(employee(last_name, first_name, stof(pay)));
        // std::cout << employee_vector.size();
    }

    std::cout << employee_vector.size();

	  for(int i = 0; i < employee_vector.size(); i++) {
	    employee_vector[i].toString();
	    std::cout << "working";
	  }
  }
  else std::cout << "Unable to open file";
		
	std::cout << "Hello, World!" << std::endl;
  file.close();
  return 0;
}
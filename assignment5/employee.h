//
// Created by Derrick on 7/5/2017.
//

#ifndef ASSIGNMENT5_EMPLOYEE_H
#define ASSIGNMENT5_EMPLOYEE_H

//#include <string>
class employee {
	private:
		std::string first_name;
		std::string last_name;
		float monthly_pay;

public:
	employee(std::string last, std::string first, float pay) {
		first_name = first;
		last_name = last;
		monthly_pay = pay;
	}

	public:void toString() {
		std::cout << first_name << last_name << monthly_pay << std::endl;
	}
};

#endif //ASSIGNMENT5_EMPLOYEE_H

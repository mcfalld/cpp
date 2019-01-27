#include <cstring>
#include <string>

//
// Created by Derrick on 6/15/2017.
//

class animal{


private:std::string name = "";
private:std::string type = "";
private:int age = 0;

//public:animal()
//    {
//
//    }
public:animal(std::string name = "nameUnset", std::string type = "typeUnset", int a = 0)
    {

        this->name = name;
        this->type = type;
        this->age = a;

    }

public:animal(const animal& another_animal) :
            name(another_animal.name),
            type(another_animal.type),
            age(another_animal.age)

    {}

public:void set_name(std::string n)
    {
        name = n;
    }

public:std::string get_name()
    {
        return name + " ";
    }

public:void set_type(std::string t)
    {
        type = t;
    }

public:std::string get_type()
    {
        return type + " ";
    }

public:void set_age(int a)
    {
        age = a;
    }

public:std::string get_age()
    {
        return std::to_string(age);
    }

public:std::string toString()
    {
        return get_name() + " : " + get_type() + " : " + get_age();
    }
};

//
// Created by Derrick on 7/2/2017.
//

#ifndef ASSIGNMENT4_DOG_H
#define ASSIGNMENT4_DOG_H

#include "animal.h"

class dog : public animal
{
  std::string breed = "";

 public:dog(int i, float w, std::string b) : animal(i,w)
  {
      //super();
      breed = b;
  };

 public: std::string get_breed()
  {
      return breed;
  }

  void speak()
  {
      std::cout << "Dog says woof\n";
  }
};

#endif //ASSIGNMENT4_DOG_H

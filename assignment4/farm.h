//
// Created by Derrick on 7/2/2017.
//

#ifndef ASSIGNMENT4_FARM_H
#define ASSIGNMENT4_FARM_H


#include "animal.h"


class farm
{
 private:static const int
      max_animals = 100;
  animal* animals[max_animals];
  int num_animals;
 public:farm() : num_animals{0}
  {

  }
  ~farm()
  {
    for ( int i = 0; i < num_animals; i++ )
    {
      delete animals[i];
    }
  }
  bool
  add(animal* a)
  {
    if
        (num_animals >= max_animals)
    {
      return false;
    }
    animals[num_animals++] = a;
    return true;
  }
  void speak()
  {
    for ( int i = 0; i < num_animals; i++)
    {
      animals[i]->speak();
    }
  }
};
#endif //ASSIGNMENT4_FARM_H

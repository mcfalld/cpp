//
// Created by Derrick on 7/2/2017.
//
#ifndef ASSIGNMENT4_ANIMAL_H
#define ASSIGNMENT4_ANIMAL_H



class animal
{

  int num_legs;
  float weight;

 public:
  animal(int i, float w)
  {
    num_legs = i;
    weight = w;
  }
 public:virtual void speak();

};


#endif //ASSIGNMENT4_ANIMAL_H

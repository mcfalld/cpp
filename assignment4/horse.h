//
// Created by Derrick on 7/2/2017.
//

#ifndef ASSIGNMENT4_HORSE_H
#define ASSIGNMENT4_HORSE_H

#include "animal.h"

class horse : public animal
{
  bool stud = false;

 public:
  horse(int i, float w, bool stud) : animal(i, w)
  {
      this->stud = stud;
  }

  void speak()
  {
      std::cout << "Horse says Nay\n";
  }

};
#endif //ASSIGNMENT4_HORSE_H

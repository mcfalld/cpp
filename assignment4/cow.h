//
// Created by Derrick on 7/2/2017.
//

#ifndef ASSIGNMENT4_COW_H
#define ASSIGNMENT4_COW_H

#include "animal.h"

class cow : public animal
{
  bool dairy;

 public: cow(int i, float w, bool d): animal(i, w)
  {
      dairy = d;
  }

  void speak()
  {
      std::cout << "Cow says moo\n" << std::endl;
  }

};

#endif //ASSIGNMENT4_COW_H

#include <iostream>
#include "farm.h"
#include "horse.h"
#include "cow.h"
#include "dog.h"

int main()
{
    farm my_farm;
    my_farm.add(new dog (4, 40, "Wiener Dog"));
    my_farm.add(new horse(4, 950, true));
    my_farm.add(new cow (4, 579, false));

    my_farm.speak();
    printf("\n");

    return 0;
}
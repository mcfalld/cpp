/*
 * Author : Derrick McFall
 * Date   : 21Jun17
 */

#include <iostream>
#include "planet.h"


int main()
{



    dlm::planet earth(238900, 6786, 169900000, 7, 321000000, 72);
//    earth.set_distance_of_moon(238900);
//    earth.set_moon_circumference(6786);
//    earth.set_continental_sa(169900000);
//    earth.set_number_of_continents(7);
//    earth.set_water_percentage(72);
//    earth.set_water_volume(321000000);


    earth.output(std::cout);// set_number_of(7);

    earth.night();
    earth.morning();
    earth.noon();

    dlm::planet mars = earth;

    mars.morning();
    mars.noon();
    mars.night();


    //std::cout <<  << std::endl;
    return 0;
}
//
// Created by Derrick on 6/24/2017.
//
#ifndef ASSIGNMENT3_PLANET_H
#define ASSIGNMENT3_PLANET_H

#include <iomanip>
#include "moons.h"
#include "continents.h"
#include "water.h"


namespace dlm
{



    class planet
    {

    public:
        dlm::moons m;
        dlm::continents c;
        dlm::water w;
        planet()
        {

        }

    public:
        planet(int init_distance, double init_circumference, double init_continental_surface_area,
               int init_number_of_continents,
               double init_total_water_volume,
               int init_percent_of_surface
        ) : m{init_distance, init_circumference},
            c{init_continental_surface_area, init_number_of_continents},
            w{init_total_water_volume, init_percent_of_surface}
        {}



        void output(std::ostream &stream) //const
        {
            stream << "\tMoons distance from planet: " << std::fixed<< std::setprecision(2) << m.get_moon_distance() << "\n\tCircumference: "
                   << m.get_moon_circumference() << '\n';
            stream << "\tSurface area of Land: " << std::fixed << c.get_continent_sa() << "\n\tNumber of continents: "
                   << c.get_number_of() << '\n';
            stream << "\tTotal Volume of Water: "<< std::fixed << w.get_total_water() <<
                   "\n\tPercent of Water covering surface of Planet: "<< std::fixed << w.get_percent() << "%\n";

        }
// Moons
    public:
        void set_distance_of_moon(int i)
        {
            m.set_moon_distance(i);
        }

    public:
        void set_moon_circumference(double i)
        {
            m.set_circumference(i);
        }

    public:
        int get_distance_of_moon()
        {
            return m.get_moon_distance();
        }

    public:
        double get_circumference_of_moon()
        {
            return m.get_moon_circumference();
        }

//Continents
    public:
        void set_continental_sa(double i)
        {
            c.set_continent_sa(i);
        }

    public:
        double get_continental_sa(double i)
        {
            return c.get_continent_sa();
        }

    public:
        void set_number_of_continents(int i)
        {
            c.set_number_of(i);
        }

    public:
        int get_number_of_continents()
        {
            return c.get_number_of();
        }

//Water

    public:
        void set_water_volume(double i)
        {
            w.set_total_water(i);
        }

    public:
        double get_water_volume()
        {
            return w.get_total_water();
        }

    public:
        void set_water_percentage(int i)
        {
            w.set_percent(i);
        }

    public:
        int get_water_percentage()
        {
            return w.get_percent();
        }

        //Functions
    public:
        void morning()
        {
            std::cout << "The sun rises.\n";
            m.moon_moves_morning();
            c.continents_morning();
            w.water_morning();
            std::cout << "\tMoons distance from planet: " << std::fixed << m.moon_moves_morning() << "\n\tCircumference: "
                      << m.get_moon_circumference() << '\n';
            std::cout << "\tSurface area of Land: " << std::fixed << c.continents_morning() << "\n\tNumber of continents: "
                      << c.get_number_of() << '\n';
            std::cout << "\tTotal Volume of Water: "<< std::fixed << w.waterVolumeMorning() <<
                      "\n\tPercent of Water covering surface of Planet: "<< std::fixed << w.water_morning() << "%\n";


        }

    public:
        void noon()
        {
            std::cout << "The sun moves. It is noon.\n";
            m.moon_moves_noon();
            c.continents_noon();
            w.water_noon();

            std::cout << "\tMoons distance from planet: "<<std::fixed << m.moon_moves_noon() << "\n\tCircumference: "
                      << std::fixed << m.get_moon_circumference() << '\n';
            std::cout << "\tSurface area of Land: "<< std::fixed << c.continents_noon() << "\n\tNumber of continents: "
                      << c.get_number_of() << '\n';
            std::cout << "\tTotal Volume of Water: "<< std::fixed << w.waterVolumeNoon() <<
                      "\n\tPercent of Water covering surface of Planet: " << std::fixed << w.water_noon() << "%\n";
        }

    public:
        void night()
        {
            std::cout << "The sun sets.\n";
            m.moon_moves_night();
            c.continents_night();
            w.water_night();

            std::cout << "\tMoons distance from planet: "<<std::fixed << m.moon_moves_night() << "\n\tCircumference: "
                      << std::fixed << m.get_moon_circumference() << '\n';
            std::cout << "\tSurface area of Land: "<< std::fixed << c.continents_night() << "\n\tNumber of continents: "
                      << c.get_number_of() << '\n';
            std::cout << "\tTotal Volume of Water: "<< std::fixed << w.waterVolumeNight() <<
                      "\n\tPercent of Water covering surface of Planet: "<<std::fixed << w.water_night() << "%\n";
        }

    };


//void output(std::ostream& s)const
//;
}
#endif //ASSIGNMENT3_PLANET_H

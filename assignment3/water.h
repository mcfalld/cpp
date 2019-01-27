//
// Created by Derrick on 6/24/2017.
//
namespace dlm
{

#ifndef ASSIGNMENT3_WATER_H
#define ASSIGNMENT3_WATER_H


    class water
    {
        double total_water_volume;
        int percent_of_surface;

    public:
        water()
        {

        }

    public:
        water(double vol, int percent)
        {
            total_water_volume = vol;
            percent_of_surface = percent;
        }

    public:
        void set_total_water(double water)
        {
            total_water_volume = water;
        }

    public:
        double get_total_water()
        {
            return total_water_volume;
        }

    public:
        void set_percent(int percent)
        {
            percent_of_surface = percent;
        }

    public:
        int get_percent()
        {
            return percent_of_surface;
        }

        void output(std::ostream &stream) const
        {
            stream << "\tTotal Volume of Water: " << total_water_volume <<
                   "\n\tPercent of Water covering surface of Planet: " << percent_of_surface << "%\n";
        }

    public:
        int water_morning()
        {
            return percent_of_surface - 1;
        }

    public:
        int water_noon()
        {
            return percent_of_surface;
        }

    public:
        int water_night()
        {
            return percent_of_surface + 1;
        }

    public:
        double waterVolumeMorning()
        {
            return total_water_volume * .85;
        }

    public:
        double waterVolumeNoon()
        {
            return total_water_volume;
        }

    public:
        double waterVolumeNight()
        {
            return total_water_volume * 1.07;
        }
    };


#endif //ASSIGNMENT3_WATER_H

}
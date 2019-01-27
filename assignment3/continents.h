//
// Created by Derrick on 6/24/2017.
//

namespace dlm
{

#ifndef ASSIGNMENT3_CONTINENTS_H
#define ASSIGNMENT3_CONTINENTS_H


    class continents
    {
        double continental_surface_area;
        int number_of;
//constructors
    public:
        continents()
        {

        }

    public:
        continents(double cont, int number_of)
        {
            continental_surface_area = cont;
            this->number_of = number_of;
        }
//end constructors

//begin setters and getters

    public:
        void set_continent_sa(double continent)
        {
            continental_surface_area = continent;
        }

    public:
        double get_continent_sa()
        {
            return continental_surface_area;
        }

    public:
        void set_number_of(int num)
        {
            number_of = num;
        }

    public:
        int get_number_of()
        {
            return number_of;
        }

        void output(std::ostream &stream) const
        {
            stream << "\tSurface area of Land: " << continental_surface_area << "\n\tNumber of continents: "
                   << number_of << '\n';
        }

    public:
        double continents_morning()
        {
            return continental_surface_area * .9;
        }

    public:
        double continents_noon()
        {
            return continental_surface_area;
        }

    public:
        double continents_night()
        {
            return continental_surface_area * 1.1;
        }
    };


#endif //ASSIGNMENT3_CONTINENTS_H

}
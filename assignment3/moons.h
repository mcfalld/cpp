//
// Created by Derrick on 6/24/2017.
//

namespace dlm
{
#ifndef ASSIGNMENT3_MOONS_H
#define ASSIGNMENT3_MOONS_H

#endif //ASSIGNMENT3_MOONS_H

    class moons
    {
        int distance;
        double circumference;

    public:
        moons()
        {

        }

    public:
        moons(int d, double cir)
        {
            distance = d;
            circumference = cir;
        }


    public:
        double set_moon_distance(int d)
        {
            distance = d;
            return 0;
        }

    public:
        int get_moon_distance()
        {
            return distance;
        }

    public:
        void set_circumference(double c)
        {
            circumference = c;
        }

    public:
        double get_moon_circumference()
        {
            return circumference;
        }

    public:
        double moon_moves_morning()
        {
            return get_moon_distance() * .935;
        }

    public:
        double moon_moves_noon()
        {
            return get_moon_distance();
        }

    public:
        double moon_moves_night()
        {
            return get_moon_distance() * (1.065);
        }

        void output(std::ostream &stream) const
        {
            stream << "\tDistance from planet: " << distance << "\n\tCircumference: " << circumference << '\n';
        }

    };
}
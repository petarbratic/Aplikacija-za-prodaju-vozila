#ifndef MOTOR_HPP_INCLUDED
#define MOTOR_HPP_INCLUDED

enum Gorivo {BENZIN, DIZEL, GAS, STRUJA, HIBRID};
class Motor{
    private:
        int snaga;
        int zapremina;
        int kilometraza;
        Gorivo gorivo; /// sta si mislio pod ovim poljem?
};

#endif // MOTOR_HPP_INCLUDED

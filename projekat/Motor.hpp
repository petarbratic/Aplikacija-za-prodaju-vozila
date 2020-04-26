#ifndef MOTOR_HPP_INCLUDED
#define MOTOR_HPP_INCLUDED

enum Gorivo {BENZIN, DIZEL, GAS, STRUJA, HIBRID};
class Motor{
    private:
        int snaga;
        int zapremina;
        int kilometraza;
        Gorivo gorivo;
    public:
        Motor (int power, int cc, int vracana, Gorivo napitak){
            snaga=power;
            zapremina=cc;
            kilometraza=vracana;
            gorivo=napitak;
        }
};

#endif // MOTOR_HPP_INCLUDED

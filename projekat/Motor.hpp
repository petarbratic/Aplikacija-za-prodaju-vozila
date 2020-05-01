#ifndef MOTOR_HPP_INCLUDED
#define MOTOR_HPP_INCLUDED

enum Gorivo {BENZIN, DIZEL, BENZINIGAS, STRUJA, HIBRID};
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
        bool UgradnjaPlina (){
            if(gorivo==BENZIN && snaga>0){
                gorivo=BENZINIGAS;
                snaga--;  //ugradnjom plina se snaga automobila minimalno smanji, pa zato -1
                return true;
            }
            return false;
        }
};

#endif // MOTOR_HPP_INCLUDED

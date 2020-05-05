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
        void ispisiMotor (){
            std::cout << snaga << std::endl;
            std::cout << zapremina << std::endl;
            std::cout << kilometraza << std::endl;
            switch (gorivo){
                case 0: {std::cout << "BENZIN" << std::endl;
                        break;}
                case 1: {std::cout << "DIZEL" << std::endl;
                        break;}
                case 2: {std::cout << "BENZINIGAS" << std::endl;
                        break;}
                case 3: {std::cout << "STRUJA" << std::endl;
                        break;}
                case 4: {std::cout << "HIBRID" << std::endl;
                        break;}
            }
        }
};

#endif // MOTOR_HPP_INCLUDED

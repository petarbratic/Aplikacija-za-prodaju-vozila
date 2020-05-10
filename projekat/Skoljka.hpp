#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED
#include <fstream>
#include <string>
#include <iostream>
enum Materijal {CELIK, ALUMINIJUM, KARBON};
enum Karoserija {LIMUZINA, KARAVAN, HECBEK, SUV, KABRIOLET};
class Skoljka{
    private:
        std::string boja;
        Karoserija karoserija;
        Materijal materijal;
    public:
        Skoljka (std::string b, Karoserija kar, Materijal m){
            boja=b;
            karoserija=kar;
            materijal=m;
        }
        bool Prepravi (){
            if (karoserija!=KABRIOLET){  // mislio sam na nešto ovako https://www.youtube.com/watch?v=qm50TgVi0c4
                karoserija=KABRIOLET;    // rezultat se vidi na 3:17
                return true;
            }
            return false;
        }
        void ispisiSkoljka (){
            std::cout << boja << std::endl;
            switch (materijal){
                case 0: {std::cout << "CELIK" << std::endl;
                        break;}
                case 1: {std::cout << "ALUMINIJUM" << std::endl;
                        break;}
                case 2: {std::cout << "KARBON" << std::endl;
                        break;}
            }
            switch (karoserija){
                case 0: {std::cout << "LIMUZINA" << std::endl;
                        break;}
                case 1: {std::cout << "KARAVAN" << std::endl;
                        break;}
                case 2: {std::cout << "HECBEK" << std::endl;
                        break;}
                case 3: {std::cout << "SUV" << std::endl;
                        break;}
                case 4: {std::cout << "KABRIOLET" << std::endl;
                        break;}
            }
        }
        friend std::ostream& operator << (std::ostream& izlaz, const Skoljka& skolj);
};

#endif // SKOLJKA_HPP_INCLUDED

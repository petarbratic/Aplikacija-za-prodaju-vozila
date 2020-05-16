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
            std::cout <<"Boja vozila: "<< boja << std::endl;
            std::cout <<"Materijal od kog je napravljeno vozilo je: ";
            switch (materijal){
                case 0: {std::cout << "celik" << std::endl;
                        break;}
                case 1: {std::cout << "aluminijum" << std::endl;
                        break;}
                case 2: {std::cout << "karbon" << std::endl;
                        break;}
            }
            std::cout <<"Karoserija vozila: ";
            switch (karoserija){
                case 0: {std::cout << "limuzina" << std::endl;
                        break;}
                case 1: {std::cout << "karavan" << std::endl;
                        break;}
                case 2: {std::cout << "hecbek" << std::endl;
                        break;}
                case 3: {std::cout << "SUV" << std::endl;
                        break;}
                case 4: {std::cout << "kabriolet" << std::endl;
                        break;}
            }
        }
        friend std::ostream& operator << (std::ostream& izlaz, const Skoljka& skolj);
};

#endif // SKOLJKA_HPP_INCLUDED

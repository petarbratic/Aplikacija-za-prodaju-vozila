#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED
#include <vector>
#include <fstream>
#include <string.h>

using namespace std;
class Korisnik{
    private:
        std::string ime;
        std::string prezime;
        bool kupacIliProd;
        std::string brojTelefona;
        std::string korisnickoIme;
        std::string lozinka;

    public:
        Korisnik(std::string i, std::string p, bool kilip, std::string broj, std::string username, std::string password){
            ime=i;
            prezime=p;
            kupacIliProd=kilip;
            brojTelefona=broj;
            korisnickoIme=username;
            lozinka=password;
        }
        string getime()const{
            return ime;
        }
        string getprezime()const{
            return prezime;
        }
        string getkorisnickoime()const{
            return korisnickoIme;
        }
        string getlozinka()const{
            return lozinka;
        }
        void citajTxt(std::string nazivFajla){
            std::string linija;
            std::ifstream fajl (nazivFajla);
            if (fajl.is_open()){
                while ( getline (fajl,linija) ){
                std::cout << linija << '\n';
            }
            fajl.close();
            }

            else
            std::cout << "Neuspesno otvoren fajl";
            }

        void pisiTxt(std::string nazivFajla,const Korisnik& k22,char mode='w'){
                    std::ofstream fajl;
                    if (mode=='a'){
                        fajl.open (nazivFajla, std::ios_base::app);
                    }
                    else{
                        fajl.open (nazivFajla);}
                    fajl << k22.ime << "," << k22.prezime << "," << k22.kupacIliProd << "," << k22.brojTelefona << "," << k22.korisnickoIme << "," << k22.lozinka <<std::endl;

                    fajl.close();

}
        void ispisiKorisnik ()const{
            std::cout<<"Ime korisnika: " << ime << std::endl;
            std::cout <<"Prezime korisnika: "<< prezime << std::endl;
            switch (kupacIliProd){
                case 0:
                    std::cout << "Kupac" << std::endl;break;
                case 1:
                    std::cout << "Prodavac" << std::endl;

            }
            std::cout <<"Broj telefona korisnika: "<< brojTelefona << std::endl;
            std::cout <<"Korisnicko ime: "<< korisnickoIme << std::endl;
            //std::cout <<"Lozinka: "<< lozinka << std::endl;
        }

};

#endif // KORISNIK_HPP_INCLUDED

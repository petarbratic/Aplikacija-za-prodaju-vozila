#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED

#include <fstream>
#include <string.h>
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

        void pisiTxt(std::string nazivFajla, Korisnik k22,/* std::string uime, std::string uprezime, bool ukilip, std::string ubroj, std::string uuser, std::string upass , */char mode='w'){
                    std::ofstream fajl;
                    if (mode=='a'){
                        fajl.open (nazivFajla, std::ios_base::app);
                    }
                    else{
                        fajl.open (nazivFajla);}
                    fajl << k22.ime << "," << k22.prezime << "," << k22.kupacIliProd << "," << k22.brojTelefona << "," << k22.korisnickoIme << "," << k22.lozinka <<std::endl;

                    fajl.close();

}
        void ispisiKorisnik (){
            std::cout << ime << std::endl;
            std::cout << prezime << std::endl;
            std::cout << kupacIliProd << std::endl;
            std::cout << brojTelefona << std::endl;
            std::cout << korisnickoIme << std::endl;
            std::cout << lozinka << std::endl;
        }
};

#endif // KORISNIK_HPP_INCLUDED

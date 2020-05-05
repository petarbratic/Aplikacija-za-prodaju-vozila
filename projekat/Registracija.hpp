#ifndef REGISTRACIJA_HPP_INCLUDED
#define REGISTRACIJA_HPP_INCLUDED

class Registracija{
    private:
        int doKojeGodine; //do koje godine je registrovan
        std::string kategorija; // a, b, c, d, f
        std::string registarskaOznaka; // primer: NS 317 TG
    public:
        Registracija (int dkg, std::string kat, std::string ozn){
            doKojeGodine=dkg;
            kategorija=kat;
            registarskaOznaka=ozn;
        }
};

#endif // REGISTRACIJA_HPP_INCLUDED

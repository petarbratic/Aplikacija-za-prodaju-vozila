#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED

class Korisnik{
    private:
        string ime;
        string prezime;
        bool kupacIliProd;
        string brojTelefona;
        string korisnickoIme;
        string lozinka;
    public:
        Korisnik(string i, string p, bool kilip, string broj, string username, string password){
            ime=i;
            prezime=p;
            kupacIliProd=kilip;
            brojTelefona=broj;
            korisnickoIme=username;
            lozinka=password;
        }
};

#endif // KORISNIK_HPP_INCLUDED

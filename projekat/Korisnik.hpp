#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED

class Korisnik{
    private:
        string ime;
        string prezime;
        bool kupacIliProd;
        /// string kupacIliProd; ja bih ovde bool stavila, lakse je
        string brojTelefona;
        /// int brojTelefona; bolje da broj telefona bude string, ako imamo / ili -
        /// dodala bih jos, posto je rec o korisniku na sajtu:
        string korisnickoIme; ///ovo nek bude isto sto i email
        string lozinka;
};

#endif // KORISNIK_HPP_INCLUDED

#ifndef BAZA_HPP_INCLUDED
#define BAZA_HPP_INCLUDED
#include "Korisnik.hpp"
#include <string.h>
class Baza
{
private:
    string korisnikF;
    vector<Korisnik> korisnici;
    bool kilip;
    int T=2;
    int x=0,y=0;
    string tempIme;
    string tempPrezime;
public:
    Baza (string k)
    {
        korisnikF=k;
    }
    vector<string> splitSen(string str, char c=',')
    {
        string w = "";
        vector<string> v;
        for (auto rem : str)
        {
            if (rem==c)
            {
                v.push_back(w);
                w="";
            }
            else
            {
                w=w+rem;
            }
        }
        v.push_back(w);

        return v;
    }
    void dodaj(const Korisnik& k)
    {
        korisnici.push_back(k);
    }
    int ucitajKorisnikeLog(string n, string korisnickoa, string sifraa)
    {
        string linija;
        vector<string> result;
        ifstream fajl (n);
        if (fajl.is_open())
        {
            while ( getline (fajl,linija) )
            {
                if (linija!="")
                {
                    result = splitSen(linija);
                    if (result[2]=="1")
                    {
                        kilip = true;
                    }
                    else
                        kilip =false;
                    Korisnik k(result[0], result[1], kilip, result[3], result[4], result[5]);
                    korisnici.push_back(k);
                }

                for(auto it=korisnici.begin(); it<korisnici.end(); it++)
                {
                    x=(it->getkorisnickoime()).compare(korisnickoa);
                    y=(it->getlozinka()).compare(sifraa);
                    if (x==0 && y==0)
                    {
                        T=1;
                        break;// ako je jedan onda je pronasao
                    }
                    else
                    {
                        T=0;
                    }

                }
            }
            fajl.close();
        }

        else
        {
            cout << "Neuspesno otvoren fajl";
        }
        return T;


    }

    void ucitajKorisnike(string n)
    {
        string linija;
        vector<string> result;
        ifstream fajl (n);
        if (fajl.is_open())
        {
            while ( getline (fajl,linija) )
            {
                if (linija!="")
                {
                    result = splitSen(linija);
                    if (result[2]=="1")
                    {
                        kilip = true;
                    }
                    else
                        kilip =false;
                    Korisnik k(result[0], result[1], kilip, result[3], result[4], result[5]);
                    korisnici.push_back(k);
                    // k.ispisiKorisnik();
                }

            }
            fajl.close();
        }



        else
        {
            cout << "Neuspesno otvoren fajl";
        }


    }

    void ispisiKorisnike()
    {
        cout<<"Korisnici: "<<endl<<endl;
        for(auto itt=korisnici.begin(); itt<korisnici.end(); itt++)
        {
            itt->ispisiKorisnik();
        }

    }

    string getImeTrenutnog(string n, string korisnickoa, string sifraa)
    {
        string linija;
        vector<string> result;
        ifstream fajl (n);
        if (fajl.is_open())
        {
            while ( getline (fajl,linija) )
            {
                if (linija!="")
                {
                    result = splitSen(linija);
                    if (result[2]=="1")
                    {
                        kilip = true;
                    }
                    else
                        kilip =false;
                    Korisnik k(result[0], result[1], kilip, result[3], result[4], result[5]);
                    korisnici.push_back(k);
                }

                for(auto it=korisnici.begin(); it<korisnici.end(); it++)
                {
                    x=(it->getkorisnickoime()).compare(korisnickoa);
                    y=(it->getlozinka()).compare(sifraa);
                    if (x==0 && y==0)
                    {
                        tempIme=(it->getime());
                        break;// ako je jedan onda je pronasao
                    }
                    else
                    {
                        tempIme="neuspesno";
                    }

                }
            }
            fajl.close();
        }

        else
        {
            cout << "Neuspesno otvoren fajl";
        }
        return tempIme;


    }
    string getPrezimeTrenutnog(string n, string korisnickoa, string sifraa)
    {
        string linija;
        vector<string> result;
        ifstream fajl (n);
        if (fajl.is_open())
        {
            while ( getline (fajl,linija) )
            {
                if (linija!="")
                {
                    result = splitSen(linija);
                    if (result[2]=="1")
                    {
                        kilip = true;
                    }
                    else
                        kilip =false;
                    Korisnik k(result[0], result[1], kilip, result[3], result[4], result[5]);
                    korisnici.push_back(k);
                }

                for(auto it=korisnici.begin(); it<korisnici.end(); it++)
                {
                    x=(it->getkorisnickoime()).compare(korisnickoa);
                    y=(it->getlozinka()).compare(sifraa);
                    if (x==0 && y==0)
                    {
                        tempIme=(it->getprezime());
                        break;// ako je jedan onda je pronasao
                    }
                    else
                    {
                        tempIme="neuspesno";
                    }

                }
            }
            fajl.close();
        }

        else
        {
            cout << "Neuspesno otvoren fajl";
        }
        return tempIme;


    }
};

#endif // BAZA_HPP_INCLUDED

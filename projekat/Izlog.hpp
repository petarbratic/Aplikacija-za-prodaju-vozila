#ifndef IZLOG_HPP_INCLUDED
#define IZLOG_HPP_INCLUDED
#include "Automobil.hpp"
#include "Kamion.hpp"
#include <vector>
using namespace std;
enum lokacija {BEOGRAD, NOVI_SAD};
class Izlog
{
private:
    lokacija lokacijaIzloga;
    vector<Vozilo*> vozila;
public:
    Izlog(lokacija loc)
    {
        lokacijaIzloga=loc;
    }
    void dodaj(Vozilo* v)
    {
        vozila.push_back(v);
    }
    void ispisiVozila()
    {
        switch (lokacijaIzloga)
        {
        case 0:
            cout<<"Lokacija ovog izloga je Beograd."<<endl;
            break;
        case 1:
            cout<<"Lokacija ovog izloga je Novi Sad"<<endl;

        }
        cout<<"Broj automobila na izlogu je: "<<vozila.size()<<endl;
        cout<<"Na njemu su u ponudi sledeci automobili: "<<endl<<endl;
        for(auto it=vozila.begin(); it<vozila.end(); it++)
        {
            (*it)->ispisi();
        }
    }

    void ispisiSvaVozila()
    {
        cout<<"Ukupan broj automobila je: "<<vozila.size()<<endl;
        cout<<"Na njemu su u ponudi sledeci automobili: "<<endl<<endl;
        for(auto it=vozila.begin(); it<vozila.end(); it++)
        {
            (*it)->ispisi();
        }

    }
    // int kolikoJeAutomobila(){return automobili.size();}
    bool izbaci (int iid)
    {
        for(auto it=vozila.begin(); it<vozila.end(); it++)
        {
            if(iid==(*it)->getid())
            {
                vozila.erase(it);
                return true;
            }
        }
        return false;
    }
    void pretragaPoMarki(string mmarka)
    {
        int x;
        for(auto it=vozila.begin(); it<vozila.end(); it++)
        {
            x=((*it)->getmarka()).compare(mmarka);
            if (x==0)
            {
                (*it)->ispisi();
            }

        }
    }
    void pretragaPoImePrezimeId (int id)
    {
        for (auto it=vozila.begin();it<vozila.end();it++){

            if((*it)->getid()==id){
                (*it)->ispisi();
            }
        }
    }



   /* int ucitajSacuvanaVozila(string n, string imea, string prezimea)
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
                    Vozilo v(result[0], result[1], stoi(result[2]));
                    vozila.push_back(v);
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


    } */

};


#endif // IZLOG_HPP_INCLUDED





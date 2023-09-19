#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"kerrostalo luotu "<< endl;
}

Kerrostalo::~Kerrostalo()
{
    cout<<"kerrostalo tuhottu "<< endl;
}
void Kerrostalo::maaritaKerrokset()
{

    cout <<"maaritellaan kerrostalon kaikki asunnot" << endl;

    eka.maaritaAsunnot(2);
    toka.maaritaAsunnot2(4);
    kolmas.maaritaAsunnot2(4);
}
double Kerrostalo::laskeKulutus(double)
{

    int asuntojenmaara = eka.katuAsunnot + toka.KerrosAsunnot + kolmas.KerrosAsunnot;
    int yhtionKulutus = asuntojenmaara * eka.as1.neliot * eka.as1.asukasMaara;
    cout <<"kerrostalon kokonaiskulutus, ="<< yhtionKulutus<< endl;
    return yhtionKulutus;

}

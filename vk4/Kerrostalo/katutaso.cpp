#include "katutaso.h"
#include "asunto.h"


Katutaso::Katutaso()
{
cout <<"Katutaso luotu"<< endl;
}
Katutaso::~Katutaso()
{
cout <<"Katutaso tuhottu" << endl;
}


void Katutaso::maaritaAsunnot(int maara)
{
    katuAsunnot = maara;
    cout <<"maaritetaan "<< maara <<" kpl katutason asuntoja"<< endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    Kerros::maaritaAsunnot2(4);
}
double Katutaso::laskeKulutus(double)
{
    int asunnot = katuAsunnot + KerrosAsunnot;
  double kokonaiskulutus = asunnot * 100 * 2;
    cout <<"Katutason ja Kerroksien kulutus " << kokonaiskulutus << endl;
    return kokonaiskulutus;
}

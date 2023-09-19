#include "kerros.h"

Kerros::Kerros()
{
cout <<"Kerros luotu"<<endl;
}
Kerros::~Kerros()
{
cout <<"Kerros tuhottu" <<endl;
}
void Kerros::maaritaAsunnot2(int asuntoja)
{
   KerrosAsunnot = asuntoja;
   cout << "maaritetaan Katutason kerrokselta perittyja asuntoja"<< endl;
    cout << "maaritetaan " <<asuntoja << " kpl Kerroksen asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);

}
double Kerros::laskeKulutus2(double)
{
int asunnot2 = KerrosAsunnot;
int kokonaiskulutus2 = asunnot2 * 100 * 2;
cout<< "Kerroksen kulutus" << kokonaiskulutus2 << endl;
return kokonaiskulutus2;
}

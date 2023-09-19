#include "asunto.h"


Asunto::Asunto()
{
cout <<"Asunto loutu"<< endl;
}

Asunto::~Asunto()
{
cout <<"Asunto tuhottu"<< endl;
}

void Asunto::maarita(int asukkaat, int ala)
{
asukasMaara = asukkaat;
neliot = ala;
cout<<"Asunto maaritetty asukkaita = " <<asukasMaara << " nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double euroa)
{
    hinta = euroa;
    double Kulutus = asukasMaara * neliot * hinta;
    cout <<"Asunnon kulutus taman hetken hinnalla "<< hinta <<" on " << Kulutus << endl;
    return Kulutus;
}

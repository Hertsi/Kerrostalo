#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"

class Katutaso:public Kerros
{
public:
    Katutaso();
    ~Katutaso();
    Asunto as1;
    Asunto as2;
    void maaritaAsunnot(int);
    double laskeKulutus(double);
    int katuAsunnot;
};

#endif // KATUTASO_H

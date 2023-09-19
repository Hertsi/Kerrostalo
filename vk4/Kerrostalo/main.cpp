
#include "asunto.h"
#include "katutaso.h"
#include "kerrostalo.h"
int main()
{
   Kerrostalo WTC;
   WTC.maaritaKerrokset();
   double kulutushinta = 1;
   double kokonaiskulutus = WTC.laskeKulutus(kulutushinta);
   std::cout << "Kokonaiskulutus: " << kokonaiskulutus << std::endl;







   return 0;
}

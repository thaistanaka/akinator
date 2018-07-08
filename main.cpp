#include <iostream>
#include <cstring>
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif

#include "abb.h"

using namespace std;

void clean(){
    if (system("CLS"))
        system("clear");

}

int main()
{
    abb a;

    a.insere(1, "sff");
    a.insere(2, "ffgfg");
    a.insere(3, "dfffd");
    a.insere(4, "dfdsbdg");
    a.insere(5, "sdfsds");
    a.insere(6, "ff");
    a.insere(7, "dfg");
    a.emOrdem();
    clean();
    a.remover(6);
    a.emOrdem();

    return 0;
}

#include "Principal.h"

int main()
{
    Principal* objeto = new Principal();
    objeto->Executar();
    delete(objeto);

    return 0;
}

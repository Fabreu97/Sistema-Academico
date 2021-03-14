#include "ListaAluno.h"

ListaAluno::ListaAluno():
    lista()
{

}

ListaAluno::~ListaAluno()
{

}

const int ListaAluno::get_Tamanho() const
{
    return(lista.get_Tamanho());
}

bool ListaAluno::incluir_Aluno(Aluno* a)
{
    return(lista.incluir_Info(a));
}

void ListaAluno::listar_Aluno() const
{
    Aluno* aux;
    int i;

    if(lista.get_Tamanho() > 0)
    {
        for(i = 0; i < lista.get_Tamanho(); i++)
        {
            aux = lista.get_Info(i);
            aux->print_Info();
            cout << endl;
        }
        cout << endl;
    }
}

void ListaAluno::limpar()
{
    lista.limpar();
}

Aluno* ListaAluno::get_Aluno(const int indice) const
{
    if(indice >= 0 && indice < lista.get_Tamanho())
    {
        return(lista.get_Info(indice));
    }
    else
    {
        return(NULL);
    }
}

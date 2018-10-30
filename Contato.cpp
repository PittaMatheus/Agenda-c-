///////////////////////////////////////////////////////////
//  Contato.cpp
//  Implementation of the Class Contato
//  Created on:      17-abr-2018 12:24:26
//  Original author: wsaba
///////////////////////////////////////////////////////////

#include "Contato.h"


Contato::Contato()
{

}

Contato::~Contato()
{

}

void Contato::incluir()
{
    pessoal.incluir();
    profissional.incluir();

    Academica a;
    a.incluir();
    academicas.push_back(a);
}

bool Contato::verificarNome(string nome)
{
    if (pessoal.getNome() == nome)
        return true;

    return false;
}

void Contato::atualizar()
{
    pessoal.atualizar();
    profissional.atualizar();
    for(int i=0; i < academicas.size(); i++)
    {
        academicas[i].atualizar();
    }
}

void Contato::imprimir()
{
    pessoal.imprimir();
    profissional.imprimir();
    for(int i=0; i < academicas.size(); i++)
    {
        academicas[i].imprimir();
    }
}
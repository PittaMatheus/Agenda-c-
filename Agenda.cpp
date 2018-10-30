///////////////////////////////////////////////////////////
//  Agenda.cpp
//  Implementation of the Class Agenda
//  Created on:      17-abr-2018 12:16:08
//  Original author: wsaba
///////////////////////////////////////////////////////////

#include "Agenda.h"

Agenda::Agenda()
{
    quantidadeMaxima = 100;
}

Agenda::~Agenda()
{

}

void Agenda::incluir()
{
    cout << "------------- INCLUSAO DE CADASTRO----------------" << endl;
    Contato c;
    c.incluir();
    contatos.push_back(c);
    cout << "--------- FIM DA INCLUSAO DE CADASTRO ------------" << endl;
}

void Agenda::pesquisar(string nome)
{
    cout << "-------------  INICIO DA PESQUISA ----------------" << endl;
    if(nome == "*")
    {
         for(int i=0; i < contatos.size(); i++)
            contatos[i].imprimir();
    }
    else
    {
        for(int i=0; i < contatos.size(); i++)
        {
            if(contatos[i].verificarNome(nome) == true)
                contatos[i].imprimir();
        }
    }
    cout << "-------------   FIM DA PESQUISA   ----------------" << endl;

}

void Agenda::remover(string nome)
{
    cout << "-------------  INICIO DA REMOCAO  ----------------" << endl;
    for(int i=0; i < contatos.size(); i++)
    {
        if(contatos[i].verificarNome(nome) == true)
        {
            contatos.erase(contatos.begin() + i);
            i--;
        }
    }
    cout << "-------------   FIM DA REMOCAO    ----------------" << endl;

}

void Agenda::atualizar(string nome)
{
    cout << "-------------INICIO DA ATUALIZACAO----------------" << endl;
    for(int i=0; i < contatos.size(); i++)
    {
        if(contatos[i].verificarNome(nome) == true)
            contatos[i].atualizar();
    }
    cout << "------------- FIM DA ATUALIZACAO  ----------------" << endl;
}

void Agenda::exibirMensagem()
{

}
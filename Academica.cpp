///////////////////////////////////////////////////////////
//  Academica.cpp
//  Implementation of the Class Academica
//  Created on:      17-abr-2018 12:24:49
//  Original author: wsaba
///////////////////////////////////////////////////////////

#include "Academica.h"

Academica::Academica()
{

}

Academica::~Academica()
{

}

void Academica::incluir()
{
        string str;
        int a;
        cout << "------------- INFORMACOES ACADEMICAS -------------" << endl;

        cout << "  Digite o FORMACAO:  ";
        cin.ignore();
        getline(cin, str);
        setFormacao(str);

        cout << "  Digite o UNIVERS.:  ";
        cin.ignore();
        getline(cin, str);
        setUniversidade(str);

        cout << "  Digite a ANO:       ";
        cin >> a;
        setAnoFormacao(a);

        cout << "--------------------------------------------------" << endl;
}

void Academica::imprimir()
{
        cout << "------------- INFORMACOES ACADEMICAS -------------" << endl;
        cout << "  FORMACAO: " << getFormacao() << endl;
        cout << "  UNIVERS.: " << getUniversidade() << endl;
        cout << "  ANO:      " << getAnoFormacao() << endl;
        cout << "--------------------------------------------------" << endl;
}

void Academica::atualizar()
{
    incluir();
}

void Academica::setFormacao(string var)
{
    formacaoAcademica = var;
}

void Academica::setUniversidade(string var)
{
    universidade = var;
}

void Academica::setAnoFormacao(int var)
{
    anoFormacao = var;
}

string Academica::getFormacao()
{
	return  formacaoAcademica;
}

string Academica::getUniversidade()
{
	return  universidade;
}

int Academica::getAnoFormacao()
{
	return anoFormacao;
}
///////////////////////////////////////////////////////////
//  Profissional.cpp
//  Implementation of the Class Profissional
//  Created on:      17-abr-2018 12:24:57
//  Original author: wsaba
///////////////////////////////////////////////////////////

#include "Profissional.h"

Profissional::Profissional()
{

}

Profissional::~Profissional()
{

}

void Profissional::incluir()
{
    string str;
    cout << "----------- INFORMACOES PROFISSIONAIS ------------" << endl;

    cout << "  Digite o EMPRESA:   ";
    cin.ignore();
    getline(cin, str);
    setNomeEmpresa(str);

    cout << "  Digite o ADMISSAO:  ";
    cin.ignore();
    getline(cin, str);
    setDataAdmissao(str);

    cout << "  Digite a CARGO:     ";
    cin.ignore();
    getline(cin, str);
    setCargo(str);

    cout << "--------------------------------------------------" << endl;
}

void Profissional::imprimir()
{
    cout << "----------- INFORMACOES PROFISSIONAIS ------------" << endl;
    cout << "  EMPRESA:  " << getNomeEmpresa() << endl;
    cout << "  ADMISSAO: " << getDataAdmissao() << endl;
    cout << "  CARGO:    " << getCargo() << endl;
    cout << "--------------------------------------------------" << endl;
}

void Profissional::atualizar()
{
    incluir();
}

void Profissional::setNomeEmpresa(string var)
{
    nomeEmpresa = var;
}

void Profissional::setDataAdmissao(string var)
{
    //VALIDAR aaaa/mm/dd
    dataAdmissao = var;
}

void Profissional::setCargo(string var)
{
    cargo = var;
}

string Profissional::getNomeEmpresa()
{
	return  nomeEmpresa;
}

string Profissional::getDataAdmissao()
{

	return  dataAdmissao;
}


string Profissional::getCargo()
{
	return  cargo;
}
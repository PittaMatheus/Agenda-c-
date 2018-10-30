///////////////////////////////////////////////////////////
//  Pessoal.cpp
//  Implementation of the Class Pessoal
//  Created on:      17-abr-2018 12:24:40
//  Original author: wsaba
///////////////////////////////////////////////////////////

#include "Pessoal.h"


Pessoal::Pessoal()
{
}

Pessoal::~Pessoal()
{
}

void Pessoal::incluir()
{
        string str;
        float f;
        cout << "------------- INFORMACOES PESSOAIS----------------" << endl;

        cout << "  Digite o NOME:    ";
        cin.ignore();
        getline(cin, str);
        setNome(str);

        cout << "  Digite o ANIVERS: ";
        cin.ignore();
        getline(cin, str);
        setAniversario(str);

        cout << "  Digite a ALTURA:  ";
        cin >> f;
        setAltura(f);

        cout << "  Digite o END.:    ";
        cin.ignore();
        getline(cin, str);
        setEndereco(str);

        cout << "--------------------------------------------------" << endl;

}

void Pessoal::imprimir()
{
        cout << "------------- INFORMACOES PESSOAIS----------------" << endl;
        cout << "  NOME:    " << getNome() << endl;
        cout << "  ANIVERS: " << getAniversario() << endl;
        cout << "  IDADE:   " << getIdade() << endl;
        cout << "  ALTURA:  " << getAltura() << endl;
        cout << "  END.:    " << getEndereco() << endl;
        cout << "--------------------------------------------------" << endl;
}

void Pessoal::atualizar()
{
        incluir();
}

void Pessoal::setAltura(float var)
{
    altura = var;
}

void Pessoal::setNome(string var)
{
    nome = var;
}

void Pessoal::setAniversario(string var)
{
    //VALIDAR MASCARA
    dataAniversario = var;
}

void Pessoal::setEndereco(string var)
{
    endereco = var;
}

int Pessoal::getIdade()
{
    //CALCULAR IDADE
    return 25;
}

float Pessoal::getAltura()
{
	return altura;
}

string Pessoal::getNome()
{
	return  nome;
}

string Pessoal::getAniversario()
{
	return  dataAniversario;
}

string Pessoal::getEndereco()
{
	return  endereco;
}
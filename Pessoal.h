///////////////////////////////////////////////////////////
//  Pessoal.h
//  Implementation of the Class Pessoal
//  Created on:      17-abr-2018 12:24:40
//  Original author: wsaba
///////////////////////////////////////////////////////////

#if !defined(__PESSOAL_H__)
#define __PESSOAL_H__
#include <iostream>
#include <string>
using namespace std;

class Pessoal
{

public:
	Pessoal();
	virtual ~Pessoal();

	void incluir();
	void imprimir();
	void atualizar();
	void setAltura(float var);
	void setNome(string var);
	void setAniversario(string var);
	void setEndereco(string var);
	int getIdade();
	float getAltura();
	string getNome();
	string getAniversario();
	string getEndereco();

private:
	int idade;
	float altura;
	string nome;
	string dataAniversario;
	string endereco;

};
#endif // !defined(__PESSOAL_H__)
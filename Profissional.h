///////////////////////////////////////////////////////////
//  Profissional.h
//  Implementation of the Class Profissional
//  Created on:      17-abr-2018 12:24:57
//  Original author: wsaba
///////////////////////////////////////////////////////////

#if !defined(__PROFISSIONAL_H__)
#define __PROFISSIONAL_H__
#include <iostream>
#include <string>
using namespace std;

class Profissional
{

public:
	Profissional();
	virtual ~Profissional();

	void incluir();
	void imprimir();
	void atualizar();
	void setNomeEmpresa(string var);
	void setDataAdmissao(string var);
	void setCargo(string var);
	string getNomeEmpresa();
	string getDataAdmissao();
	string getCargo();

private:
	string nomeEmpresa;
	string dataAdmissao;
	string cargo;

};
#endif // !defined(__PROFISSIONAL_H__)
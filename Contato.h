///////////////////////////////////////////////////////////
//  Contato.h
//  Implementation of the Class Contato
//  Created on:      17-abr-2018 12:24:25
//  Original author: wsaba
///////////////////////////////////////////////////////////

#if !defined(__CONTATO_H__)
#define __CONTATO_H__

#include "Academica.h"
#include "Profissional.h"
#include "Pessoal.h"
#include <string>
#include <vector>
using namespace std;

class Contato
{

public:
	Contato();
	virtual ~Contato();
	vector<Academica> academicas;
	Profissional profissional;
	Pessoal pessoal;

	void incluir();
	bool verificarNome(string nome);
	void atualizar();
	void imprimir();

};
#endif // !defined(__CONTATO_H__)
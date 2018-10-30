///////////////////////////////////////////////////////////
//  Agenda.h
//  Implementation of the Class Agenda
//  Created on:      17-abr-2018 12:16:08
//  Original author: wsaba
///////////////////////////////////////////////////////////

#if !defined(__AGENDA_H__)
#define __AGENDA_H__

#include "Contato.h"
#include <string>
#include <vector>
using namespace std;

class Agenda
{
private:
	Contato **m_Contato;
	vector<Contato> contatos;
    int quantidadeMaxima;

public:
	Agenda();
	virtual ~Agenda();

	void incluir();
	void pesquisar(string nome);
	void remover(string nome);
	void atualizar(string nome);
	void exibirMensagem();

};
#endif // !defined(__AGENDA_H__)
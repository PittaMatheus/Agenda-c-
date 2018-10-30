#if !defined(__ACADEMICA_H__)
#define __ACADEMICA_H__
#include <string>
#include <iostream>
using namespace std;

class Academica
{
public:
	Academica();
	virtual ~Academica();

	void incluir();
	void imprimir();
	void atualizar();
	void setFormacao(string var);
	void setUniversidade(string var);
	void setAnoFormacao(int var);
	string getFormacao();
	string getUniversidade();
	int getAnoFormacao();

private:
	string formacaoAcademica;
	string universidade;
	int anoFormacao;

};
#endif // !defined(__ACADEMICA_H__)
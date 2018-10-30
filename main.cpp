#include <cstdlib>
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Agenda.h"
using namespace std;
int main()
{
    int escolha;
    Agenda a;
    while (1)
    {
        cout << "-------------- AGENDA CORPORATIVA ----------------" << endl;
        cout << "  ******** Pressione a opcao desejada: *********  " << endl;
        cout << "  1 - Adicionar Contato --------------------------" << endl;
        cout << "  2 - Consultar Contato --------------------------" << endl;
        cout << "  3 - Alterar Contato ----------------------------" << endl;
        cout << "  4 - Excluir Contato ----------------------------" << endl;
        cout << "  0 - Sair da agenda  ----------------------------" << endl;
        cout << "--------------------------------------------------" << endl;
        cin >> escolha;

        if(escolha == 0)
        {
            cout << "Saindo da Agenda...";
            // system("pause");
            system("read -p 'Press Enter to continue...' var");
            system("clear");
            break;
        }

        switch (escolha)
		{
		case 1:
		    {
                a.incluir();
		        break;
		    }
		case 2:
        case 3:
        case 4:
		    {
		        string nome;
		        cout << "Digite o nome do contato desejado: "<< endl;
                cin.ignore();
		        getline(cin, nome);
		        if(escolha == 2)
                    a.pesquisar(nome);
                else if (escolha == 3)
                    a.atualizar(nome);
                else
                    a.remover(nome);

		        break;
		    }
		default:
		    {
		        cout << endl<< "Digite uma opcao valida!";
		        break;
		    }
		}
		cout<<endl;;
        //system("pause");
        system("read -p 'Press Enter to continue...' var");
        system("clear");
    }
    return 0;
}
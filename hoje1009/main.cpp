#include <iostream>
#include "personPF.hpp"
#include "personPJ.hpp"

using namespace std;

#define fdebug 1 //1-versão debug (produção)   /    0-release (entregável)


int main()
{
    	char ch;
	string pesquisar_nome;
	vector<PersonPF> pflist;
	vector<PersonPJ> pjlist;
	string *Ppflist;
    for(;;)
    {
        if(fdebug) cout << "Insira uma opcao: " << endl;
        if(fdebug) cout << "1.Inserir PF" << endl;
        if(fdebug) cout << "2.Inserir PJ" << endl;
        if(fdebug) cout << "3.Remover Pessoa (PF/PJ)" << endl;
        if(fdebug) cout << "4.Print" << endl;
        if(fdebug) cout << "7.Sair do Sistema" << endl;
        cout << "---------------------------" << endl;
        cin >> ch;
        //fflush
        cin.ignore();
        if(ch == '1') 
        {
            	PersonPF pf;
            	if(fdebug) cout << "Insira o nome da PF: " << endl;
            	getline(cin, pf.nome);

            	if(fdebug) cout << "Insira o CNPJ: " << endl;
            	getline(cin, pf.cnpj);                

		if(fdebug) cout << "Insira endereco: " << endl;
		getline(cin, pf.endereco);

		if(fdebug) cout << "Insira o email: " << endl;
		getline(cin, pf.email);

		if(fdebug) cout << "Insira a Inscricao estadual: " << endl;
		getline(cin, pf.inscricao_estadual);

		if(fdebug) cout << "Insira a razao social: " << endl;
		getline(cin, pf.razao_social);
            	pflist.push_back(pf);
        };

        if(ch == '2')
	{
		PersonPJ pj;
		if(fdebug) cout << "Insira o nome da PJ: " << endl;
		getline(cin, pj.nome);
		
		if(fdebug) cout << "Insira o email: " << endl;
		getline(cin, pj.email);

		if(fdebug) cout << "Insira o endereco: " << endl;
		getline(cin, pj.endereco);

		if(fdebug) cout << "Insira a Data de nacimento: " << endl;
		getline(cin, pj.data_de_nacimento);

		if(fdebug) cout << "Insira o Estado Civil: " << endl;
		getline(cin, pj.estado_civil);

		if(fdebug) cout << "Insira o CPF: " << endl;
		getline(cin, pj.cpf);
		pjlist.push_back(pj);
	}

	if(ch == '3')
	{
		
		if(fdebug) cout << "Insira o nome do individuo para ser removido: " << endl;
		cin >> pesquisar_nome;
            	for(size_t i=0; i< pflist.size(); i++)
            	{
			if(pflist.at(i).nome == pesquisar_nome){
                		cout << "Pessoa nome : " << pflist.at(i).nome << " -> ";
                		cout << "CNPJ : " << pflist.at(i).cnpj << endl;
		
                		cout << "Pessoa nome : " << pjlist.at(i).nome << " -> ";
	       			cout << "Removendo" << endl;
			}
		}
	}
	if(ch == '4') {/*
    		cout << endl;
    		for(size_t i=0; i< list.size(); i++)
    		{
        		size_t pos = list.at(i).find(query);
        		if(pos < list.at(i).length())
        		{
            			cout << list.at(i) << endl;
        		}
    		}*/
		getline(cin, pesquisar_nome);
            	for(size_t i=0; i < pflist.size(); i++)
		{
			size_t pos = list.at(i).find(pesquisar_nome);
			if(pos < pflist.at(i).length()){
				cout << pflist.at(i).nome << endl;
			}
			else
				cout << "Nome não existe" << endl;
            	}
        }
        
        if(ch == '7') break;
        cout << "---------------------------" << endl << endl;
        //system("clear");
    }
    
    return 0;   
}

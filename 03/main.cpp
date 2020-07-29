#include "dict.hpp"

int main(int argc, const char* argv[])
{    
    if(argc != 2)
    {
        cout << "ERROR: input should be <exec> <dictionary file>" << endl;
        return 1;
    }
    string vetor_dict;
    Dict dict1;
    dict1.LoadDictionary(argv[1]);
    
    cout << dict1.GetSize() << endl;
    cout << "Path: " << dict1.GetPath() << endl;
    
    int escolha;
    cout << "Mostra o dicionario    (1)" << endl;
    cout << "Inceriri no dicionario (2)" << endl;   
    cout << "Salvar o dicionario    (3)" << endl;
    cout << "Remove do dicionario   (4)" << endl;


    cin >> escolha;
    switch (escolha)
    {
    case 1:
        dict1.LoadDictionary(argv[1]);
        break;
    case 2:
        getline(vetor_dict);
        dict1.insereInicio(argv[1], vetor_dict);
        break;
    case 3:
        break;
    case 4:
        break;
    default:
        break;
    }

    return 0;
}


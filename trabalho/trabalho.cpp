#include "trabalho_bliberi.hpp"

int main(int argc, const char* argv[])
{

    vector<string> data = loadDict(argv[1]);//é cria uma vetor de string que recebera o valor da uma função loadDict
    if(data.size()==0)//o vetor e compara com 0 para saber se tem algum valor dentro do mesmo, se der 0 o mostra a mensage e retorna 1
    {
        clog << "ERROR: dictionary NOT loaded." << endl;
        return 1;
    }
//    cout << "My dictionary has " << data.size() << endl;//mostra o tamanho do arquivo
    for(size_t i=0; i<data.size(); i++)//os dados e apresentados
    {
        cout << "word #" << i+1 << " " << data.at(i) << endl;
    }
    return 0;
}
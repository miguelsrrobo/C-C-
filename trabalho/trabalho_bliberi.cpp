#include "trabalho_bliberi.hpp"

vector<string> loadDict(const string &filename)
{
    vector<string> data;
    //cout << "Loading file " << filename << endl;
    ifstream DataFile;
    DataFile.open(filename,ios::in);// o arquivo e aberto e jogado na variavel DataFile 

    string temporaria;//uma variavel auxiliar e criada, para depois reseber os dados do DataFile
    if(DataFile.is_open())
    {
        while(getline(DataFile, temporaria))//passa os dados do DataFile para a variavel temporaira temporaria
        {
            data.push_back(temporaria);
        }
        DataFile.close();//apos a ser concluido o prosesso o arquivo e fechado 
        
        data.erase(data.begin()+0);
        cout << data.at(0) << endl;
    }
    else
    {
        clog << "Error, file not loaded" << endl;
        return data;
    }    
    return data;
}

int lineraDict()
{
    
}
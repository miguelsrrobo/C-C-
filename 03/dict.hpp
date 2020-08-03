#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

using namespace std;

class Dict
{
private:
    string elemento;
    Dict* proximo;
    Dict* antes;
    vector< string > m_data;
    string m_dictpath;

public:
    //this function loads a dictionary
    bool LoadDictionary(const string &filename);
    void insereInicio(const string *dictionario, string* obg);


    unsigned int GetSize() const { return m_data.size(); };
    string GetPath() const { return m_dictpath; };

    void Search(char *dict);

    //this function implements a linear search
    //bool linearSearch(const string &query, vector<string> &dict, unsigned int &index, unsigned int &nbopperations);
    //bool binarySearch(const string &query, vector<string> &dict, //unsigned int &index, unsigned int &nbopperations);

};

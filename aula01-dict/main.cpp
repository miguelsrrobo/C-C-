#include "dict.hpp"

int main(int argc, char* argv[])
{
    //check system inputs
    if(argc != 2)
    {
        cout << "Input Error, should be <exec> <inputfile.txt> " << endl;
        return 1;
    }

    vector<string> list = LoadDictionary(argv[1]);   //************
    if(list.size() == 0)   //***********
    {
        cout << "Error, file not found" << endl;
        return 2;
    }

    /*display dictionary content
    //for(unsigned int i=0; i< list.size(); i++)
    for(size_t i=0; i< list.size(); i++)
    {
        cout << "Word #" << i+1 << " : " << list.at(i) << endl;
    }
*/
    //searching a word in our dictionary
    bool success = false;
    string query = "pizza";
    size_t index = searchWord(list, query, success);
    if(success)
        cout << "Index for " << query << " is " << index << endl;
    else
        cout << "There is no " << query << " in our dictionary " << endl;

    string que = "yug";
    size_t index2 = searchList(list, que, success);
    if(success)
        cout << "Index for " << que << " is " << " True positione:::::::::::::::: " << index2 << endl;
    else
        cout << "There is no " << que << " in our dictionary " << endl;

    //how many pizza's do we have as substring
    //here:  retornar de uma função que procura todas as ocorrências de substrings,
    // o tipo vetor de pares (vector< pair< size_t, string> >)
    return 0;
}


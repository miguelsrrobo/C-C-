#include "dict.hpp"

int main(int argc, char* argv[])
{
    //check system inputs
    string dictistr;
    cin >> dictistr;
    vector<string> list = LoadDictionary(dictistr.c_str());   //************
    if(list.size() == 0)   //***********
    {
        cout << "Error, file not found" << endl;
        return 2;
    }

    size_t numberfWords;
    cin >> numberfWords;
    //searching a word in our dictionary
    bool success = false;

    string que = argv[2];
    size_t index2 = searchList(list, que, success);
    if(success)
        cout << "Index for " << que << " is " << " True positione:::::::::::::::: " << index2 << endl;
    else
        cout << "There is no " << que << " in our dictionary " << endl;

    //how many world do we have as substring ?
    return 0;
}


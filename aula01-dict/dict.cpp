#include "dict.hpp"

//implementation
vector<string> LoadDictionary(const char* filename)  //*******
{
    cout << "Trying to read " << filename << endl;
    
    vector<string> list; //*******
    
    ifstream file;
    file.open(filename);
    if(file.is_open())
    {
        cout << "...done" << endl;
        
        string tmp;
        while(getline(file, tmp))
        {
            //cout << "Read : " << tmp << endl;     
            list.push_back(tmp); //*******
        }
        list.erase(list.begin()+0);     
    }
    
    return list; //*******
}

size_t searchWord(vector<string>& list, string query, bool& success)
{
    for(size_t i=0; i<list.size(); i++)
    {
        if(list.at(i) == query)
        {
            success=true;
            return i;
        }
    }
    return 0;
}

size_t searchList(vector<string>& list, string query, bool& success)
{
    //vector<string> tmp;
    //tmp = find(list.size(), list.size()+4,query);
    for(size_t i =0;i < list.size();i++)
    {
        //size_t tmp = list.find(query);
        if(strstr(list.at(i).c_str(),query.c_str()))
        {
            cout << list.at(i) << endl;
        }
    }
    return 0;
}
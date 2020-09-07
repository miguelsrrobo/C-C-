#include "dict.hpp"

int main(int argc, char* argv[])
{
    //check system inputs
    string dictstr;
    cin >> dictstr;
    vector<string> list = LoadDictionary(dictstr.c_str());
    if(list.size() == 0)
    {
        cout << "Error, file not found" << endl;
        return 2;
    }
   
    size_t numberofWords;
    cin >> numberofWords;
    for(size_t i=0; i<numberofWords; i++)
    {
        //searching a word in our dictionary
        bool success = false;
        string query;
        cin >> query;
        
        //how many words do we have as substrings ?
        size_t counter=0;        
        for(size_t i=0; i< list.size(); i++)
        {
            size_t pos = list.at(i).find(query);
            if(pos < list.at(i).length())
            {
                counter++;
                cout << list.at(i) << endl;
            }
        }
        cout << "Total of " << query << "-" << counter << endl;
        cout << endl;
    }
    
    return 0;
}

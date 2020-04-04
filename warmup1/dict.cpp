#include "dict.hpp"

vector<string> loadDictionary(const string &filename)
{
    vector<string> dict;
    cout << "Loading file " << filename << endl;
    
    //ifstream and ofstream
    ifstream file(filename);
    if(!file.is_open())
    {
        cout << "Error, file not loaded" << endl;
        return dict;
    }
    
    string tmp;
    while(getline(file, tmp))
    {
        dict.push_back(tmp);
    }
    file.close();
    
    dict.erase(dict.begin()+0);
    cout << dict.at(0) << endl;
    
    return dict;
}

bool linearSearch(const string &query, vector<string> &dict, unsigned int &index, unsigned int &nbopperations)
{
    nbopperations=0;
    for(unsigned int i=0; i<dict.size(); i++)
    {
        nbopperations++;
        if(query == dict.at(i))
        {
            index = i;
            return true;
        }
    }    
    return false;
}

bool binarySearch(const string &query, vector<string> &dict, unsigned int &index, unsigned int &nbopperations)
{
        nbopperations=0;
        unsigned int index1 = 0;
        unsigned int index2 = dict.size()-1;
        for(;;)
        {
            unsigned int middle = (index2-index1) / 2;
            nbopperations++;
            if(query == dict.at(index1+middle)) 
            {
                index = index1+middle;
                return true;
            }            
            else
            {
                //this one is to break when there is no query in our dictionary
                if(index2==index1) break;
                
                bool lowerthan = query < dict.at(index1+middle);
                if(lowerthan)
                {
                    index2 = index1+middle-1;
                }
                else // >
                {
                    index1 = index1+middle+1;
                }
            }               
        }
        
        return false;
}

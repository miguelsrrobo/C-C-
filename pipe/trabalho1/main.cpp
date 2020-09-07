#include "dict.hpp"

int main(int argc, char* argv[])
{
    //cout << "Entre with dictionary 1" << endl;
    //check system inputs
    string dictstr1;
    cin >> dictstr1;
    vector<string> list1 = LoadDictionary(dictstr1.c_str());
    if(list1.size() == 0)
    {
        cout << "Error, file not found" << endl;
        return 2;
    }

    //cout << "Entre with dictionary 2" << endl;
    string dictstr2;
    cin >> dictstr2;
    vector<string> list2 = LoadDictionary(dictstr2.c_str());
    if(list2.size() == 0)
    {
        cout << "Error, file not found" << endl;
        return 2;
    }
   
    //concatena
    for(size_t i = 0;i < list2.size();i++){
        list1.push_back(list2.at(i));
    }
    list2.clear();
    
    //cout << "Entre a min num of character to remove" << endl;
    unsigned int wordSize = 0;
    cin >> wordSize;

    size_t numberDuplicatesExcluded = 0;
    size_t Filtered_Words = 0;

    //Eliminar duplicatas
    vector<string> stringDeletas;
    sort (list1.begin(), list1.end());
    size_t i = 0;
    while(i < list1.size()-1)
    {
        if((list1.at(i).length() >= wordSize) && (list1.at(i) == list1.at(i+1)))
        {
            stringDeletas.push_back(list1.at(i));
            list1.erase(list1.begin()+i);
            numberDuplicatesExcluded++;
        }
        else
            i++;        
    }
    Filtered_Words = list1.size();
    for(size_t i = 0;i < stringDeletas.size();i++)
    {
        cout << stringDeletas.at(i) << "==" << stringDeletas.at(i) << endl;
    }
    cout << "Duplicates:_" << numberDuplicatesExcluded << "\n" << "Filtered_Words:_" << Filtered_Words << endl;
/**/
    return 0;
}

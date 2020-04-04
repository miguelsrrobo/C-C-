#include "dict.hpp"

int main(int argc, const char* argv[])
{    
    if(argc != 3)
    {
        cout << "ERROR: input should be <exec> <dictionary file> <word2search>" << endl;
        return 1;
    }
    
    vector<string> dict = loadDictionary(argv[1]);
    if(dict.size() == 0)
    {
        cout << "ERROR: dictionary NOT loaded by some Ihavenoidea reason" << endl;
        return 1;
    }
    
    cout << "My dictionary has " << dict.size() << endl;
    for(unsigned int i=0; i<dict.size(); i++)
    {
        cout << "word #" << i+1 << " " << dict.at(i) << endl;
    }
    
    unsigned int index = 0; unsigned int opperations=0;
    string query = argv[2];
    bool status = binarySearch(query, dict, index, opperations);
    if(status)
        cout << "word " << query << " was located at index " << index << " costing " << opperations << " opperations" << endl;
    else
        cout << "word " << query << " not found " << endl;

    
    
    return 0;
}


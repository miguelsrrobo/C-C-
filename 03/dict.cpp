#include "dict.hpp"

bool Dict::LoadDictionary(const string &filename)
{
    m_dictpath = "";
    m_data.clear();
    cout << "Loading file " << filename << endl;
    
    //ifstream and ofstream
    ifstream file(filename);
    if(!file.is_open())
    {
        cout << "Error, file not loaded" << endl;
        return false;
    }
    
    m_dictpath = filename;
    
    string tmp;
    while(getline(file, tmp))
    {
        //this->m_data.push_back(tmp);
        m_data.push_back(tmp);
    }
    file.close();
    
    m_data.erase(m_data.begin()+0);
    
    return true;
}

void insereInicio(const string *LISTA, char* x)
{
	char *novo=(char *) malloc(sizeof(LISTA));
	if(!novo){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}
	
	string *oldHead = LISTA->prox;
	string *oldTail = LISTA->ant;
	novo->num = x;
	LISTA->prox = novo;
	novo->prox = oldHead;
	novo->ant = oldTail;
} 

/*
unsigned int Dict::GetSize()
{
    return m_data.size();
}
*/

/*
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
*/

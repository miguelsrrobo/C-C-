#include <iostream>
#include <stdlib.h>
#include <algorithm> 
#include <fstream>
#include <vector>

using namespace std; 

//prototypes
vector<string> LoadDictionary(const char* filename);
size_t searchWord(vector<string>& list, string query, bool& success);

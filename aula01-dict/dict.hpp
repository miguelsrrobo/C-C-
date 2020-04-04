#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string.h>

using namespace std; 

//prototypes
vector<string> LoadDictionary(const char* filename);
size_t searchWord(vector<string>& list, string query, bool& success);
size_t searchList(vector<string>& list, string query, bool& success);

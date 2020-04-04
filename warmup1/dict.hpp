#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

using namespace std;

//this function loads a dictionary
vector<string> loadDictionary(const string &filename);

//this function implements a linear search
bool linearSearch(const string &query, vector<string> &dict, unsigned int &index, unsigned int &nbopperations);

bool binarySearch(const string &query, vector<string> &dict, unsigned int &index, unsigned int &nbopperations);


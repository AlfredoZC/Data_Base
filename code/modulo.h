#pragma once

#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "modulo.h"

using namespace std;

struct datos{
    
    string command;
    string user_date;
    string user_event; 
};

vector<datos>ingresar_datos();

void si_add(const vector<datos>& persona, map<string, vector<string>>& event, long long unsigned int i);
void si_del(const vector<datos>& persona, map<string, vector<string>>& event, long long unsigned int i);
void si_find(const vector<datos>& persona, map<string, vector<string>>& event, long long unsigned int i);
void si_print(const vector<datos>& persona, map<string, vector<string>>& event, long long unsigned int i);

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <map>   
#include <vector>
#include "modulo.h"

using namespace std;

string date( string str);

struct datos {

    string command;
    string user_event; 
    string user_date; 

};

vector<datos>ingresar_datos ();

void si_add(const vector<datos>& persona, map<string, vector<string>>& event, long long unsigned int i );
void si_del(const vector<datos>& persona, map<string, vector<string>>& event, long long unsigned int i);
void si_find(const vector<datos>& persona, map<string, vector<string>>& event, long long unsigned int i );
void si_print(const vector<datos>& persona, map<string, vector<string>>& event, long long unsigned int i);

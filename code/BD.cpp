#include <iostream>
#include <string>
#include <algorithm>
#include <map>   
#include <vector>
#include "modulo.h"

using namespace std;


int main (){

    cout<<"Para salir ingrese el comando (SALIDA)"<<endl;

    vector<datos>persona = ingresar_datos();

    map<string, vector<string>> event ; 

    cout<<endl; 

    long long unsigned int i = 0 ;

    for( i ; i < persona.size(); ++i){

        if(persona[i].command =="Add"){

            si_add(persona, event,  i);

        }

        else if(persona[i].command == "Del"){
            
            si_del(persona, event, i);


        } else if (persona[i].command == "Find"){
            
            si_find(persona, event, i);


        }else if(persona[i].command == "Print"){

            si_print(persona, event, i);

        }


    }

    return 0; 


}



    /*while(cin>>command){

        if(command == "Print" ){
           
            break;

        }else{
            
            cin>>user_date;
            cin.ignore();
            getline(cin, user_event);

            break;
    
        }


    }
    */
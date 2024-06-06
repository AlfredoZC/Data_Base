#include <iostream>
#include <string>
#include <algorithm>
#include <map>   
#include <vector>

using namespace std;

string date( string str);

struct datos {

    string command;
    string user_event; 
    string user_date; 

};


int main (){

    bool salida = true;

    vector<datos>persona;

    map<string, vector<string>> event ; 

    cout<<"Para salir ingrese el comando (SALIDA)"<<endl;

    while(salida){

        datos entrada;

        cin>>entrada.command;

            if(entrada.command == "Print"){
                persona.push_back(entrada);
                continue;
            }

            else if(entrada.command == "SALIDA"){
                salida = false;
            }
            else if(entrada.command == ""){
                continue;
            }
            else if(entrada.command == "Add"){

                cin>>entrada.user_date;
                cin.ignore();
                getline(cin, entrada.user_event);
                string correct_date = date(entrada.user_date); //Obtenemos la fecha modificada.
                if(correct_date == "Invalid month value"){
                    cout<<"Invalid month value / try again"<<endl;
                    continue;
                }else if(correct_date == "Invalid day value"){
                    cout<<"Invalid day value / try again"<<endl;
                    continue;
                }
                else {

                entrada.user_date = correct_date;
                persona.push_back(entrada); 
                }    

            }else if (entrada.command == "Del") {

                cin >> entrada.user_date;
                cin.ignore();
                getline(cin, entrada.user_event);
                string correct_date = date(entrada.user_date); //Obtenemos la fecha modificada.

                if(correct_date == "Invalid month value"){
                    cout<<"Invalid month value / try again"<<endl;
                    continue;
                }else if(correct_date == "Invalid day value"){
                    cout<<"Invalid day value / try again"<<endl;
                    continue;
                }
                else {

                    if(entrada.user_event == ""){

                        entrada.user_date = correct_date;
                        persona.push_back(entrada);
                        continue;
                    }
                    else{
                        entrada.user_date = correct_date;
                        persona.push_back(entrada);
                    }                   

                    
                }   
                                     
            }else if( entrada.command == "Find"){
                

                cin>>entrada.user_date;

                string correct_date = date(entrada.user_date); //Obtenemos la fecha modificada.
                if(correct_date == "Invalid month value"){
                    cout<<"Invalid month value / try again"<<endl;
                    continue;
                }else if(correct_date == "Invalid day value"){
                    cout<<"Invalid day value / try again"<<endl;
                    continue;
                }
                else {

                entrada.user_date = correct_date;
                persona.push_back(entrada); 
                continue;  
                }                   
                       
            }
            
            else{

                cout<<"Unknown command... Try again"<<endl;
                continue;
            }
        


        }

    cout<<endl; 

    for(long long unsigned int i = 0; i < persona.size(); ++i){

        if(persona[i].command =="Add"){
            string date = persona[i].user_date;
            string event_exist = persona[i].user_event;
            auto it = find(event[date].begin(), event[date].end(), event_exist);
            if(it == event[date].end()){

                event[date].push_back(event_exist);
            }
        }

        if(persona[i].command == "Del"){

            if( !persona[i].user_date.empty() && persona[i].user_event.empty()){

                string key = persona[i].user_date;

                if(event.find(key) != event.end()){

                int range_of_elements = event[key].size();
                event.erase(key);
                cout<<"Deleted "<<range_of_elements<<" Events"<<endl;

                }

                else{
                    cout<<"Event not found"<<endl;
                }
                
            }else if(!persona[i].user_date.empty()&& !persona[i].user_event.empty()){

                string key = persona[i].user_date;
                string wanted_to_eliminate = persona[i].user_event;

                if(event.find(key) != event.end()){

                    vector<string>& eventos = event[key];

                    auto it = find(eventos.begin(), eventos.end(), wanted_to_eliminate);

                    if(it != eventos.end()){

                        eventos.erase(it);
                        cout<<"Deleted succesfully"<<endl;

                    }else{
                        cout<<"Event not found"<<endl; 
                    }


                }else{
                    cout<<"Event not found"<<endl;
                }

            }
        } else if (persona[i].command == "Find"){
                string key = persona[i].user_date;

                if(event.find(key) != event.end()){
                    
                    for(const auto& eventos: event[key]){
                        cout<<eventos<<" "; 
                    }
                    cout<<endl;

                }else{
                    cout<<"The date does not exist."<<endl;
                }

        }else if(persona[i].command == "Print"){
            for(const auto& date : event){
                cout<<date.first<<" : ";
                for(const auto& evento : date.second){
                    cout<<evento<<" ";
                }
                cout<<endl; 
            }
        }


    }


    return 0; 


}

string date( string str){

    string anhos;
    string meses;
    string dias;
    int guion1 = 0;
    int guion2 = 0;
    int guion3 = 0;
    bool negativo1 = false;
    bool negativo2 = false;
    bool negativo3 = false; 
    

    if(str[0] == '-' ){
        negativo1 = true;
    }

    if(!negativo1){
        for(int i = 0; i < str.size(); ++i){    
            if(str[i] == '-'){
                guion1 = i; 
                break;
            }else{
                anhos += str[i];
            }
        }
    }else{
        for(int i = 1; i < str.size(); ++i){    
            if(str[i] == '-'){
                guion1 = i; 
                break;
            }else{
                anhos += str[i];
            }
        }
    }
    

    if(str[guion1 + 1] == '-'){
        negativo2 = true;
    }

    if(!negativo2){
        for(int i = guion1 + 1; i < str.size(); ++i){    
            if(str[i] == '-'){
                guion2 = i; 
                break;
            }else{
                meses += str[i];
            }
        }        
    }else{
        for(int i = guion1 + 2; i < str.size(); ++i){    
            if(str[i] == '-'){
                guion2 = i; 
                break;
            }else{
                meses += str[i];
            }
        }        
    }
    
 
    if(str[guion2 + 1] == '-'){
        negativo3 = true;
    }
 
    if(!negativo3){
        for(int i = guion2 + 1; i < str.size(); ++i){   
            dias += str[i];
        }        
    }else{
        for(int i = guion2 + 2; i < str.size(); ++i){    
            dias += str[i];
        }        
    }
    

    if(negativo1){
        anhos = "-" + anhos;
    }
    if(negativo2){
        meses = "-" + meses;
    }
    if(negativo3){
        dias = "-" + dias; 
    }
    

    int anhos_int = stoi(anhos);
    int meses_int = stoi(meses);
    int dias_int = stoi(dias);
    
    if(anhos_int > 0){
        while(anhos.size() < 4){
            anhos = "0" + anhos;
        }
    }
    if(meses_int > 0 && meses_int <= 12){
        while(meses.size() < 2){
            meses = "0" + meses;
        }
    }else{
        return "Invalid month value";
    }
    
    if(dias_int > 0 && dias_int <= 31){
        while(dias.size() < 2){
            dias = "0" + dias;
        }
    }else{
        return "Invalid day value";
    }
    
    string result = anhos + "-" + meses + "-" + dias;

    return result;
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
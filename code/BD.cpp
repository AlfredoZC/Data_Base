#include <iostream>
#include <string>
#include <algorithm>
#include <map>   
#include <vector>

using namespace std;

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

                persona.push_back(entrada);     

            }else if (entrada.command == "Del") {

                    cin >> entrada.user_date;
                    cin.ignore();

                    getline(cin, entrada.user_event);
                    if(entrada.user_event == ""){
                        persona.push_back(entrada);
                        continue;
                    }
                    else{
                        persona.push_back(entrada);
                    }

            }else if( entrada.command == "Find"){

                cin>>entrada.user_date;
                persona.push_back(entrada);
                continue;          
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
#include "modulo.h"

string date(string str) {
  string anhos;
  string meses;
  string dias;
  int guion1 = 0;
  int guion2 = 0;
  int guion3 = 0;
  bool negativo1 = false;
  bool negativo2 = false;
  bool negativo3 = false;

  if (str[0] == '-') {
    negativo1 = true;
  }

  if (!negativo1) {
    for (int i = 0; i < str.size(); ++i) {
      if (str[i] == '-') {
        guion1 = i;
        break;
      } else {
        anhos += str[i];
      }
    }
  } else {
    for (int i = 1; i < str.size(); ++i) {
      if (str[i] == '-') {
        guion1 = i;
        break;
      } else {
        anhos += str[i];
      }
    }
  }

  if (str[guion1 + 1] == '-') {
    negativo2 = true;
  }

  if (!negativo2) {
    for (int i = guion1 + 1; i < str.size(); ++i) {
      if (str[i] == '-') {
        guion2 = i;
        break;
      } else {
        meses += str[i];
      }
    }
  } else {
    for (int i = guion1 + 2; i < str.size(); ++i) {
      if (str[i] == '-') {
        guion2 = i;
        break;
      } else {
        meses += str[i];
      }
    }
  }

  if (str[guion2 + 1] == '-') {
    negativo3 = true;
  }

  if (!negativo3) {
    for (int i = guion2 + 1; i < str.size(); ++i) {
      dias += str[i];
    }
  } else {
    for (int i = guion2 + 2; i < str.size(); ++i) {
      dias += str[i];
    }
  }

  if (negativo1) {
    anhos = "-" + anhos;
  }
  if (negativo2) {
    meses = "-" + meses;
  }
  if (negativo3) {
    dias = "-" + dias;
  }

  int anhos_int = stoi(anhos);
  int meses_int = stoi(meses);
  int dias_int = stoi(dias);

// Agregamos los 0

  if (anhos_int > 0) {
    while (anhos.size() < 4) {
      anhos = "0" + anhos;
    }
  }
  if (meses_int > 0 && meses_int <= 12) {
    while (meses.size() < 2) {
      meses = "0" + meses;
    }
    //Chequeamos y analizamos los dias. 

    if(meses_int == 1){
      if(dias_int > 0 && dias_int < 32 ){
        while(dias.size() < 2){
          dias = "0" + dias;
        }
      }else{
        cout<<"Enero no tiene mas de 31 dias o Enero no puede ser negativo"<<endl;
        return "Invalid day value";
      }

    }else if(meses_int == 2){
      if(dias_int > 0 && dias_int <= 29 ){
        while(dias.size() < 2){
          dias = "0" + dias;
        }
      }else{
        cout<<"Febrero no tiene mas de 29 dias o Febrero no puede ser negativo"<<endl;
        return "Invalid day value";
      }
    }else if(meses_int == 3){
      if(dias_int > 0 && dias_int <= 31 ){
        while(dias.size() < 2){
          dias = "0" + dias;
        }
      }else{
        cout<<"Marzo no tiene mas de 31 dias o Marzo no puede ser negativo"<<endl;
        return "Invalid day value";
      }
    }else if(meses_int == 4){
      if(dias_int > 0 && dias_int <= 30 ){
        while(dias.size() < 2){
          dias = "0" + dias;
        }
      }else{
        cout<<"Abril no tiene mas de 30 dias o Abril no puede ser negativo"<<endl;
        return "Invalid day value";
      }
    }else if(meses_int == 5){
      if(dias_int > 0 && dias_int <= 31 ){
        while(dias.size() < 2){
          dias = "0" + dias;
        }
      }else{
        cout<<"Mayo no tiene mas de 31 dias o Mayo no puede ser negativo"<<endl;
        return "Invalid day value";
      }
    }else if(meses_int == 6){
      if(dias_int > 0 && dias_int <= 30 ){
        while(dias.size() < 2){
          dias = "0" + dias;
        }
      }else{
        cout<<"Junio no tiene mas de 30 dias o Junio no puede ser negativo"<<endl;
        return "Invalid day value";
      }
    }else if(meses_int == 7){
      if(dias_int > 0 && dias_int <= 31 ){
        while(dias.size() < 2){
          dias = "0" + dias;
        }
      }else{
        cout<<"Julio no tiene mas de 31 dias o Julio no puede ser negativo"<<endl;
        return "Invalid day value";
      }
    }else if(meses_int == 8){
      if(dias_int > 0 && dias_int < 32 ){
        while(dias.size() < 2){
          dias = "0" + dias;
        }
      }else{
        cout<<"Agosto no tiene mas de 31 dias o Agosto no puede ser negativo"<<endl;
        return "Invalid day value";
      }
    }else if(meses_int == 9){
      if(dias_int > 0 && dias_int <= 30 ){
        while(dias.size() < 2){
          dias = "0" + dias;
        }
      }else{
        cout<<"Septiembre no tiene mas de 30 dias o Septiembre no puede ser negativo"<<endl;
        return "Invalid day value";
      }
    }else if(meses_int == 10){
      if(dias_int > 0 && dias_int < 32 ){
        while(dias.size() < 2){
          dias = "0" + dias;
        }
      }else{
        cout<<"Octubre no tiene mas de 31 dias o Octubre no puede ser negativo"<<endl;
        return "Invalid day value";
      }
    }else if(meses_int == 11){
      if(dias_int > 0 && dias_int <= 30 ){
        while(dias.size() < 2){
          dias = "0" + dias;
        }
      }else{
        cout<<"Noviembre no tiene mas de 30 dias o Noviembre no puede ser negativo"<<endl;
        return "Invalid day value";
      }
    }else if(meses_int == 12){
      if(dias_int > 0 && dias_int < 32 ){
        while(dias.size() < 2){
          dias = "0" + dias;
        }
      }else{
        cout<<"Diciembre no tiene mas de 31 dias o Diciembre no puede ser negativo"<<endl;
        return "Invalid day value";
      }
    }
  } else {
    return "Invalid month value";
  }


/*
  if (dias_int > 0 && dias_int <= 31) {
    while (dias.size() < 2) {
      dias = "0" + dias;
    }
  } else {
    return "Invalid day value";
  }

//termina. */

  string result = anhos + "-" + meses + "-" + dias;

  return result;
}

vector<datos>ingresar_datos(){

  bool salida = true;

  vector<datos> persona;

  while (salida) {
    datos entrada;

    cin >> entrada.command;

    if (entrada.command == "Print") {
      persona.push_back(entrada);
      continue;
    }

    else if (entrada.command == "SALIDA") {
      salida = false;
    } else if (entrada.command == "") {
      continue;
    } else if (entrada.command == "Add") {
      cin >> entrada.user_date;
      cin.ignore();
      getline(cin, entrada.user_event);
      string correct_date = date(entrada.user_date);  // Obtenemos la fecha modificada.
      if (correct_date == "Invalid month value") {
        cout << "Invalid month value / try again" << endl;
        continue;
      } else if (correct_date == "Invalid day value") {
        cout << "Invalid day value / try again" << endl;
        continue;
      } else {
        entrada.user_date = correct_date;
        persona.push_back(entrada);
      }

    } else if (entrada.command == "Del") {
      cin >> entrada.user_date;
      cin.ignore();
      getline(cin, entrada.user_event);
      string correct_date = date(entrada.user_date);  // Obtenemos la fecha modificada.

      if (correct_date == "Invalid month value") {
        cout << "Invalid month value / try again" << endl;
        continue;
      } else if (correct_date == "Invalid day value") {
        cout << "Invalid day value / try again" << endl;
        continue;
      } else {
        if (entrada.user_event == "") {
          entrada.user_date = correct_date;
          persona.push_back(entrada);
          continue;
        } else {
          entrada.user_date = correct_date;
          persona.push_back(entrada);
        }
      }

    } else if (entrada.command == "Find") {
      cin >> entrada.user_date;

      string correct_date = date(entrada.user_date);  // Obtenemos la fecha modificada.
      if (correct_date == "Invalid month value") {
        cout << "Invalid month value / try again" << endl;
        continue;
      } else if (correct_date == "Invalid day value") {
        cout << "Invalid day value / try again" << endl;
        continue;
      } else {
        entrada.user_date = correct_date;
        persona.push_back(entrada);
        continue;
      }

    }

    else {
      cout << "Unknown command... Try again" << endl;
      continue;
    }
  }
  return persona;
}


void si_add(const vector<datos>& persona, map<string, vector<string>>& event, long long unsigned i) {

  string key = persona[i].user_date;
  string add = persona[i].user_event;
  
  auto it = find(event[key].begin(), event[key].end(), add);


  if(it != event[key].end()){
    cout<<"El evento ya esta en la fecha indicada"<<endl;
    return;
  }

    for(const auto& fecha: event){
      if(fecha.first != key){
        auto its = find(fecha.second.begin(), fecha.second.end(), add);
        if(its != fecha.second.end()){
          cout<<"Ya existe ese evento en otra fecha"<<endl;
          return;
        }
      }
  }

  event[key].push_back(add);
  
}

void si_del(const vector<datos>& persona, map<string, vector<string>>& event, long long unsigned i) {
  if (!persona[i].user_date.empty() && persona[i].user_event.empty()) {
    string key = persona[i].user_date;

    if (event.find(key) != event.end()) {
      int range_of_elements = event[key].size();
      event.erase(key);
      cout << "Deleted " << range_of_elements << " Events" << endl;

    }

    else {
      cout << "Event not found" << endl;
    }

  } else if (!persona[i].user_date.empty() && !persona[i].user_event.empty()) {
    string key = persona[i].user_date;
    string wanted_to_eliminate = persona[i].user_event;

    if (event.find(key) != event.end()) {
      vector<string>& eventos = event[key];

      auto it = find(eventos.begin(), eventos.end(), wanted_to_eliminate);

      if (it != eventos.end()) {
        eventos.erase(it);
        cout << "Deleted succesfully" << endl;

      } else {
        cout << "Event not found" << endl;
      }

    } else {
      cout << "Event not found" << endl;
    }
  }
}
void si_find(const vector<datos>& persona, map<string, vector<string>>& event, long long unsigned i) {

  string key = persona[i].user_date;
  if(event.find(key) != event.end()){

    for(const auto& eventos : event[key]){
      cout<<eventos<<" ";
    }
    cout<<endl; 

  }else{
    cout<<"The date is unknown";
  }
  

}
void si_print(const vector<datos>& persona, map<string, vector<string>>& event, long long unsigned i) {
  for(const auto fecha : event){
    cout<<fecha.first<<" : ";
  for(const auto evento : fecha.second){
      cout<<evento; 
    }
    cout<<endl; 
  }

}
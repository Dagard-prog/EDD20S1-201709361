#include <iostream>
using namespace std;

string vertical ="|";
string horizontal ="_";
string numero = "1";
int m;
bool validacion = true;

void impresion_o1(int valor){
int i = 1;
int aux = 2*valor+1;
  for(i;i<=aux;i++){
    if(i % 2 == 0){
      cout<<"1";
    }
    else{
      cout<<"|";
    }
  }
};

void impresion_o2(int valor){
  int i = 1;
  int aux = 2*valor+1;
  for(i;i<=aux;i++){
    if(i % 2 == 0){
      if(i==2|i==aux-1){
        cout<<"1";
      }
      else{
        cout<<"_";
      }

    }
    else{
      cout<<"|";
    }
  }
};


int main(){
  while(validacion){
  cout<<"holi, ingrese un número por favor";
  cin >> m;
  int i = 1;
  int j = 1;

  for(i;i<=m;i++){
    if(i==1|i==m){
      impresion_o1(m);
    }
    else{
      impresion_o2(m);
    }
    std::cout << "" << '\n';
  }
  cout<<"Quieres continuar? Escribe(y) para continuar o (n) para finalizar";
  string recept;
  cin >> recept;

  if(recept=="y"){
    validacion = true;
  }
  else{
    validacion= false;
  }
  //node* temp = new node(1);
  //cout<<temp->data;
  //cout< \n";

  }
  return 0;
}

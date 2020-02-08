#include <iostream>
using namespace std;

//inicia clase moenda
class Moneda {
  string nombre_moneda;
  int cantidad_moneda;
public:
    Moneda(string nombre_ingresado, int cantidad_ingresada);
    void extraer_cantidad(int cantidad_a_restar );
    void informacion();
};

Moneda::Moneda(string nombre_ingresado, int cantidad_ingresada) {
    nombre_moneda = nombre_ingresado;
    cantidad_moneda = cantidad_ingresada;
}

void Moneda::informacion(){
  cout<< "El nombre de la moneda es " << nombre_moneda<<endl ;
  cout<< "La cantidad restante de monedas es " << cantidad_moneda<<endl ;
    return;
}
//termina clase moneda


class Usuario {
  string nombre_usuario;
  int cantidad_monedas_usuario;
public:
    Usuario(string nombre);
    void restar(int resta);
    void sumar(int suma);
    void informacion();
};

Usuario::Usuario(string nombre) {
    nombre_usuario = nombre;
}

void Usuario::sumar(int suma){
  cantidad_monedas_usuario = cantidad_monedas_usuario + suma;
  return;
}

void Usuario::restar(int resta){
  cantidad_monedas_usuario = cantidad_monedas_usuario - resta;
  return;
}

void Usuario::informacion(){
  cout<< "El nombre del usuario es " << nombre_usuario<<endl ;
  cout<< "La cantidad de monedas que tiene es de " << cantidad_monedas_usuario<<endl ;
    return;
}


int main(){
  int opcion=0;

  switch(opcion) //donde opción es la variable a comparar
  {
      case 0:
      std::cout << "Bienvenido" << '\n' <<"Por favor ingrese un número para seleccionar una de las siguientes opciones:"<<endl<<"1.Crear nuevo usuario"<<endl<<"2.Ver lista de usuarios existentes"<<endl<<"3.Crear Moneda"<<endl<<"4.Ver lista de monedas existentes"<<endl<<"5.Extraer Monedas"<<endl<<"6.Intercambiar monedas entre usuarios";
      cin >> opcion;
      break;
      case 1: //Bloque de instrucciones 1;
      break;
      case 2: //Bloque de instrucciones 2;
      break;
      case 3: //Bloque de instrucciones 3;
      break;
      case 4: //Bloque de instrucciones 1;
      break;
      case 5: //Bloque de instrucciones 2;
      break;
      case 6: //Bloque de instrucciones 3;
      break;
      //Nótese que valor 1 2 y 3 son los valores que puede tomar la opción
      //la instrucción break es necesaria, para no ejecutar todos los casos.
      default:
      std::cout << "Bienvenido" << '\n' <<"Por favor ingrese un número para seleccionar una de las siguientes opciones:"<<endl<<"1.Crear nuevo usuario"<<endl<<"2.Ver lista de usuarios existentes"<<endl<<"3.Crear Moneda"<<endl<<"4.Ver lista de monedas existentes"<<endl<<"5.Extraer Monedas"<<endl<<"6.Intercambiar monedas entre usuarios";
      cin >> opcion;
  }
  return 0;
}

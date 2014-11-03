#include <iostream>

using namespace std;
class animal{//creamos la clase animal
public:
    string nombre;//declaramos la variable nombre
    int edad;//declaramos la variable edad
    animal(){//iniciamos el constructor vacio
    }
    int getedad(){//declaramos la funcion para obtener la edad
    return edad;//devuelve el valor de la variable edad
    }
    void setedad(int edad){//declaramos la funcion para asignar el valor
    this->edad=edad;//igualamos las variables
    }

    string getnombre(){//declaramos la funcion para obtener el nombre
    return nombre;//devuelve el valor de la variable nombre
    }
    void setnombre(string nombre){//declaramos la funcion para asignar el valor
    this->nombre=nombre;//igualamos las variables
    }

};
    class Gato :public animal{//declaramos la clase gato que hereda de la clase animal
    public:
    Gato(int edad, string nombre){//iniciamos el constructor enviando como parametros las variables edad y nombre

    }
    string maullar(){//iniciamos el constructor maullar
    return "miau";//devuelve "miau"
    }
         };
    class Perro :public animal{
    Perro(int edad, string nombre){

    }
    string ladrar(){//iniciamos el constructor maullar
        public:
    return "guau";//devuelve "miau"
    }
         };
int main()
{

    return 0;
}

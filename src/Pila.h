#include "Lista.h"
template <class T>
class Pila {

private:
Lista<T> ls;
public: 

   Pila<T>() {
      ls = new Lista<T>();
 }

 void apilar(T valor) {
   ls.agregar (valor) 
    
 }

 
 T extraer()
  {
    Nodo<T> *actual = inicial;
    Nodo<T> *aununo = inicial;
    while (actual->obtenerSiguiente() != nullptr)
    {     
      actual = actual->obtenerSiguiente();			
    }
    delete actual;




   int longitud()
  {
    int i=0;  
    Nodo<T> *actual = inicial;
    while (actual != nullptr)
    {
      i = i +1;
      actual = actual->obtenerSiguiente();
    }
    return i;
  }

  bool estaVacio()
	{
		Nodo<T> *actual = inicial;
		while (actual == nullptr)
		{
			actual = actual->obtenerSiguiente();
		}
		return false;
	}  

    void reiniciar()
  {
    Nodo<T> *actual = inicial;
    Nodo<T> *aux = inicial;
    while (actual->obtenerSiguiente() != nullptr)
    {
      aux=actual;
      actual = actual->obtenerSiguiente();
			delete aux;
			return;
    }
}


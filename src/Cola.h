#include"lista.h"
template <class T>
class Cola {


public:
   Cola<T>() {
       ls= new Lista<T>();
 }

 void encolar(T valor) {
     agregar(valor)
 }

 T desencolar(){
     eliminar(valor)


 }

 int longitud() {
     return ls.longitud();
 }
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
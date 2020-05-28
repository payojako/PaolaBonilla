template <class T> // T es un parámetro que funciona como tipo.
class Nodo
{
private:
	T valor;
	Nodo<T> *siguiente; // Nodo tipo T llamada siguiente.
public:
	Nodo<T>(T v)
	{
		siguiente = nullptr;
		valor = T;
	}
​
	~Nodo<T>()
	{
		if (siguiente != nullptr)
		{
			delete siguiente;
		}
	}
​
	void establecerSiguiente(Nodo<T> *nodo) // Función establecerSiguiente. Parámetro como nodo de tipo T.
	{
		siguiente = nodo;
	}
​
	Nodo<T> *obtenerSiguiente() // Función obtenerSiguinete 
	{
		return siguiente;
	}
​
	T obtener.Valor()
	{
		return valor;
	}
};
​
template <class T>
class Lista
{
private:
	Nodo<T> *inicial; // Puntero de tipo nodo. 
	Lista<T>()
	{
		inicial = nullptr;
	}
​
	~Lista<T>()
	{
		if (inicial != nullptr)
		{
			delete inicial;
		}
	}
​
	bool buscar(T valor)
	{
		Nodo<T> *actual = inicial;
		while (actual != nullptr)
		{
			if (actual->obtenerValor() == valor)
			{
				return true;
			}
			actual = actual->obtenerSiguiente();
		}
		return false;
	}
​
	void agregar(T valor)
	{
		Nodo<T> *nuevo = new Nodo<T>(valor);
		Nodo<T> *actual = inicial;
		if (actual == nullptr)
		{
			inicial = nuevo;
		}
		else
		{
			while (actual->obtenerSiguiente() != nullptr)
			{
				actual = actual->obtenerSiguiente();
			}
			actual->establecerSiguiente(nuevo);
		}
	}
​
	void eliminar(T valor)
	{
		if (inicial == nullptr)
		{
			return;
		}
		if (inicial->obtenerValor() == valor)
		{
			Node<T> *temp = inicial;
			inicial = inicial->obtenerSiguiente();
			temp->establecerSiguiente(nullptr);
			delete temp;
			return;
		}
​
		Nodo<T> *anterior = inicial;
		Nodo<T> *actual = inicial->obtenerSiguiente();
		while (actual != nullptr)
		{
			if (actual->obtenerValor() == valor)
			{
				anterior->establecerSiguiente(actual->obtenerSiguiente());
				actual->establecerSiguiente(nullptr);
				delete actual;
				return;
			}
			else
			{
				anterior = actual;
				actual = actual->obtenerSiguiente();
			}
		}
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
};
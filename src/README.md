Título de la entrega: Laboratorio #1: Lista, Cola, Pila

Nombre y carné: Paola Bonilla Bonilla B31061

Última actualización: 27/05/2020


Resumen:
Se crea el template <class T> que permite la elaboración de machotes, es decir parámetros de tipo. Se utiliza lo vista en clase, tipo T.
En el template se definen diferentes datos de tipo T (Nodos,punteros, parámetros).
Se crea la clase Lista con diferentes funciones o métodos en private que recibirán parámetros en diferentes ocasiones. Funciones tales como (buscar, agregar, eliminar)

Se implementa las clases Pila y Cola con dos operaciones definidas (apilar, extraer, encolar y desencolar respectivamente), además de implemmentar la siguientes diferentes operaciones longitud, estaVacio y reiniciar a cada una.

Para la clase Pila, es necesario utilizar template <class T> y emplear métodos ya establecidos en la clase Lista, tales como agregar y eliminar, pues se requiere agregar y eliminar dentro del funcionamiento FILO (First In, Last Out).
Para esto se llaman de a los métodos creados en class Lista, heredando su funcionmientos y optimizando la cantidad de código necesario. 


Para la clase Cola, es necesario utilizar template <class T> y emplear métodos ya establecidos en la clase Lista, tales como agregar y eliminar, pues se requiere agregar y eliminar dentro del funcionamiento FIFO (First In, First Out).
Para esto se llaman de a los métodos creados en class Lista, heredando su funcionmientos y optimizando la cantidad de código necesario. 

La operacion longitud requiere de un while y un valor int que permita contar mientras el puntero actual no sea nullptr. De lo contrario devolverá el contador en 0.
La función estaVacio requiere de un dato bool, que mientras el puntero acutal sea igual de nullptr apuntará al siguiente, de lo contrario retornará false. 
Por último, la función void reiniciar necesita un puntero tipo T llamado aux que apunta a inicial, al mismo tiempo que actual apunta a inicial. Se crea un while que mientras el siguiente del actual sea diferente de nullptr, aux apunta a actual y actual será  igual al siguiente de él mismo, es decir siempre irá de uno a uno borrando a aux hasta llegar al último que estará vacío.
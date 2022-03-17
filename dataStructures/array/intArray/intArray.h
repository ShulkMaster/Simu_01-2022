/// @file
#include <iostream>
#include <cstdlib>

using namespace std;
///
/// @brief Crea un array de tamaño estatico en el heap
/// Esta función retorna un raw int * y por tanto debe ser manualmente liberada
/// @param size cantidad maxima de elementos que contendra el array
/// @return Arreglo de tamaño $n elementos
///
int *create(int size);

/** @brief Inserta un elemento en una posición dada del arreglo
 * @param array arreglo donde guardar el dato
 * @param pos Posición donde guardar el arreglo
 * $pos \in [0, size[
 * @param value valor a insertar en el array
*/
void insert(int *array, int pos, int value);

/// @brief Elimina el arreglo liberando la memoria
/// @param array Arreglo a eliminar
void eliminate(const int *array);


/// @brief Busca el elemento designado en el arreglo
/// @param array Arreglo donde buscar el elemento
/// @param size Número de elementos maximo que posee el arreglo
/// @param value Valor a buscar en el arreglo
/// @return Verdadero si el elemento existe al menos una vez, Falso en caso contrario
bool contains(const int *array, int size, int value);

/// @brief Cuenta las veces que un elemento _value_ se repite en el arreglo
/// @param array Arreglo donde contar las ocurrencias de un valor
/// @param size Tamaño maximo del arreglo
/// @param value Valor cuyas ocurrencias serán contadas
/// @return La cantidad de ocurrencias del elemento dentro del array
int count(const int *array, int size, int value);

int *create_copy(int *original, int size);

int *reverse(int *array, int size);

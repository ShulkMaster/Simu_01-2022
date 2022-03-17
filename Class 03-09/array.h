#include <iostream>
#include <stdlib.h>

using namespace std;

/**
 * Holly yisus cris
 * @tparam T  asda
 * @param size asd
 * @return true
 */
template <typename T>
T* create(int size){
    T* array = (T*) malloc(sizeof(T)*size);
    return array;
}

template <typename type>
void insert(type* array, int pos, type value){
    array[pos] = value;
}

template <typename type>
void eliminate(type* array){
    free(array);
}

template<typename T>
bool search(T *array, int size, T value) {
    for (int i = 0; i < size; i++)
        if (array[i] == value) {
            return true;
        }
    return false;
}

template <typename type>
int count(type* array, int size, type value){
    int cont = 0;
    for(int i = 0; i < size; i++)
        if(array[i] == value)
            cont++;
    return cont;
}

template <typename type>
type* create_copy(type* original, int size){
    type* new_one = (type*) malloc(sizeof(type)*size);
    for(int i = 0; i < size; i++)
        new_one[i] = original[i];
    return new_one;
}

template <typename type>
type* reverse(type* array, int size){
    type* array2 = (type*) malloc(sizeof(type)*size);
    for (int i = size-1; i >= 0; i--){
        array2[ size - (i + 1) ] = array[i];
    }
    eliminate(array);
    return array2;
}

#include "intArray.h"

int main() {
    int n = 10;
    int *array = create(n);
    int *array2;
    array[3] = 145;
    insert(array, 3, 225);
    cout << array[3] << "\n";
    eliminate(array);
    cout << array[3] << "\n";
    array = create(n);
    for (int i = 0; i < n; i++)
        array[i] = i;
    cout << contains(array, n, 5) << " - " << contains(array, n, 45) << "\n";
    array[7] = 3;
    cout << count(array, n, 3) << "\n";
    array2 = create_copy(array, n);
    cout << count(array2, n, 3) << "\n";
    array = reverse(array, n);
    cout << array[0] << " - " << array[1] << " - " << array[2] << "\n";
    return 0;
}

int* create(int size) {
    int *array = new int[(sizeof(int) * size)];
    return array;
}

void insert(int* array, int pos, int value) {
    array[pos] = value;
}

void eliminate(const int* array) {
    delete[] array;
}

bool contains(const int* const array, int size, int value) {
    cout << "size: " << size << std::endl;
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            return true;
        }
    }
    return false;
}

int count(const int* const array, int size, int value) {
    int cont = 0;
    for (int i = 0; i < size; i++)
        if (array[i] == value)
            cont++;
    return cont;
}

int *create_copy(int *original, int size) {
    int *new_one = (int *) malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
        new_one[i] = original[i];
    return new_one;
}

int *reverse(int *array, int size) {
    int *array2 = (int *) malloc(sizeof(int) * size);
    for (int i = size - 1; i >= 0; i--) {
        array2[size - (i + 1)] = array[i];
    }
    eliminate(array);
    return array2;
}
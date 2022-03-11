#include "intArray.h"

int main() {
    int n = 10;
    int* array = create(n);
    int* array2;
    array[3] = 145;
    cout << array[3] << "\n";
    insert(array, 3, 225);
    cout << array[3] << "\n";
    eliminate(array);
    cout << array[3] << "\n";
    array = create(n);
    for (int i = 0; i < n; i++)
        array[i] = i;
    cout << search(array, n, 5) << " - " << search(array, n, 45) << "\n";
    array[7] = 3;
    cout << count(array, n, 3) << "\n";
    array2 = create_copy(array, n);
    cout << count(array2, n, 3) << "\n";
    array = reverse(array, n);
    cout << array[0] << " - " << array[1] << " - " << array[2] << "\n";
	return 0;
}
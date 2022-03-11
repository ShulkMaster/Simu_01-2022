#include "charArray.h"

int main() {
    int n = 10;
    char* array = create(n);
    char* array2;
    array[3] = 'K';
    cout << array[3] << "\n";
    insert(array, 3, 'L');
    cout << array[3] << "\n";
    eliminate(array);
    cout << array[3] << "\n";
    array = create(n);
    for (int i = 0; i < n; i++)
        array[i] = char(i + 65);
    cout << search(array, n, char(5 + 65)) << " - " << search(array, n, char(45 + 65)) << "\n";
    array[7] = char(3 + 65);
    cout << count(array, n, char(3 + 65)) << "\n";
    array2 = create_copy(array, n);
    cout << count(array2, n, char(3 + 65)) << "\n";
    array = reverse(array, n);
    cout << array[0] << " - " << array[1] << " - " << array[2] << "\n";
	return 0;
}

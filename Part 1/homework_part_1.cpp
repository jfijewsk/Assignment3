
#include <iostream>

using namespace std;

void initializeArray(int* array, int length)
{
}

void printArray(int* array, int length)
{
}

void insertionSort(int* array, int length)
{
}

int factorial(int num)
{
    return 0;
}

int main()
{
    int a[] = {2, 5, 7, 9, 12, 13, 15, 17, 19, 20};
    int b[] = {18, 16, 19, -5, 3, 14, 6, 0};
    int c[] = {4, 2, 5, 3, 1};

    /* testing initialize_array */
    printArray(a, sizeof(a)/sizeof(a[0])); /* print: 2, 5, 7, 9, 12, 13, 15, 17, 19, 20 */
    initializeArray(a, sizeof(a)/sizeof(a[0]));
    printArray(a, sizeof(a)/sizeof(a[0])); /* print: 5, 0, 5, 0, 5, 0, 5, 0, 5, 0 */

    /* testing insertionSort */
    printArray(b, sizeof(b)/sizeof(b[0])); /* print: 18, 16, 19, -5, 3, 14, 6, 0 */
    insertionSort (b, sizeof(b)/sizeof(b[0]));
    printArray(b, sizeof(b)/sizeof(b[0])); /* print: 19, 18, 16, 14, 6, 3, 0, -5 */

    /* testing factorial */
    cout << factorial(5) << endl; /* print: 120 */

    c[0] = factorial (c[0]);
    c[1] = factorial (c[2]);
    printArray(c, sizeof(c)/sizeof(c[0])); /* print: 24, 120, 5, 3, 1 */

    return 0;
}
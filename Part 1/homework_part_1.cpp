
#include <iostream>

/*
 * Assignment 3 Part 1
 * 
 * This program sets up an array and sorts it. It also features a 
 * recursive method to test our skills using C++.
 * 
 * Completion time: 3 hours
 *
 * @author James Fijewski
 * @version 1.0
 */

using namespace std;

/*
 * Creates an array of a size length and adds zeros to odd positions and 
 * 5's in the even positions. 
 * @parma array The array pointer to pass in
 * @parma length The length of the array being passed in
 */
void initializeArray(int* array, int length) {
        for (int i = 0; i < length; i++) {

        // If it is an even position add a 5
        if (i % 2 == 0) {
            *(array + i) = 5;
        }            // Otherwise add a zero
        else {
            *(array + i) = 0;
        }
    }
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
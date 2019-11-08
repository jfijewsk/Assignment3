
#include <iostream>

/*
 * Assignment 3 Part 1
 * 
 * This program sets up an array and sorts it. It also features a 
 * recursive method to test our skills using C++.
 * 
 * Completion time: 2 hours
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

/*
 * Loops through the array and prints each int out to console.
 * @parma array The array pointer to pass in
 * @parma length The length of the array being passed in
 */
void printArray(int* array, int length) {
        for (int i = 0; i < length; i++) {
        cout << *(array + i);
        cout << (", ");
    }

    // Add a new line after printing to make it look better
    cout << ("\n");
}

/*
 * Sorts the array in descending order.
 * @parma array The array pointer to pass in
 * @parma length The length of the array being passed in
*/
void insertionSort(int* array, int length) {
        for (int i = 1; i < length; i++) {
        int key = *(array + i);
        int j = i - 1;

        // Loop for sorting in descending order.
        while (j >= 0 && *(array + j) < key) {
            *(array + j + 1) = *(array + j);
            j = j - 1;
        }
        *(array + j + 1) = key;
    }
}

/*
 * Recursive method to give the factorial value of a number
 * @parma num The number to be factorial
 * @returns the factorial of that number
*/
int factorial(int num) {
        // Termination statement
    if (num == 1) {
        return 1;
    }
    else {
        return num * factorial(num - 1);
    }
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
#ifndef EXERCISES_H
#define EXERCISES_H

// --- Functions that return a single value ---
// n is the number of elements of the array

// Returns the sum of the array elements.
int calcSum(int arr[], int n);

// Returns the maximum value in the array.
int findMax(int arr[], int n);

// Returns the average of the array elements.
float calcAverage(int arr[], int n);

// Returns the count of even numbers in the array.
int countEvens(int arr[], int n);

// Returns the sum of the first and last element.
int sumFirstLast(int arr[], int n);

// Returns the minimum value in the array.
int findMin(int arr[], int n);

// Returns the sum of differences (elementwise subtraction) of two arrays.
int subtractArraysSum(int a[], int b[], int n);

// Returns the sum of all elements in the merged (concatenated) arrays.
int mergeArraysSum(int a[], int n1, int b[], int n2);

// Returns the product of all elements in the array.
int productArray(int arr[], int n);

// --- Function that returns multiple values via pointer ---
// Calculates the sum and average; outputs via pointer parameters.
void calcSumAverage(int arr[], int n, int *sum, float *average);

#endif

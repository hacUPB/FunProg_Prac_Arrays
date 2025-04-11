#include "exercises.h"

// -------------------------------
// Functions that return a single value
// -------------------------------

int calcSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

float calcAverage(int arr[], int n)
{
    return (float)calcSum(arr, n) / n;
}

int countEvens(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            count++;
    }
    return count;
}

int sumFirstLast(int arr[], int n)
{
    if (n <= 0)
        return 0;
    return arr[0] + arr[n - 1];
}

int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int subtractArraysSum(int a[], int b[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (a[i] - b[i]);
    }
    return sum;
}

int mergeArraysSum(int a[], int n1, int b[], int n2)
{
    int sum = 0;
    for (int i = 0; i < n1; i++)
    {
        sum += a[i];
    }
    for (int j = 0; j < n2; j++)
    {
        sum += b[j];
    }
    return sum;
}

int productArray(int arr[], int n)
{
    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod *= arr[i];
    }
    return prod;
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average)
{
    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    *sum = total;
    *average = (float)total / n;
}

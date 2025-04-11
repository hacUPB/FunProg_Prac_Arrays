#include "../src/exercises.h"
#include "unity/unity.h"

void setUp(void) {}
void tearDown(void) {}

// Tests for functions returning single value

void test_calcSum(void)
{
    int arr[] = {1, 2, 3, 4};
    TEST_ASSERT_EQUAL(10, calcSum(arr, 4));
}

void test_findMax(void)
{
    int arr[] = {4, 2, 9, 1, 6};
    TEST_ASSERT_EQUAL(9, findMax(arr, 5));
}

void test_calcAverage(void)
{
    int arr[] = {2, 4, 6, 8};
    TEST_ASSERT_FLOAT_WITHIN(0.01, 5.0, calcAverage(arr, 4));
}

void test_countEvens(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    TEST_ASSERT_EQUAL(3, countEvens(arr, 6));
}

void test_sumFirstLast(void)
{
    int arr[] = {7, 3, 9, 5};
    TEST_ASSERT_EQUAL(12, sumFirstLast(arr, 4));
}

void test_findMin(void)
{
    int arr[] = {7, 3, 9, 5};
    TEST_ASSERT_EQUAL(3, findMin(arr, 4));
}

void test_subtractArraysSum(void)
{
    int a[] = {5, 10, 15};
    int b[] = {2, 5, 10};
    TEST_ASSERT_EQUAL(9, subtractArraysSum(a, b, 3)); // (5-2)+(10-5)+(15-10) = 3+5+5 = 13?
    // Ajustamos a:
    // Calculemos: 5-2=3, 10-5=5, 15-10=5, sum = 3+5+5 = 13.
    TEST_ASSERT_EQUAL(13, subtractArraysSum(a, b, 3));
}

void test_mergeArraysSum(void)
{
    int a[] = {1, 2};
    int b[] = {3, 4, 5};
    // Sum = (1+2)+(3+4+5) = 3 + 12 = 15.
    TEST_ASSERT_EQUAL(15, mergeArraysSum(a, 2, b, 3));
}

void test_productArray(void)
{
    int arr[] = {1, 2, 3, 4};
    // Product = 1*2*3*4 = 24.
    TEST_ASSERT_EQUAL(24, productArray(arr, 4));
}

// Test for function that returns multiple values via pointer

void test_calcSumAverage(void)
{
    int arr[] = {1, 2, 3, 4};
    int sum;
    float avg;
    calcSumAverage(arr, 4, &sum, &avg);
    TEST_ASSERT_EQUAL(10, sum);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 2.5, avg);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_calcSum);
    RUN_TEST(test_findMax);
    RUN_TEST(test_calcAverage);
    RUN_TEST(test_countEvens);
    RUN_TEST(test_sumFirstLast);
    RUN_TEST(test_findMin);
    RUN_TEST(test_subtractArraysSum);
    RUN_TEST(test_mergeArraysSum);
    RUN_TEST(test_productArray);
    RUN_TEST(test_calcSumAverage);
    return UNITY_END();
}

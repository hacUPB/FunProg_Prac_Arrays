#include "../src/exercises.h"
#include "unity/unity.h"

void setUp(void) {}
void tearDown(void) {}

// Tests for functions returning single value

void test_calcSum(void)
{
    int a[] = {1, 2, 3, 4};
    TEST_ASSERT_EQUAL(10, calcSum(a, 4));

    int b[] = {-1, -2, -3, -4};
    TEST_ASSERT_EQUAL(-10, calcSum(b, 4));

    int c[] = {};
    TEST_ASSERT_EQUAL(0, calcSum(c, 0));
}

void test_findMax(void)
{
    int a[] = {4, 2, 9, 1, 6};
    TEST_ASSERT_EQUAL(9, findMax(a, 5));

    int b[] = {-3, -8, -1, -6};
    TEST_ASSERT_EQUAL(-1, findMax(b, 4));

    int c[] = {7};
    TEST_ASSERT_EQUAL(7, findMax(c, 1));
}

void test_calcAverage(void)
{
    int a[] = {2, 4, 6, 8};
    TEST_ASSERT_FLOAT_WITHIN(0.01, 5.0, calcAverage(a, 4));

    int b[] = {-2, -4, -6, -8};
    TEST_ASSERT_FLOAT_WITHIN(0.01, -5.0, calcAverage(b, 4));

    int c[] = {0, 0, 0, 0};
    TEST_ASSERT_FLOAT_WITHIN(0.01, 0.0, calcAverage(c, 4));
}

void test_countEvens(void)
{
    int a[] = {1, 2, 3, 4, 5, 6};
    TEST_ASSERT_EQUAL(3, countEvens(a, 6));

    int b[] = {1, 3, 5, 7};
    TEST_ASSERT_EQUAL(0, countEvens(b, 4));

    int c[] = {2, 4, 6, 8};
    TEST_ASSERT_EQUAL(4, countEvens(c, 4));
}

void test_sumFirstLast(void)
{
    int a[] = {7, 3, 9, 5};
    TEST_ASSERT_EQUAL(12, sumFirstLast(a, 4));

    int b[] = {10};
    TEST_ASSERT_EQUAL(20, sumFirstLast(b, 1));

    int c[] = {};
    TEST_ASSERT_EQUAL(0, sumFirstLast(c, 0));
}

void test_findMin(void)
{
    int a[] = {7, 3, 9, 5};
    TEST_ASSERT_EQUAL(3, findMin(a, 4));

    int b[] = {-10, -20, -5};
    TEST_ASSERT_EQUAL(-20, findMin(b, 3));

    int c[] = {4};
    TEST_ASSERT_EQUAL(4, findMin(c, 1));
}

void test_subtractArraysSum(void)
{
    int a1[] = {5, 10, 15};
    int b1[] = {2, 5, 10};
    TEST_ASSERT_EQUAL(13, subtractArraysSum(a1, b1, 3));

    int a2[] = {0, 0, 0};
    int b2[] = {1, 2, 3};
    TEST_ASSERT_EQUAL(-6, subtractArraysSum(a2, b2, 3));

    int a3[] = {-5, -10};
    int b3[] = {-2, -1};
    TEST_ASSERT_EQUAL(-12, subtractArraysSum(a3, b3, 2));
}

void test_mergeArraysSum(void)
{
    int a1[] = {1, 2};
    int b1[] = {3, 4, 5};
    TEST_ASSERT_EQUAL(15, mergeArraysSum(a1, 2, b1, 3));

    int a2[] = {};
    int b2[] = {10, 10};
    TEST_ASSERT_EQUAL(20, mergeArraysSum(a2, 0, b2, 2));

    int a3[] = {-1, -2};
    int b3[] = {-3};
    TEST_ASSERT_EQUAL(-6, mergeArraysSum(a3, 2, b3, 1));
}

void test_productArray(void)
{
    int a[] = {1, 2, 3, 4};
    TEST_ASSERT_EQUAL(24, productArray(a, 4));

    int b[] = {2, 0, 5};
    TEST_ASSERT_EQUAL(0, productArray(b, 3));

    int c[] = {-2, 3};
    TEST_ASSERT_EQUAL(-6, productArray(c, 2));

    int d[] = {1};
    TEST_ASSERT_EQUAL(1, productArray(d, 1));
}

// Test for function that returns multiple values via pointer

void test_calcSumAverage(void)
{
    int arr1[] = {1, 2, 3, 4};
    int sum;
    float avg;
    calcSumAverage(arr1, 4, &sum, &avg);
    TEST_ASSERT_EQUAL(10, sum);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 2.5, avg);

    int arr2[] = {0, 0, 0};
    calcSumAverage(arr2, 3, &sum, &avg);
    TEST_ASSERT_EQUAL(0, sum);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 0.0, avg);
}

int main(void)
{
    UNITY_BEGIN();

#ifdef TEST_NAME
    extern void TEST_NAME(void);
    RUN_TEST(TEST_NAME);
#else
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
#endif

    return UNITY_END();
}

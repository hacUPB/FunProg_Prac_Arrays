#include "../src/ejercicios.h"
#include "unity/unity.h"

void setUp(void) {}
void tearDown(void) {}

void test_calcular_suma_promedio(void)
{
    int arr[] = {1, 2, 3, 4};
    int suma;
    float promedio;
    calcular_suma_promedio(arr, 4, &suma, &promedio);
    TEST_ASSERT_EQUAL(10, suma);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 2.5, promedio);
}

void test_encontrar_min_max(void)
{
    int arr[] = {4, 2, 9, 1, 6};
    int min, max;
    encontrar_min_max(arr, 5, &min, &max);
    TEST_ASSERT_EQUAL(1, min);
    TEST_ASSERT_EQUAL(9, max);
}

void test_restar_arreglos(void)
{
    int a[] = {5, 10, 15};
    int b[] = {2, 5, 10};
    int resultado[3];
    int esperado[] = {3, 5, 5};

    restar_arreglos(a, b, resultado, 3);
    TEST_ASSERT_EQUAL_INT_ARRAY(esperado, resultado, 3);
}

void test_fusionar_arreglos(void)
{
    int a[] = {1, 2};
    int b[] = {3, 4, 5};
    int resultado[5];
    int esperado[] = {1, 2, 3, 4, 5};

    fusionar_arreglos(a, 2, b, 3, resultado);
    TEST_ASSERT_EQUAL_INT_ARRAY(esperado, resultado, 5);
}

void test_filtrar_pares(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int resultado[6];
    int esperado[] = {2, 4, 6};

    int count = filtrar_pares(arr, 6, resultado);
    TEST_ASSERT_EQUAL(3, count);
    TEST_ASSERT_EQUAL_INT_ARRAY(esperado, resultado, 3);
}

void test_invertir_arreglo(void)
{
    int arr[] = {10, 20, 30};
    int resultado[3];
    int esperado[] = {30, 20, 10};

    invertir_arreglo(arr, 3, resultado);
    TEST_ASSERT_EQUAL_INT_ARRAY(esperado, resultado, 3);
}

void test_promedios_mitad(void)
{
    int arr[] = {2, 4, 6, 8};
    float izq, der;
    promedios_mitad(arr, 4, &izq, &der);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 3.0, izq);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 7.0, der);
}

void test_encontrar_indices(void)
{
    int arr[] = {5, 2, 5, 3, 5};
    int indices[5];
    int esperado[] = {0, 2, 4};

    int count = encontrar_indices(arr, 5, 5, indices);
    TEST_ASSERT_EQUAL(3, count);
    TEST_ASSERT_EQUAL_INT_ARRAY(esperado, indices, 3);
}

void test_suma_cruzada(void)
{
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int resultado[3];
    int esperado[] = {7, 7, 7};

    suma_cruzada(a, b, 3, resultado);
    TEST_ASSERT_EQUAL_INT_ARRAY(esperado, resultado, 3);
}

void test_normalizar_arreglo(void)
{
    float arr[] = {10.0, 20.0, 30.0};
    float resultado[3];
    normalizar_arreglo(arr, 3, resultado);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 0.0, resultado[0]);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 0.5, resultado[1]);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 1.0, resultado[2]);
}

int main(void)
{
    UNITY_BEGIN();
#ifdef TEST_NAME
    RUN_TEST(TEST_NAME);
#else
    RUN_TEST(test_calcular_suma_promedio);
    RUN_TEST(test_encontrar_min_max);
    RUN_TEST(test_restar_arreglos);
    RUN_TEST(test_fusionar_arreglos);
    RUN_TEST(test_filtrar_pares);
    RUN_TEST(test_invertir_arreglo);
    RUN_TEST(test_promedios_mitad);
    RUN_TEST(test_encontrar_indices);
    RUN_TEST(test_suma_cruzada);
    RUN_TEST(test_normalizar_arreglo);
#endif
    return UNITY_END();
}

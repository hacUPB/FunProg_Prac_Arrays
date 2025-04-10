#ifndef EJERCICIOS_H
#define EJERCICIOS_H

void calcular_suma_promedio(int arr[], int n, int *suma, float *promedio);
void encontrar_min_max(int arr[], int n, int *min, int *max);
void restar_arreglos(int a[], int b[], int resultado[], int n);
void fusionar_arreglos(int a[], int n1, int b[], int n2, int resultado[]);
int filtrar_pares(int arr[], int n, int resultado[]);
void invertir_arreglo(int arr[], int n, int resultado[]);
void promedios_mitad(int arr[], int n, float *prom_izq, float *prom_der);
int encontrar_indices(int arr[], int n, int valor, int indices[]);
void suma_cruzada(int a[], int b[], int n, int resultado[]);
void normalizar_arreglo(float arr[], int n, float resultado[]);

#endif

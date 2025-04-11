# 📚 Práctica: Arreglos y Funciones en C

## 📖 Descripción General

Esta práctica consta de 10 ejercicios en lenguaje C.  

- **9 ejercicios** deben retornar un único valor usando `return`.  
- **1 ejercicio** (calcSumAverage) debe retornar dos valores (la suma y el promedio) utilizando parámetros puntero.

Todas las funciones están en inglés para evitar problemas con acentos y caracteres especiales.

---

## 🗂️ Estructura del Proyecto

- **src/**: Contiene el código fuente.
  - `exercises.h` y `exercises.c`: Implementación de los ejercicios.
  - `main.c`: Función principal para probar manualmente las funciones. Cada estudiante debe implementar un código para probar cada una de las funciones en el main().
- **test/**: Contiene las pruebas unitarias con el framework Unity.
  - `tests_exercises.c`: Pruebas unitarias para cada ejercicio.
  - **unity/**: Archivos reales de Unity (`unity.c` y `unity.h`).
- **Makefile**: Compila el programa principal y las pruebas.
- **README.md**: Este archivo con las instrucciones.

---

## 🛠️ Detalle de Funciones

### Funciones que retornan un único valor con `return`

1. **calcSum**  
   - **Descripción:** Calcula la suma de los elementos del arreglo.  
   - **Entrada:** Arreglo de enteros y su tamaño.  
   - **Salida:** Un entero con la suma total.

2. **findMax**  
   - **Descripción:** Encuentra el valor máximo en el arreglo.  
   - **Entrada:** Arreglo de enteros y su tamaño.  
   - **Salida:** El valor máximo encontrado.

3. **calcAverage**  
   - **Descripción:** Calcula el promedio de los elementos del arreglo.  
   - **Entrada:** Arreglo de enteros y su tamaño.  
   - **Salida:** Un valor flotante (float) representando el promedio.

4. **countEvens**  
   - **Descripción:** Cuenta la cantidad de números pares en el arreglo.  
   - **Entrada:** Arreglo de enteros y su tamaño.  
   - **Salida:** Un entero con el número de elementos pares.

5. **sumFirstLast**  
   - **Descripción:** Suma el primer y el último elemento del arreglo.  
   - **Entrada:** Arreglo de enteros y su tamaño.  
   - **Salida:** Un entero con la suma de ambos valores.

6. **findMin**  
   - **Descripción:** Encuentra el valor mínimo en el arreglo.  
   - **Entrada:** Arreglo de enteros y su tamaño.  
   - **Salida:** El valor mínimo encontrado.

7. **subtractArraysSum**  
   - **Descripción:** Realiza la resta elemento a elemento de dos arreglos y retorna la suma de todas esas diferencias.  
   - **Entrada:** Dos arreglos de enteros y su tamaño.  
   - **Salida:** La suma de las diferencias de cada posición.

8. **mergeArraysSum**  
   - **Descripción:** Fusiona (concatena) dos arreglos y retorna la suma de todos los elementos del arreglo resultante.  
   - **Entrada:** Dos arreglos y sus tamaños respectivos.  
   - **Salida:** Un entero con la suma total de los elementos fusionados.

9. **productArray**  
   - **Descripción:** Calcula el producto de todos los elementos del arreglo.  
   - **Entrada:** Arreglo de enteros y su tamaño.  
   - **Salida:** Un entero con el producto.

### Función que retorna múltiples valores utilizando punteros

1. **calcSumAverage**  
   - **Descripción:** Calcula la suma y el promedio de los elementos del arreglo y retorna ambos valores mediante parámetros puntero.  
   - **Entrada:** Arreglo de enteros, tamaño del arreglo, y punteros para la suma y el promedio.  
   - **Salida:** N/A (Los resultados se obtienen a través de los punteros).

---

## 🚀 ¿Qué debes hacer?

1. **Completar los Ejercicios:**  
   Revisa `src/exercises.c` y asegúrate de que cada función realice lo indicado en su descripción.

2. **Probar tu Trabajo:**
   - Para ejecutar el programa manualmente. Si estás en un sistema operativo Linux, por ejemplo en Codespaces, puedes usar el siguiente comando.

     ```bash
     make run
     ```

     Esto compilará el programa principal (`src/main.c`) y lo ejecutará, mostrando los resultados en la consola.

   - Para compilar y ejecutar las pruebas unitarias:

     ```bash
     make test
     ```

     Asegúrate de que todas las pruebas (tests) pasen correctamente.

3. **Enviar la práctica:**  
   Realiza `push` a tu repositorio. La práctica se evaluará manualmente y mediante las pruebas unitarias proporcionadas. El resultado lo puedes observar en tu repositorio remoto en GitHub en la pestaña Actions.

---

## 🖥️ Ambiente de Desarrollo

- **Compilador:** gcc (se recomienda MinGW o WSL en Windows).  
- **Make:** Asegúrate de tener un comando `make` operativo. Como puedes observar, el repositorio tiene un archivo Makefile, para poder utilizarlo es necesario tener instalada la aplicación make. Si tienes instalada MinGW, probablemente debas instalar `mingw32-make`. Si no lo tienes instalado, entonces debes subir la información al repositorio remoto y allí se realizarán las pruebas.
- **Pruebas Unitarias:** Se utiliza el framework Unity para ejecutar los tests.

---

## 🔎 Consejos Adicionales

- **Revisa cada función y comprende su objetivo.**  
- **Ejecuta las pruebas frecuentemente** para asegurarte que tus cambios no rompan la funcionalidad.
- **Usa el Makefile** para compilar y correr tanto el programa principal como los tests.

“First, Solve the Problem. Then, Write the Code.” - John Johnson - 🚀

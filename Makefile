CC = gcc
CFLAGS = -I./src -I./test/unity -Wall

# Archivos fuente
SRC = src/exercises.c src/main.c
TESTSRC = src/exercises.c test/unity/unity.c test/tests_exercises.c

# Archivos binarios
OUT = build/program.exe
TESTOUT = build/tests.exe
SINGLETESTOUT = build/test_single.exe

.PHONY: all clean test run test-name

# Compila el programa principal
all: $(OUT)

$(OUT): $(SRC)
	@mkdir -p build
	$(CC) $(SRC) $(CFLAGS) -o $(OUT)

# Ejecuta el programa principal
run: $(OUT)
	$(OUT)

# Compila y ejecuta todos los tests
test: $(TESTOUT)
	$(TESTOUT)

$(TESTOUT): $(TESTSRC)
	@mkdir -p build
	$(CC) $(TESTSRC) $(CFLAGS) -o $(TESTOUT)

# Compila y ejecuta una prueba individual
test-name:
	@mkdir -p build
	$(CC) $(TESTSRC) $(CFLAGS) -DTEST_NAME=$(NAME) -o $(SINGLETESTOUT)
	$(SINGLETESTOUT)

# Limpia los archivos generados
clean:
	rm -rf build

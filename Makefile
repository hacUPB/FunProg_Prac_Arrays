.PHONY: all test clean coverage coverage-html coverage-html-open test-name

CC = gcc
CFLAGS = -I./src -I./test/unity -Wall
SRC = src/ejercicios.c test/unity/unity.c test/test_ejercicios.c
OUT = build/test_ejercicios.exe

all: test

test:
	mkdir -p build
	$(CC) $(SRC) $(CFLAGS) -o $(OUT)
	$(OUT)

test-name:
	mkdir -p build
	$(CC) $(SRC) $(CFLAGS) -DTEST_NAME=\"$(NAME)\" -o $(OUT)
	$(OUT)

clean:
	rm -rf build coverage.info coverage_html

coverage:
	mkdir -p build
	$(CC) $(SRC) $(CFLAGS) --coverage -o $(OUT)
	$(OUT)
	lcov --capture --directory . --output-file coverage.info
	lcov --remove coverage.info "/usr/*" --output-file coverage.info
	lcov --list coverage.info

coverage-html:
	mkdir -p build
	$(CC) $(SRC) $(CFLAGS) --coverage -o $(OUT)
	$(OUT)
	lcov --capture --directory . --output-file coverage.info
	lcov --remove coverage.info "/usr/*" --output-file coverage.info
	genhtml coverage.info --output-directory coverage_html
	@echo Abre coverage_html/index.html en tu navegador

coverage-html-open:
	mkdir -p build
	$(CC) $(SRC) $(CFLAGS) --coverage -o $(OUT)
	$(OUT)
	lcov --capture --directory . --output-file coverage.info
	lcov --remove coverage.info "/usr/*" --output-file coverage.info
	genhtml coverage.info --output-directory coverage_html
	xdg-open coverage_html/index.html || echo "Abre coverage_html/index.html manualmente"

CC = gcc
CFLAGS = -I./src -I./test/unity -Wall

# Source files
SRC = src/exercises.c src/main.c
TESTSRC = src/exercises.c test/unity/unity.c test/tests_exercises.c

# Output binaries
OUT = build/program.exe
TESTOUT = build/tests.exe

.PHONY: all clean test run

all: $(OUT)

# Build the main program
$(OUT): $(SRC)
	@mkdir -p build
	$(CC) $(SRC) $(CFLAGS) -o $(OUT)

# Build and run the tests
test: $(TESTOUT)
	$(TESTOUT)

$(TESTOUT): $(TESTSRC)
	@mkdir -p build
	$(CC) $(TESTSRC) $(CFLAGS) -o $(TESTOUT)

# Run the main program manually
run: $(OUT)
	$(OUT)

clean:
	rm -rf build

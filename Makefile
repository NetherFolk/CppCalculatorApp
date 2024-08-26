# Project CppCalculatorApp
# written by Nazrin(@NetherFolk)

SHELL = C:\Windows\System32\WindowsPowerShell\v1.0\powershell.exe
.SHELLFLAGS := -NoProfile -Command

BIN = bin/Calculator.exe
SRC = src/main.cpp
OBJS = obj/main.o

.PHONY: run clean

$(BIN) : $(OBJS)
	mkdir bin
	g++ $(OBJS) -o $(BIN)

# change the include path based on your include path
$(OBJS) : $(SRC)
	mkdir obj
	g++ -c $(SRC) -o $(OBJS) -I"C:\Projects\cpp_files\Calculator\include"

run :
	$(BIN)

clean :
	remove-item -Recurse obj
	remove-item -Recurse bin


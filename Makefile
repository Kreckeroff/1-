CC = g++

all: task
task: task1.1.o task1.2.o task1.3.o task1.4.o task1.5.o
        $(CC) task1.1.o task1.2.o task1.3.o task1.4.o task1.5.o -o task

task1.1.o: task1.1.cpp
			$(CC) task1.1.cpp

task1.2.o: task1.1.cpp
			$(CC) task1.2.cpp

task1.3.o: task1.1.cpp
			$(CC) task1.3.cpp

task1.4.o: task1.1.cpp
			$(CC) task1.4.cpp

task1.5.o: task1.1.cpp
			$(CC) task1.5.cpp

clean:
rm -rf *.o task

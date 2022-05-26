CC = g++
CFLAGS = -g -Wall -Werror -pedantic --std=c++17
LIBS = -lboost_unit_test_framework -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
DEPS = Matrix.h EDistance.h
all:EDistance style  
%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -I/opt/homebrew/Cellar/boost/1.76.0/include -I/opt/homebrew/Cellar/sfml/2.5.1_1/include -c $<
EDistance: Matrix.o EDistance.o MatrixTester.o 
	$(CC) $(CFLAGS) -v -L/opt/homebrew/Cellar/boost/1.76.0/lib -L/opt/homebrew/Cellar/sfml/2.5.1_1/lib -o $@ $^ $(LIBS)
clean:
	rm -f *.o 
	rm -f EDistance
style:
	cpplint --filter=-runtime/references,-build/header_guard --extensions=cpp,hpp,h Matrix.cpp
	cpplint --filter=-runtime/references,-build/header_guard --extensions=cpp,hpp,h Matrix.h
	cpplint --filter=-runtime/references,-build/header_guard --extensions=cpp,hpp,h MatrixTester.cpp
	cpplint --filter=-runtime/references,-build/header_guard --extensions=cpp,hpp,h EDistance.cpp
	cpplint --filter=-runtime/references,-build/header_guard --extensions=cpp,hpp,h EDistance.h

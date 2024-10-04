TARGETS=sort_test
CXXFLAGS = -std=c++11 -g
CXX=g++
LD=g++
CC=g++

sort_test: sort_test.o main.o builtin.o selectionSort.o mergeSort.o quickSort.o insertionSort.o bubbleSort.o countingSort.o radixSort.o
	$(CXX) $(CXXFLAGS) -o sort_test sort_test.o main.o builtin.o selectionSort.o mergeSort.o quickSort.o insertionSort.o bubbleSort.o countingSort.o radixSort.o

sort_test.o: sort_test.h sort_test.cpp
	$(CXX) $(CXXFLAGS) -c sort_test.cpp

main.o: main.cpp sort_test.h builtin.h selectionSort.h mergeSort.h quickSort.h insertionSort.h bubbleSort.h countingSort.h radixSort.h
	$(CXX) $(CXXFLAGS) -c main.cpp

builtin.o: builtin.h builtin.cpp
	$(CXX) $(CXXFLAGS) -c builtin.cpp

selectionSort.o: selectionSort.h selectionSort.cpp
	$(CXX) $(CXXFLAGS) -c selectionSort.cpp

mergeSort.o: mergeSort.h mergeSort.cpp
	$(CXX) $(CXXFLAGS) -c mergeSort.cpp

quickSort.o: quickSort.h quickSort.cpp
	$(CXX) $(CXXFLAGS) -c quickSort.cpp

insertionSort.o: insertionSort.h insertionSort.cpp
	$(CXX) $(CXXFLAGS) -c insertionSort.cpp

bubbleSort.o: bubbleSort.h bubbleSort.cpp
	$(CXX) $(CXXFLAGS) -c bubbleSort.cpp

countingSort.o: countingSort.h countingSort.cpp
	$(CXX) $(CXXFLAGS) -c countingSort.cpp

radixSort.o: radixSort.h radixSort.cpp
	$(CXX) $(CXXFLAGS) -c radixSort.cpp

clean:
	rm -f *.o $(TARGETS) *~

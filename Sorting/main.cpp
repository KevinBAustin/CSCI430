/**
 * @file main.cpp
 * @author Bob Lowe < rlowe8@utm.edu >
 * @brief Test the sort algorithms using the number of elements specified on the command line.
 * @version 0.1
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include "sort_test.h"
#include "builtin.h"
#include "selectionSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "insertionSort.h"
#include "bubbleSort.h"
#include "countingSort.h"
#include "radixSort.h"

using namespace std;

int main(int argc, char **argv)
{
    // get the number to run.
    unsigned int n = 100000;
    if(argc == 2) {
        n = stoi(argv[1]);
    }
    SortTest t{n};

    // Run the tests
    cout << "Array Size: " << n << endl;
    t.run("Built-In STL Sort", builtinSort);
    //t.run("Selection A Sort", sortA);
    //t.run("Selection B Sort", sortB);
    t.run("Merge Sort", mergesort);
    t.run("Quick Sort", quicksort);
    t.run("Insertion Sort", insertionsort);
    t.run("Bubble A Sort", bubbleSortA);
    t.run("Bubble B Sort", bubbleSortB);
    t.run("Bubble C Sort", bubbleSortC);
    t.run("Counting Sort", countingsort);
    t.run("Radix Sort", radixsort);
}

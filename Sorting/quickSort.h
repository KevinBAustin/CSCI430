#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include <vector>

void qsort(std::vector<int> &sortee, int p, int r);
int partition(std::vector<int> &sortee, int p, int r);
void quicksort(std::vector<int> &sortee);
  
#endif

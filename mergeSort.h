#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>
#include <vector>

class mergeSort{
 private:
  void sort(std::vector<int> &sortee, int p, int r);
  void merge(std::vector<int> &sortee, int p, int q, int r);
 public:
  void mergesort(std::vector<int> &sortee);
};
#endif

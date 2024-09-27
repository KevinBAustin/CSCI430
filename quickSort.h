#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include <vector>

class quickSort{
 private:
  void sort(std::vector<int> &sortee, int p, int r);
  int partition(std::vector<int> &sortee, int p, int r);
 public:
  void quicksort(std::vector<int> &sortee);
  
};
#endif

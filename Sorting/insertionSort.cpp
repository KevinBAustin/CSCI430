#include "insertionSort.h"
#include <vector>
#include <iostream>

using namespace std;

void insertionsort(vector<int> &sortee){
  int n = sortee.size();
  for(int i=2; i<n; i++){
    int key = sortee[i];
    int j = i-1;
    while(j>=0 && sortee[j]>key){
      sortee[j+1] = sortee[j];
      j--;
    }
    sortee[j+1] = key;
  }
}

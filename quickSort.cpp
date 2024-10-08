#include "quickSort.h"
#include <iostream>
#include <vector>

using namespace std;

void quickSort::quicksort(vector<int> &sortee){
  int p = 0;
  int r = sortee.size()-1;

  sort(sortee, p, r);
}


void quickSort::sort(vector<int> &sortee, int p, int r){
  if(p<r){
    int q = partition(sortee, p, r);
    sort(sortee, p, q-1);
    sort(sortee, q+1, r);
  }
}

int quickSort::partition(vector<int> &sortee, int p, int r){
  int x = sortee[r];
  int i = p-1;
  for(int j = p; j<r; j++){
    if(sortee[j]<=x){
      i++;
      sortee[i]=sortee[j];
    }
    sortee[i+1]=sortee[r];
  }
  return i+1;
}

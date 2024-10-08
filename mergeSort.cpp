#include "mergeSort.h"
#include "vector"
#include "iostream"

using namespace std;

void mergeSort::sort(vector<int> &sortee, int p, int r){
  if(p>=r)
    return;
  
  int q = (p+r)/2;

  sort(sortee, p, q);
  sort(sortee, q+1, r);
  merge(sortee, p, q, r);
}

void mergeSort::merge(vector<int> &sortee, int p, int q, int r){
  int l = q - p + 1;
  int e = r - q;

  vector<int> left;
  vector<int> right;

  for(int i=0; i<l; i++){
    left.push_back(sortee[p+i]);
  }

  for(int i=0; i<e; i++){
    right.push_back(sortee[q+i+1]);
  }

  int i = 0;
  int j = 0;
  int k = p;

  while(i<l && j<e){
    if(left[i]<=right[j]){
      sortee[k]=left[i];
      i++;
    }
    else{
      sortee[k]=right[j];
      j++;
    }
    k++;
  }
  while(i<l){
    sortee[k]=left[i];
    i++;
    k++;
  }
  while(j<e){
    sortee[k]=right[j];
    j++;
    k++;
  }
}

void mergeSort::mergesort(vector<int> &sortee){
  int p = 0;
  int r = sortee.size()-1;

  sort(sortee, p, r);
}

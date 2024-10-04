#include "radixSort.h"
#include <vector>
#include <iostream>

using namespace std;

void radixsort(vector<int> &sortee){
  int n = sortee.size();
  int k = sortee[0];
  for(int i=1; i<n; i++){
    if(sortee[i]>k){
      k=sortee[i];
    }
  }

  for(int i=1; k/i > 0; i *= 10){
    countingSort(sortee, n, i);
  }
}

void countingSort(vector<int> &sortee, int n, int dig){
  vector<int> B;
  vector<int> C;
  
  for(int i=0; i<n; i++){
    B.push_back(0);
  }

  for(int i=0; i<=10; i++){
    C.push_back(0);
  }

  for(int i=0; i<n; i++){
    C[(sortee[i]/dig)%10]++;
  }

  for(int i=1; i<10; i++){
    C[i] += C[i-1];
  }

  for(int i=n-1; i>=0; i--){
    B[C[(sortee[i]/dig)%10]-1] = sortee[i];
    C[(sortee[i]/dig%10)]--;
  }

  for(int i=0; i<n; i++){
    sortee[i] = B[i];
  }
}

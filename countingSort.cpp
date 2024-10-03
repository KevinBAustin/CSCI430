#include "countingSort.h"
#include <vector>
#include <iostream>

using namespace std;

void countingSort::countingSort(vector <int> &sortee){
  int n = sortee.size();
  int k = 10000;
  vector<int> B;
  vector<int> C;

  for(int i=0; i<=k; i++){
    C[i]=0;
  }
  for(int j=1; j<n; j++){
    C[sortee[j]] = C[sortee[j]]+1;
  }
  for(int i=1; i<=k; i++){
    C[i] = C[i] + C[i-1];
  }
  for(int j=n-1; j>=0; j--){
    B[C[sortee[j]]] = sortee[j];
    C[sortee[j]] = C[sortee[j]]-1;
  }
  sortee = B;
}

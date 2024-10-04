#include "countingSort.h"
#include <vector>
#include <iostream>

using namespace std;

void countingsort(vector<int> &sortee){
  int n = sortee.size();
  int k = sortee[0];
  for(int i=1; i<n; i++){
    if(sortee[i]>k){
      k=sortee[i];
    }
  }
  vector<int> B;
  vector<int> C;
  for(int i=0; i<=k; i++){
    C.push_back(0);
  }
  for(int j=0; j<n; j++){
    C[sortee[j]] = C[sortee[j]]+1;
  }
  for(int i=1; i<k; i++){
    C[i] = C[i] + C[i-1];
  }
  for(int i=0; i<n; i++){
    B.push_back(0);
  }
  for(int j=n-1; j>=0; j--){
    B[C[sortee[j]]-1] = sortee[j];
    C[sortee[j]] = C[sortee[j]]-1;
  }
  for(int j=0; j<n; j++){
    sortee[j] = B[j];
  }
}

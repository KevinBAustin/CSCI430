#include "bubbleSort.h"
#include <vector>
#include <iostream>

using namespace std;

void bubbleSortA(vector<int> &sortee){
  int n = sortee.size();
  for(int i=0; i<n; i++){
    for(int j=n-1; j>i; j--){
      if(sortee[j] < sortee[j-1]){
	int temp = sortee[j];
	sortee[j] = sortee[j-1];
	sortee[j-1] = temp;
      }
    }
  }
}


void bubbleSortB(vector<int> &sortee){
  bool swapped = 1;
  int n = sortee.size();
  while(swapped){
    swapped = 0;
    for(int i=0; i<n-1; i++){
      if(sortee[i] > sortee[i+1]){
	int temp = sortee[i];
	sortee[i] = sortee[i+1];
	sortee[i+1] = temp;
	swapped = 1;
      }
    }
  }
}

void bubbleSortC(vector<int> &sortee){
  bool swapped = 1;
  int n = sortee.size();
  while(swapped){
    swapped = 0;
    for(int i=n-1; i>=0; i--){
      if(sortee[i] < sortee[i-1]){
	int temp = sortee[i];
	sortee[i] = sortee[i-1];
	sortee[i-1] = temp;
	swapped = 1;
      }
    }
  }
}

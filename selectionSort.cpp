#include "selectionSort.h"
#include <vector>
#include <iostream>

using namespace std;

void selectionSort::sortA(vector<int> &sortee){
  cout<<"a";
  int n = sortee.size();
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;i++){
      if(sortee[j]<sortee[i]){
	int temp = sortee[j];
	sortee[j]=sortee[i];
	sortee[i]= temp;
      }
    }
  }
}

void selectionSort::sortB(vector<int> &sortee){
  int n = sortee.size();
  for(int i=0;i<n;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
      if(sortee[j]<sortee[min]){
	min=j;
      }
    }
    int temp = sortee[i];
    sortee[i] = sortee[min];
    sortee[min] = temp;
  }
}

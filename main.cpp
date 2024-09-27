#include <iostream>
#include <cstdlib>
#include <vector>
#include "selectionSort.h"
#include "mergeSort.h"
#include "quickSort.h"

using namespace std;

int main(){
  vector<int> orig;
  
  for(int i=0; i<100; i++){
    orig.push_back(rand()%100);
  }

  int n = orig.size();
  
  cout << "Original vector elements: ";
  for(int i=0; i<n; i++){
    cout << orig[i] << " ";
  }
  
  cout << endl;
  
  vector<int> selecta(orig);
  vector<int> selectb(orig);
  vector<int> merge(orig);
  vector<int> quick(orig);
  /*
  cout << "SelectionA sorting" << endl;

  selectionSort s;
  s.sortA(selecta);

  cout << "Vector elements sorted with selectionSortA: ";
  for(int i=0; i<n; i++){
    cout << selecta[i] << " ";
  }

  cout << endl;

  cout << "SelectionB sorting" << endl;
  
  s.sortB(selectb);
  
  cout << "Vector elements sorted with selectionSortB: ";
  for(int i=0; i<n; i++){
    cout << selectb[i] << " ";
  }
  */
  cout << endl;

  cout << "Merge sorting" << endl;

  mergeSort m;
  m.mergesort(merge);
  
  cout << "Vector elements sorted with mergeSort: ";
  for(int i=0; i<n; i++){
    cout << merge[i] << " ";
  }

  cout << endl;

  cout << "Quick Sorting" << endl;

  quickSort q;
  q.quicksort(quick);

  cout << "Vector elements sorted with quickSort: ";
  for(int i=0; i<n; i++){
    cout << merge[i] << " ";
  }

  cout << endl;
  
  return 0;
}

#include <stdio.h>

void insertion_sort(int A[], int n);

void main(){
  int n;
  
  printf("Size of the input: ");
  scanf("%d",&n);
  
  int array[n];
  
  for(int i = 0; i < n; i++)
    scanf("%d", &array[i]);
  
  insertion_sort(array, n);
  
  printf("Output: \n");
  for (int i = 0; i < n; i++)
    printf("%d ", array[i]);
  printf("\n");
}

void insertion_sort(int array[], int n){
  int key;
  int l;
  
  for(int j = 1; j < n; j++){
    key = array[j];
    //insert A[j] into the sorted sequence A[0,...,j-1].
    l = j - 1;
    while(l >= 0 && array[l] > key){
      array[l+1] = array[l];
      l = l - 1;
    }
    array[l+1] = key;
  }
}


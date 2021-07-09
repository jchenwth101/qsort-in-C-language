#include <stdio.h>
#include <stdlib.h>

#define COUNT 6

int comparator(const void* p, const void* q){
  int* i = (int*) p;
  int* j = (int*) q;
  if(*i == *j){
    return 0;
  } else if(*i < *j){
    return -1;
  } else{
    return 1;
  }
}

int main(void) {
  int values[] = {10, 6, 8, 2, 12, 13};

  int (*fptr)(const void*, const void*) = comparator;

  qsort(&values, COUNT, sizeof(int), fptr);

  // 
  for(int i = 0; i < COUNT; i++){
    printf("%d ", values[i]);
  }
  printf("\n");
  return 0;
}

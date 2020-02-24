#include<stdlib.h>
#include<stdio.h>

int andop(int* A, int N){
  if(N==0 || N==1)
    return N;
  int i, j, ans, temp, count;
  ans = 1;
  for(i=0;i<N;i++){
    temp = A[i];
    count = 1;
    for(j=0;j<i;j++){
      if(temp&A[j]){
        temp = temp&A[j];
        count++;
      }
    }
    if(count>ans)
      ans = count;
  }
  return ans;
}

void main(){
  int A[] = {1, 2, 4, 8};
  int N = 4;
  int ans;
  ans = andop(A,N);
  printf("%d\n", ans);
  return;
}

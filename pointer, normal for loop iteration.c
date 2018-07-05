//iterate through array pointer/normal way

#include <stdio.h>
#include <string.h>

//using pointers
// int main(){
//   int a[] = {1,2,3,4,5,6};
//   int len = sizeof(a)/sizeof(int);
//
//   for(int *ip = a; ip < a + len; ip++){
//       printf("%d", *ip);
//   }
//
// }


//normal way
int main(){
  int a[] = {1,2,3,4,5,6};
  int len = sizeof(a)/sizeof(int);

  for(int i = 0; i < len; i++){
    printf("%d", a[i]);
  }
}

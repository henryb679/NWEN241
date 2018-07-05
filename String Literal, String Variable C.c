#include <stdio.h>
#include <string.h>

//Example

//String Literal
int main(){
  char *str = "Hello";
  printf(str);
}

//String Variable

int main(){
  char c[] = "Hello";

  for(int i = 0; i < sizeof(c)/sizeof(char); i++){
    printf("%c", c[i]);
  }

}

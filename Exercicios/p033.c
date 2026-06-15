#include <stdio.h>

#define MAX_SIZE 100

int digits(char []);

int main(void) {

  // Read amount of strings
  int n;
  scanf("%d", &n);

  // Read n strings and for each one call the digits function
  char str[MAX_SIZE];
  for (int i=0; i<n; i++) {
    scanf("%s", str);
    printf("digits(\"%s\") = %d\n", str, digits(str));
  }
  
  return 0; 
}

int digits(char str[]) {
    int cont=0;
    int i=0;
    while(str[i]!='\0'){
        if (str[i]>='0' && str[i]<='9'){
            cont++;
        }
    i++;
    }
    return cont;
}
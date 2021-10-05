#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mystring.h"

int main() {

  char s1[100];
  char s2[100] = "hello";
  char s3[100] = "goodbye";
  
  printf("start strings:\n");
  printf("s1: [%s]\n", s1);
  printf("s2: [%s]\n", s2);
  printf("s3: [%s]\n", s3);
  
  printf("\nTesting strlen(s2):\n");
  printf("[standard]:\t%lu\n", strlen(s2) );
  printf("[mine]:\t\t%d\n", mystrlen(s2) );

  printf("\nTesting strcpy(s1, s2):\n");
  printf("[standard]:\t[%s]\n", strcpy(s1, s2) );
  return 0;
}

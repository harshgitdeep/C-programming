#include <stdio.h>

int main() {
    int n, i, flag = 0;
    char ch;
do{
    

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 1)
    printf("%d is a not prime number.", n);
  else
    printf("%d is a prime number.", n);

     printf("\n\nDo you wanna continue... press(y/n)\n");
        fflush(stdin);
        scanf("%c",&ch);
}

while(ch=='y' || ch=='n');

  return 0;
}
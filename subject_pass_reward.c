#include <stdio.h>

int main() 
{
 char math, science;
   printf("enter the subject you pass math(y/n): ");
    scanf(" %c", &math);

    printf("enter the subject you pass science(y/n): ");
    scanf(" %c", &science);

if(math=='y' && science=='y'){
  printf("congratulation! you win 45tk");
}
else if(science=='y'){
  printf("congo! you win 15tk");
}
else if (math=='y'){
  printf("congo! you win 15tk");
}
else {
  printf("ooowwwwhhhh! sorry!");
}
  return 0;
}

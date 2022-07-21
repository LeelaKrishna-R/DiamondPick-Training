#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MIN 1
#define MAX 100
int type,slot,x,a;
float inTime,outTime;
char vNum[20];
int vType()
{
    printf("Choose your vehicle type:\n+ 1. Car : 50rs/hr\n+ 2. Bike : 40rs/hr\n+ Cycle : 10rs/hr\n");
    scanf("%d",&type);
    printf("Input your slot number\n(Range: 1-100): \n");
    scanf("%d",&slot);
    slot=x;
    printf("\n");
}
int parking()
{
     printf("Input your vehicle number: ");
     scanf("%s",vNum);
     printf("\n");
     if(vNum!='\0')
     {
         printf("Enter parking duration in minutes: \n");
         scanf("%f",&inTime);
     }
}
int print_array(const bool *set, int min, int max) {
  int width = 10;
  for (int i = min; i <= max;) 
  {
    for (int w = 0; w < width; w++) 
    {
        //todo
      printf(" - ");
      i++;
      if (i > max)
        break;
    }
    fputc('\n', stdout);
  }
}

int main() 
{
  bool set[MAX];
  printf("Would you like to stay parked/checkout?\n+ 1. Park\n+ 2. Exit\n");
  scanf("%d",&a);
  printf("\n");
  switch (a)
  {
    case 1:
        vType();
        parking();
        print_array(set, MIN, MAX);
    //todo from case-2
  }
  return 0;
}

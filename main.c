#include <stdio.h>

int main(void) {
  int liczba;
  int liczba1;
  printf("Wprowadź liczbę:\n");
  scanf("%d",&liczba1);
  for(int i = 0;i<4;i++){
    printf("Wprowadź liczbę:\n");
    scanf("%d", &liczba);
    if (liczba1 < liczba){
      liczba1=liczba;}
    }
    printf("Największa liczba to : %d" , liczba1);
  }
    

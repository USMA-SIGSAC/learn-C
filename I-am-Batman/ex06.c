#include <stdio.h>

int main(int argc, char *argv[]){
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";
  
  printf("you are %d miles away.\n", distance);
  printf("you have %f levels of power.\n", power);
  printf("you have %f awesome super powers.\n", super_power);
  printf("I have a initial %c.\n", initial);
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("my whole name is %s %c %s.\n", first_name, initial, last_name);

  return 0;
}

 myfile.h
 extern int x=10;//external variable (also global)  
 program1.c
  #include "myfile.h"  
  #include <stdio.h>  
  void printValue(){  
  printf("Global variable: %d", global_variable);  
  }
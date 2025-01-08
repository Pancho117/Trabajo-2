#include <stdio.h> 

#include <string.h> 

 

int main (int argc, char *argv[]) { 

 

 char palabra[50]; 

 

 printf("Ingrese el texto: "); 

 fflush(stdin); 

 fgets(palabra,50,stdin); 

 int len = strlen(palabra) - 1; 

 if (palabra[len] == '\n')
  { 
  palabra[len] = '\0'; 

 } 

 

 int num_palabras = 0; 

 

 

 int longitud_actual_palabra = 0; 

  

 for (int i = 0; i < len; i++) 

 { 

   

  printf("%c\n", palabra[i]); 

   

  if (palabra[i] != ' ' && palabra[i] != '\0') { 

    

   longitud_actual_palabra++; 

 

  } else if (longitud_actual_palabra > 0) { 

    

   num_palabras++; 
   longitud_actual_palabra = 0; 

  } 

 } 

 

 

 if (longitud_actual_palabra > 0) { 

  num_palabras++; 
 } 

 
 printf("\nNumero de palabras: %d\n", num_palabras); 

 return 0; 

} 
#include <stdio.h> 

#include <string.h> 

 

int main (int argc, char *argv[]) { 

 

 char Frase[50]; 

 

 printf("Ingrese el texto: "); 

 fflush(stdin); 

 fgets(Frase,50,stdin); 

 int len = strlen(Frase) - 1; 

 if (Frase[len] == '\n')
  { 
  Frase[len] = '\0'; 

 } 

 

 int num_Frases = 0; 
int max_longitud = 0; 

int min_longitud = 50; 

int longitud_actual_Frase = 0; 
 
 

 for (int i = 0; i < len; i++) 

 { 

   

  printf("%c\n", Frase[i]); 

   

  if (Frase[i] != ' ' && Frase[i] != '\0') { 

    

   longitud_actual_Frase++; 

 

  } else if (longitud_actual_Frase > 0) { 

    

   num_Frases++; 
   longitud_actual_Frase = 0; 

  } 

 } 
  if (longitud_actual_Frase > max_longitud   ) { 
 max_longitud = longitud_actual_Frase; 
}
 if (longitud_actual_Frase < min_longitud) {
min_longitud = longitud_actual_Frase; 
}

longitud_actual_Frase = 0; 

 if (longitud_actual_Frase > 0) { 

num_Frases++; 

  } 
 

 
 
 printf("\nNumero de Frases: %d\n", num_Frases); 
 printf("Caracteres de la Frase mas pequena: %d\n", min_longitud); 

 printf("Caracteres de la Frase mas grande: %d\n", max_longitud); 

 return 0; 

} 
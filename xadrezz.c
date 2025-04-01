#include <stdio.h>

void movertorre(int casas){
  if (casas > 0)
  {
    printf("Torre - Direita\n");
    movertorre(casas - 1);
  }
  
}



int main(){
int torre= 1 , bispo = 1 , rainha = 1, movimentocompleto = 1;





while (torre < 5)
{

 printf("Torre - Direita\n");
torre ++;
}
while (bispo < 5)
{
printf("Bispo - Cima direita\n");
bispo++;
}
while (rainha < 8) 
{
   printf("Rainha - Esquerda\n");
rainha++;
}

while (movimentocompleto --)
{
 for ( int cavalo = 0; cavalo < 2; cavalo++)
 {
   printf("Cavalo - Cima\n");
 }
 printf("Cavalo - Direita\n");
}

movertorre(5);





return 0;





}
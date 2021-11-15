// Program ce izvrsit selection sort nad poljem.

#include<stdio.h>
int main(){
   
   int i, j, broj, temp, polje[25];

   printf("Koliko brojeva ces unijeti?: ");
   scanf("%d",&broj);

   printf("Unesi %d elemente: ", broj);
   // Petlja za unos elementata u polje
   for(i=0;i<broj;i++)
      scanf("%d",&polje[i]);
 
   // Logika selection sort algoritma
   for(i=0;i<broj;i++){
      for(j=i+1;j<broj;j++){
         if(polje[i]>polje[j]){
            temp=polje[i];
            polje[i]=polje[j];
            polje[j]=temp;
         }
      }
   }

   printf("Sortirano polje: ");
   for(i=0;i<broj;i++)
      printf(" %d",polje[i]);

   return 0;
}

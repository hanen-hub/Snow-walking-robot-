#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   int test ;
   scanf("%d",&test);
   while (test--){
   char chaine[100000000] ;
   int minmumsurlehorizontal=0 , minimumsurlevertical=0, right=0 ,top=0,left=0 ,bottom=0 ;

         //la chaine doit ne contenir que les caractéres U,R,L,D  en majuscules

    scanf("%s",&chaine);

        // robot peut faire un pas vers le bas , le haut , à droite à gauche

       // calculer le nombre de pas vers le bas , le haut à droite , à gauche
    for (int i=0 ; i<strlen(chaine); i++)  {
    if      (chaine[i]=='R')   right++  ;
    else if (chaine[i]=='U')   top++    ;
    else if (chaine[i]=='L')   left++   ;
    else if (chaine[i]=='D')   bottom++ ;  }

      //on prend le nombre minimal entre la droite et  le gauche

     //le robot doit revenir au point de départ

     //pas à droite égale à gauche


    if (right>=left)    minmumsurlehorizontal=left     ;
    else                minmumsurlehorizontal=right    ;
    if (bottom>= top )  minimumsurlevertical=top       ;
    else                minimumsurlevertical=bottom    ;

    //le robot reste fixé

   if(minmumsurlehorizontal==0 && minimumsurlevertical==0){
          printf("%d\n",0)  ;  printf("\n");
                                                          }
   //le robot peut passer qu'a travers le point (0,0) 2 fois

   //le nombre de pas  a l'horizontal égale 0

   //le robot peut faire qu'un pas vers le haut et un pas vers le bas

    else if (minmumsurlehorizontal==0){
        printf("%d\n",2);  printf("DU") ;  printf("\n") ;
                                      }
    else if (minimumsurlevertical==0){
        printf("%d\n",2);  printf("RL");   printf("\n");
                                     }
    else  printf("%d\n",(minimumsurlevertical+minmumsurlehorizontal)*2);

//l'affichage de la chaine après la modification
    for (int i=0 ; i<minmumsurlehorizontal  ; i++ )  printf("R")     ;
    for (int i=0 ; i<minimumsurlevertical   ; i++ )  printf("U")     ;
    for (int i=0 ; i<minmumsurlehorizontal  ; i++ )  printf("L")     ;
    for (int i=0 ; i<minimumsurlevertical   ; i++ )  printf("D")     ;

printf("\n");
                 }

    return 0 ;

}

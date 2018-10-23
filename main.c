#include <stdio.h>
#include <stdlib.h>

int main()
{

    //DECLARATION DES VARIABLES

    int taille,x,y=0;
    char car1='a';
    char car2='b';

    //PROGRAMME : CROIX DE CARACTERE

    printf("Veuillez entrer un caractere :\n");
    scanf("%c",&car1);
    printf("Veuillez entrer la taille de votre croix :\n");
    scanf("%d",&taille);
    for (x=0; x<taille; x++)  //boucle de l'axe des abscisses allant de x=0 � pas de 1, s'arr�te lorsque x=taille
    {
        for (y=0; y<taille; y++) //boucle de l'axe des ordonn�s allant de y=0 � pas de 1, s'arr�te lorsque y=taille
        {
            if (x==y||y==taille-x-1) //condition d'affichage d'un caract�re : lorsque x=y OU y=taille de la croix-x-1
            {
                printf("%c",car1);
            }
            else // et affiche un espace lorsque les conditions ne sont pas remplies
            {
                printf(" ");
            }
        }
        printf("\n"); //saut de ligne n�cessaire � la fin de la premi�re boucle
    }

    // PROGRAMME : CARRE DE CARACTERE

    fflush(stdin);
    printf("Veuillez entrer un caractere pour le contour carre :\n");
    scanf("%c",&car1);
    fflush(stdin);
    printf("Veuillez entrer un caractere pour l'interieur du carre :\n");
    scanf("%c",&car2);
    printf("Veuillez entrer la taille de votre carre :\n");
    scanf("%d",&taille);
    for (x=0; x<taille; x++) // m�mes boucles for que pour la croix
    {
        for (y=0; y<taille; y++)
        {
            if (x==0||y==0||x==taille-1||y==taille-1) //condition d'affichage du carr�: x=0 -> c�t� ouest, y=0 -> c�t� nord, x=taille-1 -> "-1" car c'est la derni�re
            {                                         //it�ration avant la fin de la boucle, donc la derni�re ligne -> c�t� est, y=taille-1 -> sud
                printf("%c",car1);
            }
            else
            {
                printf("%c",car2); // et affiche le caract�re secondaire lorsque les conditions ne sont pas remplies
            }
        }
        printf("\n"); //saut de ligne n�cessaire � la fin de la premi�re boucle
    }
    return 0;
}

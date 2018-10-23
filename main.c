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
    for (x=0; x<taille; x++)  //boucle de l'axe des abscisses allant de x=0 à pas de 1, s'arrête lorsque x=taille
    {
        for (y=0; y<taille; y++) //boucle de l'axe des ordonnés allant de y=0 à pas de 1, s'arrête lorsque y=taille
        {
            if (x==y||y==taille-x-1) //condition d'affichage d'un caractère : lorsque x=y OU y=taille de la croix-x-1
            {
                printf("%c",car1);
            }
            else // et affiche un espace lorsque les conditions ne sont pas remplies
            {
                printf(" ");
            }
        }
        printf("\n"); //saut de ligne nécessaire à la fin de la première boucle
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
    for (x=0; x<taille; x++) // mêmes boucles for que pour la croix
    {
        for (y=0; y<taille; y++)
        {
            if (x==0||y==0||x==taille-1||y==taille-1) //condition d'affichage du carré: x=0 -> côté ouest, y=0 -> côté nord, x=taille-1 -> "-1" car c'est la dernière
            {                                         //itération avant la fin de la boucle, donc la dernière ligne -> côté est, y=taille-1 -> sud
                printf("%c",car1);
            }
            else
            {
                printf("%c",car2); // et affiche le caractère secondaire lorsque les conditions ne sont pas remplies
            }
        }
        printf("\n"); //saut de ligne nécessaire à la fin de la première boucle
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char cin[20];
    char nom[20],prenom[20];
    float montant;

}Compte;
void Afficher(Compte C[100],int *p,int i);
void AjouterCompte(Compte C[],int *p);



 static int i,j=0,choix;
 static Compte C[100];
int main()
{

    int nben=0;
    int *p;
    p=&nben;
    char cin_user[20] ;


    do
    {
        printf("\t\t\t:::::::::::::::::::::::::: Menu Principale ::::::::::::::::::::::::::\n\n\n");
        printf("\t\t\t 1- Introduire un compte bancaire \n");
        printf("\t\t\t 2- Introduire plusieurs comptes bancaires \n");
        printf("\t\t\t 3- Operations \n");
        printf("\t\t\t 4- Affichage \n");
        printf("\t\t\t 5- Fidelisation \n");
        printf("\t\t\t 6- Quitter L'\application\n\n");
        do
        {
            printf("\tVeuillez donner Votre choix : \t");
            scanf("%d",&choix);
             if(choix>6 || choix<1)
            printf("Votre Choix doit Etre Compris Entre 1 et 6 \n");

        }while(choix>6 || choix<1);
        switch(choix)
        {
        case 1:
            {
                AjouterCompte(C,p);



            }break;
        case 2:
            {
                do
                {
                      printf("donner le nombre d'enregistrement: \t");
                      scanf("%d",&nben);
                      if(nben<1 || nben>100)
                        printf("le nombre d'enregistrement doit etre comprit entre 1 et 100\n");
                }while(nben<1 || nben>100);
                int a=j;
    for(i=a;i<nben+a;i++)
    {

          printf("Veuillez donner les informations de compte bancaire numero %d :\n",i+1);
          printf("Veuillez Entrer le CIN : \t");
          scanf("%s",C[i].cin);
          printf("Veuillez Entrer le Nom : \t");
          scanf("%s",C[i].nom);
          printf("Veuillez Entrer le Prenom : \t");
          scanf("%s",C[i].prenom);
          printf("Veuillez Entrer le Montant : ");
          scanf("%f",&C[i].montant);
     printf("\n");
     j++;

    }
    }break;

        case 3:
            {


                do
                {
                   printf("\t\t\t:::::::::::::::::::::::::: Operations ::::::::::::::::::::::::::\n\n\n");
                   printf("\t\t\t 1- Retrait \n");
                   printf("\t\t\t 2- Depot\n");
                   printf("\t\t\t 3- retour a menu  \n");
                   printf("\t Veuillez choisir une operation: \t");
                   scanf("%d",&choix);
                     switch(choix)
                {
                case 1:
                    {
                        float s1;

                        printf("entre votre Cin :\t");
                        scanf("%s",cin_user);
                        for(i=0;i<*p;i++)
                        {
                            if(strstr(cin_user,C[i].cin))
                            {
                                printf("combien :\n");
                                scanf("%f",&s1);
                                if(s1>C[i].montant)
                                {
                                    printf("\n impossible votre sold inferieur a %.2f\n",s1);
                                    break;
                                }
                                C[i].montant-=s1;
                            }

                        }

                    }break;
               case 2:
                    {
                           float s2;


                         printf("entre votre Cin :\t");
                        scanf("%s",cin_user);
                        for(i=0;i<*p;i++)
                        {
                            if(strstr(cin_user,C[i].cin))
                            {
                                printf("combien :\n");
                                scanf("%f",&s2);
                                C[i].montant+=s2;
                            }
                        }

                    }break;


                }
                }while(choix!=3);
            }

        case 4:
            {
                system("cls");

               Afficher(C,p,i);




            }break;
        case 5:
            {

            }break;
        case 6:
            {

            }break;


        }



    }while(choix!=6);


    return 0;
}

void AjouterCompte(Compte C[100],int *p)
{


    printf("\nIntroduire un compte bancaire:\n");
    printf("Veuillez Entrer votre CIN : \t");
    scanf("%s",C[i].cin);
     printf("Veuillez Entrer votre Nom : \t");
    scanf("%s",C[i].nom);
     printf("Veuillez Entrer votre Prenom : \t");
    scanf("%s",C[i].prenom);
     printf("Veuillez Entrer votre Montant : ");
    scanf("%f",&C[i].montant);
(*p)++;
i++;
j++;
    printf("\n");
}





void Afficher(Compte C[100],int *p,int i)
{
    int a=j;
    for(i=0;i<a;i++)
    {
        printf(" votre CIN : %s\n",C[i].cin);
    printf(" votre nom : %s\n",C[i].nom);
    printf(" votre prenom : %s\n",C[i].prenom);
    printf(" votre mantant : %.2f\n",C[i].montant);
    printf("\n");
    }

}

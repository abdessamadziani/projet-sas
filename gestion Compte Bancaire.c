#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
    void color(int couleurDuTexte,int couleurDeFond)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}



typedef struct
{
    char cin[20];
    char nom[20],prenom[20];
    float montant;

}Compte;
void AjouterCompte();
void AjouterComptes();
void Fidelisation();
void Chercher();
void Retrait();
void Depot();
void Affichage_Ascendant();
void Affichage_Descendant();
void Affichage_Ascendant_montant();
void Affichage_Descendant_montant();






 static int i,j=0,choix,ech,nben=0,a;
 static Compte C[100];


 int main()
{
    Beep(300,500);
    Beep(500,500);
    Beep(800,500);
    Beep(1000,500);
    Beep(1200,500);


       color(0,12);
    printf("\n\n*************************************************************************************************************************\n\n");

     color(5,0);
    printf("\t\t*****            *****      ************   ****         ***   ****         ****        \n");
    printf("\t\t****  **       ** ****     **************   ******        ***   ****         ****        \n");
    printf("\t\t****   **     **  ****    ***************  *** ***       ***   ****         ****        \n");
    printf("\t\t****    **   **   ****    *****             ***  ***      ***   ****         ****        \n");
    printf("\t\t****     ** **    ****    *****             ***   ***     ***   ****         ****        \n");
    printf("\t\t****      ***     ****    ***************   ***    ***    ***   ****         ****        \n");
    printf("\t\t****              ****    ***************   ***     ***   ***   ****         ****        \n");
    printf("\t\t****              ****    ***************  ***      ***  ***   ****         ****        \n");
    printf("\t\t****              ****    *****            ***       *** ***   ****         ****        \n");
    printf("\t\t****              ****   *****             ***        ******   ****         ****        \n");
    printf("\t\t****              ****   **************   ***         *****   ****         ****        \n");
    printf("\t\t****              ****     **************   ***          ****    ***         ***         \n");
    printf("\t\t****              ****      ************   ***           ***      ***********           \n");
  color(0,12);
    printf("\n*************************************************************************************************************************\n");
color(1,0);






    do
    {

        menu:
             //system("cls");
        printf("\t\t\t\t\n:::::::::::::::::::::::::: Menu Principale ::::::::::::::::::::::::::\n\n");
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
                AjouterCompte();



            }break;
        case 2:
            {
            AjouterComptes();
            }break;

        case 3:
            {


                do
                {
                     //system("cls");
                   printf("\n\t\t\t:::::::::::::::::::::::::: Operations ::::::::::::::::::::::::::\n\n\n");
                   printf("\t\t\t 1- Retrait \n");
                   printf("\t\t\t 2- Depot\n");
                   printf("\t\t\t 3- retour a menu  \n");
                   printf("\t Veuillez choisir une operation: \t");
                   scanf("%d",&choix);
                     switch(choix)
                {
                case 1:
                    {
                        Retrait();
                    }break;
               case 2:
                    {
                        Depot();
                    }break;
               case 3:
                   {system("cls");
                       goto menu;

                   }break;
                   }
                }while(choix!=3);
            }

        case 4:
            {


               do{

                   printf("\n\t\t\t:::::::::::::::::::::::::: Affichage ::::::::::::::::::::::::::\n");
                   printf("\t\t\t 1- Par Ordre Ascendant \n");
                   printf("\t\t\t 2- Par Ordre Descendant\n");
                   printf("\t\t\t 3- Par Ordre Ascendant (les comptes bancaires ayant un montant superieur a un chiffre introduit)\n");
                   printf("\t\t\t 4- Par Ordre Descendant (les comptes bancaires ayant un montant superieur a un chiffre introduit)\n");
                   printf("\t\t\t 5- Recherche Par Cin\n");
                   printf("\t\t\t 6- retour a menu\n");
                   printf("\t Veuillez choisir une operation: \t");
                   scanf("%d",&choix);
                   switch(choix)
                   {
                   case 1:
                    {
                        Affichage_Ascendant();
                    }break;
                  case 2:
                    {
                        Affichage_Descendant();
                    }break;
                  case 3:
                    {
                        Affichage_Ascendant_montant();


                    }break;
                  case 4:
                    {
                        Affichage_Descendant_montant();
                    }break;
                  case 5:
                    {
                        Chercher();
                    }break;
                  case 6:
                    {system("cls");
                        goto menu;
                    }break;

                    }

                    }while(choix!=6);




            }break;
        case 5:
            {
            Fidelisation();
            }break;
        case 6:
            {
                Beep(1200,500);
                Beep(1000,500);
                Beep(800,500);
                Beep(500,500);
                Beep(300,500);
    printf("\n\t\t->->->->->->-> Fin de Programme <-<-<-<-<-<-<-<-<-<\n");
            color(7,0);

            }break;



        }



    }while(choix!=6);


    return 0;
}

void AjouterCompte()
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
i++;
j++;
}
void AjouterComptes()
{
    do{
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
}

void Fidelisation()
{
int a=j;
Compte tmp;
ech=0;
 do
  {
    for(i=0;i<a-1;i++)
    {
     if(C[i].montant<C[i+1].montant)
      {
        tmp=C[i+1];
        C[i+1]=C[i];
        C[i]= tmp;

      }
    ech++;
}
}while(ech>0);
system("cls");

  printf("\n\t\t\t:::::::::::::::::::::::::: L'ffichage les 3 premier avent la fidelisation  ::::::::::::::::::::::::::\n");
for(i=0;i<3;i++)
    {
     printf(" Cin : %s  ,\tNom: %s  ,\t Prenom: %s  ,\t Montant : %.2f DH\n\n",C[i].cin,C[i].nom,C[i].prenom,C[i].montant);
     C[i].montant+=((C[i].montant*1.3)/100);
    }

}

void Chercher()
{
 int a=j;
 char x_cin[20];
 printf("Veuillez Entrer votre Cin: \t");
 scanf("%s",x_cin);
 int trouve=0;
 for(i=0;i<a;i++)
 {
    if(strcmp(x_cin,C[i].cin)==0)
        {
        trouve=1;
        break;
        }

 }
 if(trouve==1)
    {
        system("cls");
    printf("\nexiste :\n\n Cin : %s\t Nom :  %s\t Prenom : %s\t Montant: %.2f DH\n",C[i].cin,C[i].nom,C[i].prenom,C[i].montant);
    }
 else
printf("\n CIN n'existe pas \n");
}


void Retrait()
{
int a=j;
float s1;
char cin_user[20];
printf("entre votre Cin :\t");
d:
scanf("%s",cin_user);
for(i=0;i<a;i++)
    {

int c=strcmp(cin_user,C[i].cin);
 if(c==0)
    {
                    printf("combien :\n");
                    scanf("%f",&s1);
                    if(s1>C[i].montant)
            {
                system("cls");
                printf("\n impossible votre sold inferieur a %.2f DH\n",s1);
                return;
            }
      C[i].montant-=s1;
      printf("Retrait Avec Success\n");
      return;
    }


    }

    {
        printf("Cin n'existe pas\n");
        goto d;


    }
}

void Depot()
{
 int a=j;
 float s2;
 char cin_user[20];
printf("entre votre Cin :\t");
d:
scanf("%s",cin_user);
for(i=0;i<a;i++)
{
    int c =(strcmp(cin_user,C[i].cin));
  if(c==0)
    {
        printf("combien :\n");
        scanf("%f",&s2);
        C[i].montant+=s2;
        printf("Depot Avec Success\n");
        return;
    }


}
   {
        printf("\nCin n'existe pas :\n ");
        goto d;
    }

}

void Affichage_Ascendant()
{
a=j;
Compte tmp;
ech=0;
 do
    {
for(i=0;i<a-1;i++)
{
    if(C[i].montant>C[i+1].montant)
            {
        tmp=C[i+1];
        C[i+1]=C[i];
        C[i]= tmp;
            }
        ech++;
    }
    }while(ech>0);
system("cls");
printf("*************************************************************************************************************\n\n");
printf("\n\t\t\t:::::::::::::::: L'ffichage Par Ordre Ascendant ::::::::::::::::::\n");
 for(i=0;i<a;i++)
  {
    printf(" Cin : %s  ,\tNom: %s  ,\t Prenom: %s  ,\t Montant : %.2f DH\n\n",C[i].cin,C[i].nom,C[i].prenom,C[i].montant);
  }
  printf("************************************************************************************************************\n");

}

void Affichage_Descendant()
{
int a=j;
Compte tmp;
ech=0;
do
{
for(i=0;i<a-1;i++)
{
if(C[i].montant<C[i+1].montant)
{
tmp=C[i+1];
C[i+1]=C[i];
C[i]= tmp;
}
ech++;
}
}while(ech>0);
system("cls");
printf("**************************************************************************************************\n\n");
printf("\n\t\t\t:::::::::::::::::::::: L'ffichage Par Ordre Descendant  :::::::::::::::::::::\n");
for(i=0;i<a;i++)
{
    printf(" Cin : %s  ,\tNom: %s  ,\t Prenom: %s  ,\t Montant : %.2f DH\n\n",C[i].cin,C[i].nom,C[i].prenom,C[i].montant);
}
printf("***************************************************************************************************\n\n");

}


void Affichage_Ascendant_montant()
{
       int a=j;
                          printf("%d",a);

                        int x=0;
                        float x_montant;
                        printf("\n Veuillez entre un Montant: \t");
                        scanf("%f",&x_montant);
                        Compte new_c[100];
                        for(i=0;i<a;i++)
                        {
                            if(C[i].montant>x_montant)
                            {
                                new_c[x]=C[i];
                                x++;

                            }
                        }

                              Compte tmp;
                        ech=0;
                        do
                        {
                             for(i=0;i<x-1;i++)
                        {
                            if(new_c[i].montant>new_c[i+1].montant)
                            {
                                tmp=new_c[i+1];
                                new_c[i+1]=new_c[i];
                                new_c[i]= tmp;

                            }
                             ech++;

                             }

                        }while(ech>0);
                        system("cls");
                        printf("********************************************************************************************************************************\n");
                               printf("\n\t\t\t:::::::::::: L'ffichage Par Ordre Ascendant par apport le Mantant  %.2f d'une manier Ascendant ::::::::::::\n\n",x_montant);

                        for(i=0;i<x;i++)
                        {
                          printf(" Cin : %s  ,\tNom: %s  ,\t Prenom: %s  ,\t Montant : %.2f DH\n\n",new_c[i].cin,new_c[i].nom,new_c[i].prenom,new_c[i].montant);

                        }
                        printf("*********************************************************************************************************************************\n\n");

}

void Affichage_Descendant_montant()
{
             int a=j;
                          printf("%d",a);

                        int x=0;
                        float x_montant;
                        printf("\n Veuillez entre un Montant: \t");
                        scanf("%f",&x_montant);
                        Compte new_c[100];
                        for(i=0;i<a;i++)
                        {
                            if(C[i].montant>x_montant)
                            {
                                new_c[x]=C[i];
                                x++;

                            }
                        }
                                Compte tmp;
                        ech=0;
                        do
                        {
                             for(i=0;i<x-1;i++)
                        {
                            if(new_c[i].montant<new_c[i+1].montant)
                            {
                                tmp=new_c[i+1];
                                new_c[i+1]=new_c[i];
                                new_c[i]= tmp;

                            }
                             ech++;



                        }

                        }while(ech>0);
                        system("cls");
                        printf("****************************************************************************************************************************************\n");
                               printf("\n\t\t\t::::::::::::: L'ffichage Par Ordre Ascendant par apport le Mantant  %.2f d'une manier Descendant :::::::::::::\n\n",x_montant);

                        for(i=0;i<x;i++)
                         {
                          printf(" Cin : %s  ,\tNom: %s  ,\t Prenom: %s  ,\t Montant : %.2f DH\n\n",new_c[i].cin,new_c[i].nom,new_c[i].prenom,new_c[i].montant);

                        }
                      printf("*******************************************************************************************************************************************\n\n");



}
//last Version

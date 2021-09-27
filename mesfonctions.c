//
// Created by pmdau on 20/09/2021.
//
#include <stdio.h>

/*******
 * EX1 *
 *******/

int plusGrandEntier(){          /*methode en une fonction a activer uniquement avec la console*/
    int plusGrand = 0;
    int a = 0, b = 0;           /*variables muettes de transition*/
    printf("Saisir a :\n>");     /*acquisition des variables au clavier*/
    scanf("%d", &a);
    printf("Saisir b :\n>");
    scanf("%d", &b);
    if (a < b)
    {
        plusGrand = b;
        printf("Le plus grand entier est : %d", plusGrand);
    }
    else if (a > b)
    {
        plusGrand = a;
        printf("Le plus grand entier est : %d", plusGrand);
    }
    else
    {
        plusGrand = a;
        printf("Les deux entiers sont egaux : %d", plusGrand);/*par défaut les deux sont egaux donc je retourne l'un des deux*/
    }
    return 0;
}

/*******
 * EX2 *
 *******/

int perimetre (int l, int L){
    return 2 * l + 2 * L;
}

int aire (int l, int L){
    return L * l;
}

int afficherAireEtPerimetreRectangle (){
    int L = 0, l = 0;
    int aire = 0, perim = 0;        /*perim stocke la valeur du périmètre*/
    printf("Saisir la longueur du rectancle :\n>");
    scanf("%d", &L);
    printf("Saisir la largeur du rectancle :\n>");
    scanf("%d", &l);
    aire = L * l;
    perim = 2 * L + 2 * l;
    printf("Le perimetre de ce rectangle vaut : %d\n", perim);
    printf("L'aire de ce rectangle vaut : %d", aire);
    return 0;
}
/*******
 * EX3 *
 *******/

int ex3 (){
    int a = 3, n = 0;                 /*a vaut le nombre dont on cherche un multiple en l'occurence 3 et n est le nombre à saisir*/
    printf("Saisir un entier :\n>");
    scanf("%d", &n);
    if (n % a == 0)
    {
        printf("l'entier saisi est un multiple de 3\n");   /*si a est modifié la phrase sera fausse ce qui pose problème*/
    }
    else
    {
        printf("l'entier saisi n'est pas un multiple de 3\n");
    }
    if(n >= 10)
    {
        printf("l'entier est superieur ou egal a 10\n");
    }
    else
    {
        printf("l'entier est inferieur a 10\n");
    }
    return 0;
}

/*******
 * EX4 *
 *******/

#define LIMITE_ENFANT 12
#define LIMITE_JEUNE 17
#define LIMITE_ETUDIANT 27
#define LIMITE_SENIOR 65
#define TARIF_ENFANT 4
#define TARIF_JEUNE 6
#define TARIF_SENIOR 6
#define PLEIN_TARIF 9

int tarifBillet(void){
    int age = 0, etu = 0; /*etu represente le statut etudiant ou non du client (booléen)*/
    printf("Entrer l'age du futur spectateur :\n>");
    scanf("%d", &age);
    if (age < LIMITE_ENFANT)
    {
        printf("le prix du billet est : %d euros\n", TARIF_ENFANT);
    }
    else if (age >= LIMITE_ENFANT && age < LIMITE_JEUNE)
    {
        printf("le prix du billet est : %d euros\n", TARIF_JEUNE);
    }
    else if (age >= LIMITE_JEUNE && age < LIMITE_ETUDIANT)
    {
        printf("Etes vous etudiant ? (repondre 1 pour oui et 0 pour non)\n>");
        scanf("%d", &etu);
        while (etu != 0 && etu != 1)
        {
            printf("Le nombre saisi n'est pas valide, recommencez\n");
            scanf("%d", &etu);
        }
        if (etu == 1)
        {
            printf("le prix du billet est : %d euros\n", TARIF_JEUNE);
        }
        else if (etu == 0)
        {
            printf("le prix du billet est : %d euros\n", PLEIN_TARIF);
        }
    }
    else if (age >= LIMITE_SENIOR)
    {
        printf("le prix du billet est : %d euros\n", TARIF_SENIOR);
    }
    else
    {
        printf("le prix du billet est : %d euros\n", PLEIN_TARIF);
    }
    return 0;
}
/*******
 * EX5 *
 *******/

/*cette methode permet en cas de changement de boisson d'emplacement de changer facilement les noms*/
#define BOISSON_FROIDE_1 "pepsi"
#define BOISSON_FROIDE_2 "fanta"
#define BOISSON_FROIDE_3 "icetea"
#define BOISSON_CHAUDE_10 "chocolatchaud"
#define BOISSON_CHAUDE_11 "the"

int distributeur (){
    int i = 0;      /*numero entré par l'utilisateur*/
    printf("Taper le numero de la boisson :\n>");
    scanf("%d", &i);
    while ((i != 1) && (i != 2) && (i != 3) && (i != 10) && (i != 11))
    {
        printf("Le numero saisi n'est pas valide, reessayer : \n>");
        scanf("%d", &i);
    }
    switch (i)
    {
        case 1:
        {
            printf(BOISSON_FROIDE_1 "\n");
            break;
        }
        case 2:
        {
            printf(BOISSON_FROIDE_2 "\n");
            break;
        }
        case 3:
        {
            printf(BOISSON_FROIDE_3 "\n");
            break;
        }
        case 10:
        {
            printf(BOISSON_CHAUDE_10 "\n");
            break;
        }
        case 11:
        {
            printf(BOISSON_CHAUDE_11 "\n");
            break;
        }

    }
    return 0;
}

/*******
 * EX6 *
 *******/
/*méthode lourde mais securisée et progressive*/
float moyenne3n (){
    float note1 = 0, note2 = 0, note3 = 0, moy = 0;     /*moy = moyenne*/
    printf("Saisir la premiere note : \n>");
    scanf("%f", &note1);
    while (note1 < 0 || note1 > 20)
    {
        printf("La note saisie n'est pas valide\n");
        printf("Saisir la premiere note a nouveau : \n>");
        scanf("%f", &note1);
    }
    printf("Saisir la deuxieme note : \n>");
    scanf("%f", &note2);
    while (note2 < 0 || note2 > 20)
    {
        printf("La note saisie n'est pas valide\n");
        printf("Saisir la deuxieme note a nouveau : \n>");
        scanf("%f", &note2);
    }
    printf("Saisir la troisieme note : \n>");
    scanf("%f", &note3);
    while (note3 < 0 || note3 > 20)
    {
        printf("La note saisie n'est pas valide\n");
        printf("Saisir la troisieme note : \n>");
        scanf("%f", &note3);
    }
    moy = (note1 + note2 + note3) / 3;
    printf("La moyenne des trois notes vaut : %f\n", moy);
    return 0;
}

/*******
 * EX7 *
 *******/

int nombreTotalEleve (){
    int nbClasses = 0, nbEleves = 0, i = 0, n = 0;    /*i et n sont des variables qui permettent de stocker temporairement les données temporaires ou résultats*/
    printf("Saisir le nombre de classses ouvertes : \n>");
    scanf("%d", &nbClasses);
    for (i = 0; i < nbClasses; i++)
    {
        printf("Saisir le nombre d'eleves dans la classe %d :\n>", i + 1);
        scanf("%d", &n);
        nbEleves += n;
    }
    printf("Le nombre total d'eleves dans l'ecole est : %d\n", nbEleves);
    return 0;
}

/*******
 * EX8 *
 *******/

int ex8(){
    int n = 0;          /*n est le nombre à saisir*/
    printf("Saisir une nombre entier : \n>");
    scanf("%d", &n);
    while (n % 7 != 0 || n % 2 != 0)   /*on cherche ici un multiple de 7 et de 2*/
    {
        printf("resaisir un nombre entier different : \n>");
        scanf("%d", &n);
    }
    printf("le nombre est bien soit un multiple de 7 et de 2\n");
    return 0;
}

/*******
 * EX9 *
 *******/

int pyramide(){
    int nbb = 0, nbe = 0, i = 1;  /*nbb pour nombre de briques, et nbe pour nombre d'étages*/
    printf("Saisir le nombre de pierres disponnibles : \n>");
    scanf("%d", &nbb);
    if (nbb > 1)                      /*eviter le cas ou le nombre d'étages vaut -1*/
    {
        while (nbb >= i * i)          /* on utilise nbb comme etant le nombre de pierres restantes pour former un nouvel etage et il faut que ce soit superieur au nombre au carre suivant*/
        {
            nbb -= i * i;
            i += 1;
            nbe += 1;
        }
        nbe -= 1;
        printf("Le nombre d'etages complets qu'il sera possible de construire est : %d\n", nbe);
    }
    else if (nbb == 1)
    {
        nbe = 0;
        printf("Le nombre d'etages complets qu'il sera possible de construire est : %d\n", nbe);
    }
    else
    {
        printf("Le nombre entre n'est pas valide");
    }
    return 0;
}

/********
 * EX10 *
 ********/

float moyenne (){
    int n = 0, tot = 0, s = 0;    /*n est l'entier a saisir, tot est le nombre d'entiers saisis, s est la variable qui permet de stopper le programme*/
    float moy = 0;
    printf("Pour arreter la selection entrer un nombre negatif\n");
    while (s == 0)
    {
        printf("Saisir un entier :\n>");
        scanf("%d", &n);
        if (n < 0)
        {
            if (tot >= 1)
            {
                s = 1;
            }
            else
            {
                tot = 1;       /*eviter les division par 0*/
                s = 1;
            }
        }
        else
        {
            tot +=1;
            moy += n;
        }
    }
    moy = moy / tot;
    printf("La moyenne de ces nombres entiers vaut : %f\n", moy);
    return 0;
}

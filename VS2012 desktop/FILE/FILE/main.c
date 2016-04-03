#include <stdio.h>
#include <math.h>
#include <string.h>

main(){
    struct Rezultat {
        char fam[20];
        char name[15];
        int rez;    
    } Rez;
    int rez1;
    int rez2;
    struct Rezultat dig[100];
    struct Rezultat dig1[100];
    struct Rezultat tmp;
    int i,j,n,mm,st;

    printf("Введите число участников: \n");
    scanf("%d",&n);
    printf("Введите имена и результаты участников: \n");

    for (i = 0; i < n; i++ ){
        scanf("%s %s %d %d",Rez.fam,Rez.name,&rez1,&rez2);
        Rez.rez = rez1 + rez2;
        dig[i] = Rez;
    }
    /*заполняем второй массив неудачниками*/
    st = 0;
    for (i = 0; i < n; i++ ){
        if(dig[i].rez  < 60){
            dig1[st] = dig[i];
            st++;
        }
    }
    if( st == 0){
        printf("Все справились с заданием");
    }
    /*Сортируем массив неудачников в алфавитном порядке*/
    for (i = st - 1; i >= 0;i-- ){
        mm = 0;
        for (j = 0 ; j <= i ; j++){
            if (dig1[j].fam[0] > dig1[i].fam[0]){
                mm = j;
                tmp = dig1[i];
                dig1[i] = dig1[mm];
                dig1[mm] = tmp;
            }
        }
    }
    printf("\n") ;
    for (i = st - 1; i >= 0; i++ ){
        printf ("%s %s\n",dig1[i].fam,dig1[i].name);
    }
    return 0;
}
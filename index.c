#include <stdio.h>
#include <conio.h>
void main()
{
    int index,initial;
    printf("This Program Will Print whole table using do-while loops\n");
    printf("The table of number ? ");
    scanf("%d",&initial);
    index=1;
    do{
        printf("%d * %d = %d\n",initial,index,initial*index);
        index = index+1;
    }while (index<11);
    getch();    
}
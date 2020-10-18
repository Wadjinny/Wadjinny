#include <stdio.h>
int main(int argc, char const *argv[])
{
    int heure,minute;
    printf("taper l'heure:");
    scanf("%d",&heure);
    scanf("%d",&minute);
    if(heure==23 & minute==59){
        heure=00;minute=-1;
    }
    printf("Dans une minute, il sera %d h %d min",heure,minute+1);
    scanf("%d",0);
    return 0;
}

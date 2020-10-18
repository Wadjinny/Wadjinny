#include <stdio.h>
#include <math.h>
void fact(){
    printf("saisir le nombre :");
    int n;
    scanf("%d",&n);
    int p=1;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    printf("factorille de %d est %d",n,p);
}
void pgcd(){
    printf("saisir a,b :");
    int a,b,c,d;
    scanf("%d,%d",&a,&b);
    c=a;d=b;
    int r;
    do{
        r = c % d;
        c = d;
        d = r;
    }while (r != 0);
    printf("le pgcd de %d et %d est %d",a,b,c);
}
void equat(){
    printf("veuillez saisir a,b,c tel que ax^2+bx+c=0: ");
    float a,b,c;
    scanf("%f,%f,%f",&a,&b,&c);
    float delta=b*b-4*a*c;
    if(delta>0){
        printf("cette equation admet deux solution %f et %f ",(-b+sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
    }else if (delta==0)
    {
        printf("cette equation admet une solution %f :",-b/(2*a));
    }else
    {
        printf("cette equation n'a pas de solution");
    }
    
    
}

int main(int argc, char const *argv[])
{
    int choix;
    while(1){
        printf("\nveuillez choisir une des operations suivantes:\n 1-calcule de factorielle\n 2-calcule de pgcd\n 3-resourdre une equation du second degre: ");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
            fact();
            break;
        case 2:
            pgcd();
            break;
        case 3:
            equat();
            break;
        default:
            continue;
            break;
        }
        printf("\nVoullez vous refaire une operation 1/0: ");
        int exit;
        scanf("%d",&exit);
        if(!exit) {
            break;
        }
    }
    return 0;
}

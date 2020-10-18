#include <stdio.h>
int main(int argc, char const *argv[])
{   
    int jours,mois,annee;
    printf("taper le jours/mois/annee: ");
    scanf("%d/%d/%d",&jours,&mois,&annee);
    //si le jour 31 est atteint donc c'est sur le mois est fini
    if(jours==31){
        jours=0;
        if(mois==12){
            annee++;
            mois=0;
        }
        mois++;
    //si le jour est 30, il faut verifier le mois 
    }else if (jours==30)
    {
        if(mois==4 | mois==6 | mois==9 | mois==11){
            jours==0;mois++;
        }
    //le mois 2 est special, il faut verifier si l'années
    }else if (mois==2)      
    {
        //le jours 29 donc on peut procédé sans verifier
        if(jours==29){
            jours=0;mois++;
        //verifier si l'année n'est pas bissextile
        }else if (jours==28 & ((annee%4!=0 | annee%100==0)&annee%400!=0) )
        {
            jours=0;mois++;
        }
        
    }
    
    jours++;
    printf("Dans un jour, on sera le %d/%d/%d",jours,mois,annee);
    scanf("%d",&jours);
    return 0;
}

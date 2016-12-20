// practical set-7

#include<stdio.h>
#include<conio.h>
void STUD();
struct stud
{
    int roll;
    float sub[3];
    float Tot = 0;
}student[3];
main()
{
STUD();
getch();
}


void STUD(void)
{
int i,j;
char subname[3][10] = {"MATHS","PHYSICS","CHEMISTRY"};
for(i=0;i<3;i++)
{
printf("\nSTUDENT-%d\n",i+1);
printf("\nROLL NO.-");
scanf("%d",&student[i].roll);
for(j=0;j<3;j++)
{
    printf("\nEnter mark of %s\n",subname[j]);
    scanf("%f",&student[i].sub[j]);
    student[i].Tot += student[i].sub[j];

}
/*printf("\nMARK OF MATHS-");
scanf("%f",&student[i].sub1);
printf("\nMARK OF PHYSICS-");
scanf("%f",&student[i].sub2);
printf("\nMARK OF CHEMISTRY-");
scanf("%f",&student[i].sub3);*/
}
printf("\nRoll no.\tMATHS\tPHYSICS\tCHEMISTRY\tTOTAL\n");
for(i=0;i<3;i++)
{
printf("%8d\t%5.2f\t%7.2f\t%9.2f\t%5.2f\n",student[i].roll,student[i].sub[0],student[i].sub[1],student[i].sub[2],student[i].Tot);
}
}

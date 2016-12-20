#include<stdio.h>
#include<conio.h>

main()

{
    char str1[50];
    FILE *f1;
    gets(f1);
    f1 = fopen("STR","w");
    fputs(str1,f1);
    fclose(f1);
    printf("1");
    f1 = fopen("STR","r");
//    fgets(f1);
    fclose(f1);

}

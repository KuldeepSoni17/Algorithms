#include <stdio.h>

main() {

   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );
   char s[100];
   gets(s);
   //s = __TIME__;
   puts(s);

}

#include<stdio.h>
#include<string.h>
struct opd{
    int member;
    char pn[199];
    int pia;
    char dr[100];
    char d[200];
};
int main(){
struct opd s3;
s3.member=1;
strcpy(s3.pn,"aniket");
s3.pia=35;
strcpy(s3.dr,"bansal"); 
strcpy(s3.d,"11jan");
printf("%d %s %d %s %s",s3.member,s3.pn,s3.pia,s3.dr,s3.d);
return 0;
}
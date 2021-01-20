#include<stdio.h>
int main()
{
 int x=7,y=9;
 x=x+y;//x=7+9=16
 y=x-y;//y=16-9=7
 x=x-y;//x=16-7=9
 printf("after swapping: x=%d,y=%d",x,y);
return 0;
}

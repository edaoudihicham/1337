
#include <stdio.h>
#include <string.h>
// int main ()
// {
//     int x = 0;
//     unsigned char *p = (unsigned char *)&x;

//     memset(&p[0],57,1);
//     memset(&p[1],5,1);
//     memset(&p[2],0,2);

//     printf("%d",x);
// }
int main ()
{
    int x = 0;

    memset(&x,0,4);
    memset(&x,7,2);
    memset(&x,202,1);

    printf("%d",x);
}

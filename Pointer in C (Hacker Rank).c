#include <stdio.h>

void update(int *a,int *b)
{
    *a=*a+(*b);
    *b=(*a)-(*b)-(*b);
    if(*b<0)
    *b=*b*(-1);
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


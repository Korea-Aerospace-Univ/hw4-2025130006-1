#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, cnt = 0;
    scanf("%d", &a);
  
    do {
        scanf("%d", &b);
        cnt++;
        if (a > b) printf("%d<%d\n",b, a); 
        if (a < b) printf("%d>%d\n", b, a);
    } while (b != a);
    
    printf("%d==%d\n", a, b);
    printf("%d", cnt);
    
    return 0;
}

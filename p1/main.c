#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, cnt = 0;
    scanf("%d", &a);
  
    do {
        scanf("%d", &b);
        cnt++;
        if (a > b) printf("%d<?\n",b); 
        else if (a < b) printf("%d>?\n", b);
        else printf("%d==?\n", b);
    } while (b != a);
    
    printf("%d", cnt);
    
    return 0;
}

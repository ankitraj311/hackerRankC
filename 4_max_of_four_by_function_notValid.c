#include <stdio.h>








int max_of_four(int a, int b, int c, int d)
{
  if(a>b&&b>c&&c>d)
    return a;  
  if(b>a&&b>c&&d>d)
    return b;
  if(c>a&&c>b&&c>d)
    return c;
  if(d>a&&d>b&&d>c)
    return d;  
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

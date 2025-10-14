#include <stdio.h>
    int main(){
        int x, y;
        scanf("%d %d", &x, &y);
            while (x < y)
            {
                if (x % 5 == 2||x % 5 == 3){
                    printf("%d\n", x);
                }
                x++;
            }
    return 0;
}
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        if(i >= 2){
            int cnt = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    cnt++;
                }
            }
            if(cnt == 2){
                printf("%d ", i);
            }
        }
    }
    printf("\n");
    return 0;
}


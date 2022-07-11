#include <stdio.h>

int main(){
    int n,m;
    int i;
    int great = 0,least=0;

    scanf("%d %d", &n,&m);

    for(i = 1 ; i <= n && i <= m ; i++){
        if(n%i == 0 && m%i == 0){
            great = i;
        }
    }

    least = n*m/great;

    printf("%d %d\n",great,least);

}
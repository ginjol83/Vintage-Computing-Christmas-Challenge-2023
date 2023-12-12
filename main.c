#include <stdio.h>
int main()
{
    const char str1[100]="       *     *     *             * *   * *   * *           *   * *   * *   *         *     *  ";
    int x,y,z=0;

    for(y;y!=3;y++){
        for(x;x!=(z+27);x++){
            printf("%c",str1[x]);
        }
        z=z+27;
        printf("\n");
    }
    x=z-28;
    z=x;
    for(y;y!=0;y--){
        for(x;x!=(z-27);x--){
            printf("%c",str1[x]);
        }
        z=z-27;
        printf("\n");
    }

    return 0;
}
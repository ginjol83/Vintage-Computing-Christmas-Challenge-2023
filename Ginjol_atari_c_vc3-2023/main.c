#include <stdio.h>
int main(){
    const char c1[22]="   *     *     *   \n";
    const char c2[22]="  * *   * *   * *  \n";
    const char c3[22]=" *   * *   * *   * \n";
    const char c4[22]="*     *     *     *\n";
    const char c5[22]="   *     *     *   ";
    printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",c1,c2,c3,c4,c3,c2, c1,c2,c3,c4,c3,c2, c1,c2,c3,c4,c3,c2, c5);
    return 0;
}
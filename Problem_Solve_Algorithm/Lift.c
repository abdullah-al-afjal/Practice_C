#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        int z;
        if (x <= y) {
            z = (y - x) * 4 + x * 4 + 10 + 9;
          
        } else{
            z = (x - y) * 4 +x* 4 + 10 + 9;
            
        }
        printf("Case %d: %d\n", i, z);
    }
}

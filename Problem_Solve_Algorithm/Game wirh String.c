#include <stdio.h>


int main() {
    char s[100001]; 
    scanf("%s", s);

    int count[26] = {0}; 

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    int oddCount = 0; 

    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            oddCount++;
        }
    }
    if (oddCount <= 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

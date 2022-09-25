#include<stdio.h>
#include<math.h>
#include<string.h>




int main() {

    int a, b;
    char* str[10] = { "zero","one", "two", "three", "four",\
        "five", "six", "seven", "eight", "nine"};
    scanf("%d",&a);
    scanf("%d",&b);
    
    for(int i = a; i <= b; i++) {
        
        if(i > 9) {
            if(i % 2 == 0)
                printf("even\n");
            else printf("odd\n");
        }
        else {
            printf("%s\n",str[i]);
        }
    }
    return 0;
}

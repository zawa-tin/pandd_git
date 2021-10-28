#include <stdio.h>

int main() {
    int a, b;
    char c;

    scanf("%d %c %d",&a,&c,&b);

    if(c=='+'){
		printf("%d\n",a+b);
	}

    if(c=='-'){
		printf("%d\n",a-b);
	}

    if (c == '/') {
        if(b == 0) print("Error!!!\n");
        print("%lf\n", (double)a / (double)b);
    }
	
	return 0;
}
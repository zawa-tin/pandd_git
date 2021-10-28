#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, i, ans = 1;
    char c;

    scanf("%d %c %d",&a,&c,&b);

    if(c=='+'){
		printf("%d\n",a+b);
	}

    if(c=='-'){
		printf("%d\n",a-b);
	}


    if (c == '/') {
        if(b == 0) printf("Error!!!\n");
        printf("%lf\n", (double)a / (double)b);
    }
	

    if(c=='*'){
		printf("%d\n",a*b);
	}


    if (c == 'p') {
        if (a < b) {
            printf("error!\n");
            exit(1);
        }

        for (i = a ; i > a - b ; i--)
            ans *= i;

        printf("%d\n", ans);
    }

    if(c=='^'){
		int ans=1;
		for(int i=0;i<b;i++){
			ans*=a;
		}
		printf("%d\n",ans);
	}


	return 0;
}

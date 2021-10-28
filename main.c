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
	

    if(c=='*'){
		printf("%d\n",a*b);
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

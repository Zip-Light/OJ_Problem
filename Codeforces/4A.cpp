#include<cstdio>

using namespace std;

int main()

{

    int t;
    scanf("%d",&t);

    if(t==2)
        printf("NO\n");
    else if(t%2==0){
        int a=t/2;

        printf("YES\n");
        }
    else
        printf("NO\n");
    return 0;
}

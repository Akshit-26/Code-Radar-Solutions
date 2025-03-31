#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int larg1=a[0];
    for (int j=0;j<n;j++) {
        if (a[j]>larg1) 
            larg1=a[j];
        }
    int larg2=a[0];
    for (int k=0;k<n;k++) {
        if (a[k]>larg2) {
            if (a[k]==larg1) {
                continue;
            }
            else
            larg2=a[k];
        }
        
    }
    printf("%d",larg2);
    return 0;
}
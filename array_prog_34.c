/* Array program 34

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){ int n; if(scanf("%d",&n)!=1) return 0; int k; scanf("%d",&k); int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]); for(int i=0;i+k<=n;i++){ int mx=a[i]; for(int j=i;j<i+k;j++) if(a[j]>mx) mx=a[j]; printf("%d ", mx); } printf("\n"); return 0; }
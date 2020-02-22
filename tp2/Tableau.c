#include "stdio.h"
#include "stdlib.h"

int maximum(int *t, int n){
  int max=t[0];
  for(int i=1;i<n;i++){
    if(max<t[i]){
      max=t[i];
    }
  }
  return max;
}

void f(int a, int b, int *s, int *p) {
*s = a + b;
*p = a * b;
}

void minmax(int *t, int n, int *pmin, int *pmax){
	*pmax = maximum(t,n);
	int min=t[0];
  	for(int i=1;i<n;i++){
    	if(min>t[i]){
     	min=t[i];
 	 	}
 	}
 	*pmin=min;
}

int copie(int *tab, int n,int *tab2){
	for (int i = 0; i < n; i++) {
		tab2[i] = tab[i];
	}
}

int* unsurdeux(int *tab, int n){
	int *tab2;
	int a=0;
	tab2 = malloc(sizeof(int) * 10);
	for (int i = 0; i < n; i++) {
		if (i%2==0){
			tab2[a] = tab[i];
			a++;
		}
	}
	return tab2;
}

void main(){
 	int t[10]={2,4,4,14,3,75,1,2,4,4};
	/*int max, min;
	minmax(t, 10, &min, &max);
	printf(" max = %i, min = %i\n", max, min);*/
	int *p=unsurdeux(t, 10);
	for (int i = 0; i < 5; ++i){
		printf("%d |", *(p+i));
	}
	free(p);
}

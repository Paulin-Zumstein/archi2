#include <stdio.h>
#define MESSAGE "Super\n"
/*int dbl(int n){
  return 2*n;
}
int main() {
  //printf("rsultat: %i\n", dbl(4));
	int tab[3];
	tab[0]=1;
	tab[1]=2;
	printf("%i\n",tab[0]);
	printf("%i\n",tab[1]);
	printf("%i\n",tab[2]);
	printf("%i\n",tab[3]);
}
#include <stdio.h>
int main() {
	int a, *b;
	a = 12;
	b = &a;
	*b = a + 1;
	printf("a = %i, b = %lu\n", a, (long unsigned) b);
}
int main(){
	float tab[2];
	printf("%lu\n", (long unsigned)&tab[0]);
	printf("%lu\n", (long unsigned)&tab[1]);
	printf("%lu\n", (long unsigned)&tab[2]);
}
#include <stdio.h>
int main() {
int t[2];
printf("Premiere adresse: %i, seconde adresse: %i\n", (int)t,
(int)(t+1));
}

erxercice 14 
#include <stdio.h>
int main() {
int t[2];
printf("Premiere adresse: %i, seconde adresse: %i\n", (int)t,
(int)(t+1));
}

exercice 15,16

int main(){
  int i;
  for (i=1; i<=100; i++){
    if (i%3!=0 && i%7!=0){
      printf("%i",i);
    }
  }
}

exercice 17

int main(){
  int i=13195;
  while (i%2262!=0 || i%13195!=0){
    i++;
  }
  printf("%i",i);
}

exercice 18

int main() {
  char chaine[80];
  int i=0;
  printf("Entrez une chane: ");
  fgets(chaine, 80, stdin);
  fputs(chaine, stdout);
  while(chaine[i]!='\0'){
    i++;
  }
  i--;
  printf("%i",i);
}

exercice/question 19

int palindrome(char *chaine){
  char indice;
  int i=0, p;
  while(chaine[i]!='\0'){
    i++;
  }
  i--;
  for(p=0;p<=i/2;p++){
    if(chaine[i-p-1]!=chaine[p]){
      return 0;
    }
  }
  return 1;
}

int main() {
  char chaine[80];
  printf("Entrez une chaine: ");
  fgets(chaine, 80, stdin);

  printf("\n %i \n",palindrome(chaine));

}

exercice 20,21*/

int main() {
  int i=0;
  FILE *f;
  f = fopen("message.txt","r");
  while (1) {
    i = fgetc(f);
    if(i==90 || i==122){
      i=i-26;
    }
    if(i!=32){
      i++;
    }
    if (feof(f)) {
      break;
    }
    fputc(i,stdout);
  }
  printf("\n");
  fclose(f);


}

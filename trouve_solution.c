#include<stdio.h>

#define N 4
#define M 16
typedef enum {faux,vrai} booleen;

/*si la grille a cette lettre, la fonction retourne vrai, sinon c'est faux*/
int existe_lettre(char c,char matrice[N][N]) {
	int i,j;
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			if(matrice[i][j]==c) {
				return vrai;
			}
		}
	}
	return faux;
} 

/*si la lettre existe est à côté de l'autre lettre existe, elle retourne vrai
ces lettres peuvent consister un mot*/
int cote_lettredemot(char c, char x)
{
	
}
int chercher_mot(char matrice[N][N])
{
	FILE *fic;
	fic=fopen("Dictionaire.txt","r");
	int i,j;
	int marque1=0,marque2=0;
	int somme_lettre=0;
	char dictionaire[M];
	while(dictionaire[i]=fgetc(fic)&&dictionaire[i]!='\n') {
	i++;
	marque1=i;
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			//chercher les lettres dans la grille
			if(existe_lettre(dictionaire[marque2],matrice)==vrai) {
				somme_lettre++;
				marque2++;
			}
			if(marque1==marque2) {
				break;
			}
		}
	}//la possibilité du mot existe
	/*examiner ces lettres peuvent consister ce mot*/
	
	fclose(fic);
	return 0;
}

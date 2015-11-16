#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** Fonction qui prend en entrée la chaîne de structure du mot et qui renvoie le score **/

int score_mot (char mot[]) {
	int i = 0; 
	int total = 0;

	int multipl = 1;	//variable contenant le multiplicateur de mot
	while ( i < strlen(mot)) {
		if (mot[i+2]=='L') {
			if (mot[i+3]=='D') {
				total= total + ((mot[i+1]%48)*2);
			} else if (mot[i+3]=='T') {
				total = total + ((mot[i+1]%48)*3);
			}
		} else if (mot[i+2]=='M') {
			if (mot[i+3]=='D') {
				total+= (mot[i+1]%48);
				multipl *= 2;
			} else if (mot[i+3]=='T') {
				total+= (mot[i+1]%48);
				multipl *= 3;
			}
		} else {
			total = total + (mot[i+1]%48);
		}
		i = i +4;
	}
	total = total *multipl;
	return total;
}

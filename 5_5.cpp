#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char S[100], T[100] ;
	int dem[256] ={0}, i;
	fgets(S, sizeof(S), stdin);
	fgets(T, sizeof(T), stdin);	
	for(i=0; i<strlen(S)-1; i++) dem[S[i]] = dem[S[i]]+ 1;
	for(i=0; i<strlen(T) -1 ; i++) dem[T[i]] = dem[T[i]] + 1;

	for (i =0; i<256;i++)
		if(dem[i]!=0)
			printf("%c", i);

	for (i=0; i<256; i++){	
		
			if(dem[i]!=0)
			
			    printf("\n%d", dem[i]);
		
	    
	}

    return 0;
}


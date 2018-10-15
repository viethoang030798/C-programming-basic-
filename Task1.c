/* Scan in a sentence and separate it into words, 
  display each word in one line. */
#include <stdio.h>
#include <string.h>
int main(void){
    int i;
	char sentence[100];
	printf("Enter sentence: ");
	fgets(sentence,100,stdin);
    for(i=0;i<=strlen(sentence);i++)
    {
       printf("%c", sentence[i] );
       if (sentence[i] ==' ')
       {
          printf("\n");
	   }
	}

}

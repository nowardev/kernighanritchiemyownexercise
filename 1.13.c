// nowardev histogram frequency char
 
#include <stdio.h>
main(){
	int i,j, c, max, maxtag;
	int ndigit[97]; //just normal char 
	max = 0 ; 
	for (i = 0 ; i <= 96 ; ++i ){
	 ndigit[i] = 0;
 
	}
	
	while ( (c =  getchar()) != EOF)	{
			j=0 ;
			for (i = 32 ; i <=127 ; ++i ){
				 
				if (i == c ){ //every char it's a number so we can test in this way 
					++ndigit[j];
				}
				++j; 
			}
	}
 
 


 
// we need to find max  to draw a histogram 

		for (i = 0 ; i <=96 ; ++i ){
			if (max <= ndigit[i]){
				max = ndigit[i];
				maxtag = i ; 
			}
		}
printf("\n Max value is : %d for char \"%c\" \n", max , maxtag );
	
	for (i = max ; i >= 0 ; --i ){
		//print first line
// 		printf(" thi is the first line \n");
		for (j = 0 ; j <= 96 ; ++j ){
			if (ndigit[j] >= i && i != 0 ){
				
				printf("%c",26);  
			}
			else {
			printf("%c" , 32 );	
			}
		}
		printf("\n");

	}
// print char last job 	

	for (i = 32 ; i <= 126 ; ++i ){
		printf("_"  );
		}
	printf("\n");
//print char
	for (i = 32 ; i <= 127 ; ++i ){
		printf("%c", i  );
		}

		printf("\n");
		printf("\n");
	j=0; 
	printf("char:\tfrequency:\n" );
	for (i = 32 ; i <= 127 ; ++i ){
		
		if (ndigit[j] !=0 ){
			printf("%c\t%d \n", i,  ndigit[j] );
			
		}
		++j;
	}
}
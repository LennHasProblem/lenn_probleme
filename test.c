#include<stdio.h>
#include<stdlib.h>

int main(void){
	setbuf(stdout,NULL);

	const double AmodFix = 2;
	double Amod = AmodFix;
	int g, h, i, j;
	float Jmin, Jmax;
	float extreme = 1.3;
	int counter = 0;

	for(g = 0; g < 8; g++){

		for(h = 0; h < 2; h++){
			
			counter++;
			
			for(i = 0; i < 13; i++){
				
				printf("|i#%d\t|", i);
	
				for(j = 0; j < 90; j++){
					
					Jmax = j+1;
					Jmin = j-1;
							
					if(Amod > Jmin && Amod < Jmax){
						printf("o");
					}else{
						printf(".");
					}
				}
					
				if(counter % 2 == 1){
					Amod*=extreme;
				}else if(counter %2 == 0){
					Amod*=(1-(extreme-1));
				}
		
				printf("%lf", Amod);
				printf("\n");
			}

			if(counter % 2 == 1){

			}else if(counter %2 == 0){
				Amod = 0.586906;
			}
		}
		
		Amod = AmodFix;
	}

	return(0);
}

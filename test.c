#include <stdio.h>
#include <math.h>
int main() 
{
	float q;
	for (float x=1; x<=3; x+=1.3){
    	for (float y=2; y<=4; y+=1.5)
		{
        	if (x/y<1)
			{
            	q = fminf(
							(pow(exp(1.0), 2) * cos(M_PI*x*x) - y), 
							(tan(M_PI/2 - (x*y*y - (1/ pow(x,1/3)))) )
					);
            }
        	else
			{
            	q=x*y-x*x-y*y;
        	}
        	printf("when x=%.2f and y=%.2f, f(x,y)=%.2f\n", x,y,q);
        }
    }
	return 0;
}


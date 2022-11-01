#include<stdio.h>

int f;
float c;

int main() {
	for (f=50; f<66; f++){
		c = 0.56 * (f-32);
		printf("Fahrenheit: %d \n",f);
		printf("Celsius: %.2f \n",c);
	}
	
	return 0;
}


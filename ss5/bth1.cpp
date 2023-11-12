#include<stdio.h>
#include<math.h>
int main () {
    int a,b,c;
    float x1,x2,x;
    printf (" nhao a b c : ");
     scanf (" %d %d %d", &a, &b, &c);
    if (a == 0) {
    	if (b == 0) {
    		if (c == 0) {
    			printf ("phuong trinh co vo so nghiem");
			} else printf ("phuong trinh vo nghiem");
		} else ("phuong trinh co nghiem x= la %.2f", -c/b);
	} else  {
	int delta = b*b - 4*a*c;
	if (delta == 0) {
		printf (" phuong trinh co nghiem kep x= %.2f", -b/(2*a));
	} else if (delta < 0) {
		printf ("phuong trinh vo nghiem"); 
	} else printf (" phuong trinh co 2 nghiem x1 = %.2f, x2 = %.2f", (-b+sqrt(delta))/(2*a) , (-b-sqrt(delta))/(2*a ) );
	}
}

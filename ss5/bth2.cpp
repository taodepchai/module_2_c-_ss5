#include<stdio.h>
int main () {
	long revenue;
	printf ("nhap tong doanh thu cua dai li ");
	 scanf ("%d", &revenue);
	if ( revenue > 300000000) {
	    printf ( "tien hoa hong cua dai li la %.2f", revenue*0.2);
	} else if( revenue > 100000000) {
		printf ( "tien hoa hong cua dai li la %.2f", revenue*0.1);
	} else printf ( "tien hoa hong cua dai li la %.2f", revenue*0.05);
}

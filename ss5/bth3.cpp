#include<stdio.h>
int main () {
	int minutes, price = 25000;
	printf (" so phut dung dien thoai cua thang nay ");
	 scanf ("%d", &minutes);
	if (minutes > 200) {
		printf ("gia cuoc dien thoai trong thang la %d" ,price + (50*600 + 150*400 + 200*200 + (minutes - (50+150+200)*100) ));
		
	} else if (minutes > 150) {
		printf ("gia cuoc dien thoai trong thang la %d" ,price + (50*600 + 150*400 + (minutes - (50+150)*200) ));
	} else if (minutes > 50)  {
	    printf ("gia cuoc dien thoai trong thang la %d" ,price + (50*600  + (minutes - (50)*400) ));
	} else printf ("gia cuoc dien thoai trong thang la %d" ,price + minutes * 600 );
}


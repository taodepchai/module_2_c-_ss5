#include <stdio.h>
int main (){
	float luong,thue;
	printf("nhap luong:");
	scanf("%f",&luong);
	if(luong>0&&luong<5){
		thue=luong*5/100;
	}else if(luong>5&&luong<=10){
		thue=luong*10/100;
	}else if(luong>10&&luong<=18){
		thue=luong*15/100;
	}else if(luong>18&&luong<=32){
		thue=luong*20/100;
	}else if(luong>32&&luong<=52){
		thue=luong*25/100;
	}else if(luong>52&&luong<=80){
		thue=luong*30/100;
	}else if(luong>80){
		thue=luong*35/100;
	}
	printf("thue phai nop:%.2f\n",thue);
	printf("tien luong con lai:%.2f",luong-thue);
}

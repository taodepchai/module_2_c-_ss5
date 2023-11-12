#include<stdio.h>
int main(){
int thang,ngay;
	printf("nhap thang:");
	scanf("%d",&thang);
	printf("nhap ngay:");
	scanf("%d",&ngay);
	if(thang==3&&ngay>=21&&ngay<31||thang==4&&ngay<=20&&ngay>0){
	printf("cung bach duong");
	}else if(thang==4&&ngay>=21&&ngay<30||thang==5&&ngay<=20&&ngay>0){
	printf("cung kim nguu");
	}else if(thang==5&&ngay>=21&&ngay<31||thang==6&&ngay<=21&&ngay>0){
	printf("cung song tu");
	}else if(thang==6&&ngay>=22&&ngay<30||thang==7&&ngay<=22&&ngay>0){
	printf("cung cu giai");
	}else if(thang==7&&ngay>=23&&ngay<31||thang==8&&ngay<=22&&ngay>0){
	printf("cung su tu");
	}else if(thang==8&&ngay>=23&&ngay<31||thang==9&&ngay<=22&&ngay>0){
	printf("cung su nu");
	}else if(thang==9&&ngay>=23&&ngay<30||thang==10&&ngay<=23&&ngay>0){
	printf("cung thien binh");
	}else if(thang==10&&ngay>=24&&ngay<31||thang==11&&ngay<=22&&ngay>0){
	printf("cung bo cap");
	}else if(thang==11&&ngay>=23&&ngay<30||thang==12&&ngay<=21&&ngay>0){
	printf("cung nhan ma");
	}else if(thang==11&&ngay>=23&&ngay<30||thang==1&&ngay<=19&&ngay>0){
	printf("cung ma ket");
	}else if(thang==1&&ngay>=20&&ngay<31||thang==2&&ngay<=18&&ngay>0){
	printf("cung bao binh");
	}else if(thang==2&&ngay>=19&&ngay<29||thang==3&&ngay<=30&&ngay>0){
	printf("cung song ngu");
	}
}
	

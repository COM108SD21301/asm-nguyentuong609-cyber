#include <stdio.h> 
#include <math.h>
#include <stdlib.h>//Thieu thu vien se bi canh bao ve ham Exit

void tinhTienKaraoke(){
	int time; 
}

int main(){
	int luaChon; //kiểu số nguyên
	do{
		printf("\nChào mừng bạn đến với ASM của tôi");
		printf("\nNhập 1: Lựa chọn chức năng Số nguyên");
		printf("\nNhập 2: Lựa chọn chức năng tìm UCLN và BCNN");
		printf("\nNhập 3: Lựa chọn chức năng Tính tiền quán Karaoke");
		printf("\nNhập 4: Lựa chọn chức năng Tính tiền điện");
		printf("\nNhập 0: Thoát chương trình");
		printf("\nMời bạn nhập lựa chọn: ");	scanf("%d",&luaChon);
		switch(luaChon){
			case 1:{
                printf("Bạn chọn CN1\n");
				float x;
                printf("Mời bạn nhập số thực: "); scanf("%f", &x);
                if(x == (int)x) printf("%f là số nguyên\n", x);
                else printf("%.2f là số thực\n", x);
                break;
			}case 2:{
                printf("Bạn chọn CN2\n");
                int x,y;
				break; //Ket thuc chuc nang 2
			}case 3:{
				printf("Bạn chọn CN3\n");
				break;	//Ket thuc chuc nang 3
			}case 4:{
				printf("Bạn chọn CN4\n");
				break; //Ket thuc chuc nang 4
			}case 6:{//Lai suat co dinh 5%, thoi gian tra no la 12 thang
                printf("Bạn chọn CN6\n");
				break; //Ket thuc chuc nang 6
			}case 8:{
				//add 8.2 vào đây
                printf("Bạn chọn CN8\n");
				break; //Ket thuc chuc nang 8
			}case 0:{ //Ket thuc
				printf("Thoát chương trình\n");
				break;
			}default: printf("\nLựa chọn không hợp lệ!\n"); break;  
		}
	// Dừng màn hình
    
	} while (luaChon != 0);
	system("pause"); // hoặc getchar();
	return 0;
}
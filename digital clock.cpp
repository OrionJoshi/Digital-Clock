//Digital clock in c++ programming
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void){
	
	int h=0,m=0,s=0;
	printf("Enter time in format of HH MM SS");
	scanf("%d%d%d",&h,&m,&s);
	
	start:
		for(h;h<=24;h++){
			for(m;m<60;m++){
				for(s;s<60;s++){
					system("cls");//for clean screen
					printf("\n\n\n\n\n\t\t\t\t\t\t\t\t %d:%d:%d",h,m,s);
					
					//for delaying  the clock
					for(double i=0;i<99999900;i++){
						i++;
						i--;
					}
				}
				s=0;
			}
			m=0;
		}
	goto start;
	
	
	getch();
	return 0;
}

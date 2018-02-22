#include<stdio.h>
int main()
{
	int l,b,h,TSA,VOLUME;
	scanf("%d\t%d\t%d\t",&l,&b,&h);
	TSA=2*(l*b+b*h+h*l);
	VOLUME=l*b*h;
	printf("TSA=%dcm^2",TSA);
	printf("\nVOLUME=%dcm^3",VOLUME);
	return 0;
}

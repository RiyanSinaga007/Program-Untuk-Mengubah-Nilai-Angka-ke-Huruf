#include<stdio.h>
#include<stdlib.h>
main()
{
	int a;
	printf("Masukkan Angka : ");
	scanf("&i",&a);
	
	if (a>80&&a<=100)
	printf("Nilai Huruf Adalah A\n");
	else if (a>60&&a<=80)
	printf("Nilai Huruf Adalah B\n");
	else if (a>55&&a<=60)
	printf("Nilai Huruf Adalah C\n");
	else printf("NIlai Huruf Adalah E\n");
	
	system("pause");
	return 0;
}

#include<stdio.h>
int main()
{
	int dongu,secenek;                      					/* While ile d�ng� yapacak bir men� yapmak i�in ko�ulu do�ru olan bir e�itlik ile d�ng�ye giriyoruz. */
	dongu=1;
	while(dongu && 1 == 1)										/* dongu=1 ise ko�ul sa�lan�r ve while d�ng�s�ne girer. E�er dongu=0 ise while sa�lanamaz ve program sonlan�r. */
	{
		printf("\n---- MENU ----\n");							/* Ekrana Men� bas�ld�. */
		printf("1. Yildizlardan elmas ciz\n");	
		printf("2. Ogrenci bilgisini goster\n");	
		printf("0. Cikis\n\n");		
		printf("Seceneginiz:");           		 				 /* Kullan�c�dan yapmak istedi�i i�lemi sorup girdi�i de�ere g�re if parametresini uygula. */
		scanf("%d", &secenek);
		printf("\n");
		
		if(secenek == 1)										/* 	Kullan�c� se�enek 1 i se�erse ekrana y�ksekli�e ba�l� olarak elmas �izilecek. */ 
		{
 			int yildiz,yildiz_tut,satir_tut,satir,yukseklik;
 			printf("Yuksekligi giriniz:");						/* Kullan�c�ya elmas�n y�ksekli�ini sor */
   			scanf("%d", &yukseklik);
			while((yukseklik%2)==0)								/* Girilen say� �iftse kullan�c�dan tek say� girmesini iste. */
			{
				printf("\nLutfen tek sayi giriniz:");
				scanf("%d",&yukseklik);
			 }
	
			if((yukseklik%2)==1)								/* Y�ksekli�in tek say� oldu�unu do�ruluyor. */
			{
	 			satir=((yukseklik+1)/2);						/* Sat�r say�s�n� satir a tan�ml�yorum �st k�s�m i�in (y�kseklik+1)/2 form�l�nden !Alt k�s�m i�in for d�ng�s�nden ��k�nca de�i�ecek. */
 				/* Elmas�n orta dahil �st k�sm�n� yazan kod */
				for(yildiz=1; yildiz<=yukseklik; yildiz++)		/* Girilen y�kseklik say�s� kadar for d�ng�s�n� d�nd�r */
				{
 					yildiz_tut=yildiz;								/* yildiz de�erini yildiz_tut 'ta tut ��nk� i�erdeki for da yildiz �zerinden d�necek ve yildiz de�eri s�rekli de�i�ebilir */
 					satir_tut=satir;							/* Satir say�s� da de�i�ebilece�inden satir_tut ta satir say�s�n� tut*/
 					for(satir; 0<satir; satir--)				/* Elmas�n �st k�sm� i�in satir say�s� (n+1)/2 idi satir say�s� kadar bo�luk b�rak�lacak */
					{
 						printf(" ");
	 				}
					for(yildiz; 0<yildiz; yildiz--)				/* Elmas�n �st k�sm� i�in 1. sat�rda 1 * olmak �zere her sonraki sat�r i�in +2 * olacak */
					{
						printf("*");
					}					   
					printf("\n");
					yildiz=yildiz_tut+1;						/* Her sat�r sonras� +2 * olmas� i�in 1 tane burda bir tane ise for d�ng�s�nde eklme yap�yorum. */
					satir=satir_tut-1;							/* Elmas�n �st k�sm� i�in her sat�rda 1 bo�luk daha az olaca�� ve bo�luk say�s�n�n sat�r say�s�yla for d�nd�rd��� i�in sat�r say�s�n� azalt�yorum. */
				 }
 				/* Elmas�n ortadan sonraki k�sm�n� yazan kod */
			 	for(yildiz=yukseklik-2; 0<=yildiz; yildiz--)	/* Orta k�s�m y�kseklik kadar y�ld�z basaca��ndan ortadan sonraki sat�rlar i�in -2 * bas�lmas� laz�m. */							
				{
 					yildiz_tut=yildiz;
 					satir_tut=satir;
 					for(satir; satir<2; satir++)				/* Bo�luk say�s� satir say�s�yla do�ru orant�l� olacak �ekilde 2 �er artacak */ 
					{
						printf(" ");
					 }
					for(yildiz; 0<yildiz; yildiz--)
					{
						printf("*");
					 }
    				printf("\n");
    				yildiz=yildiz_tut-1;						/* Yildiz say�s� 2 �er 2 �er sat�r say�s�yla do�ru orant�l� azalacak */
    				satir=satir_tut-1;							/* D�ng�de satir say�s� 2 ye kadar artt�rarak �al��t��� i�in 1 eksilterek daha fazla bo�luk koymay� sa�lar�m. */
				 }
			}
		}
	
		
		else if(secenek == 2)									/* Se�enek 2 ise ��renci bilgilerini g�sterecek */
		{
			printf("\nAd: <Furkan>\n");
			printf("Soyad: <Ozev>\n");
			printf("Ogrenci No: <161044036>\n");
		}
		
		else if(secenek == 0)									/* ��k�� i�in se�enek 0 � se�tiyse en ba�taki while �art�ndaki d�ng�y� 0 a e�itleyerek 0 && 1=1 sa�lamayaca��ndan while d�ng�s�ne girmeden program� sonland�racak. */ 
		{
			printf("\nBasariyla cikis yapildi.");
			dongu=0;
		}
		
		else if(secenek != 0,1,2)								/* 0,1,2 den ba�ka de�erler girilirse bu de�erlerin yanl�� oldu�unu ve tekrar se�im yap�lmas�n� isteyecek. */
		{
			printf("\nYanlis deger girildi!\n");
			printf("Menuye donuyorsunuz...\n");
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
return 0;
}

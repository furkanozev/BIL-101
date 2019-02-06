#include <stdio.h>
/* Fonksiyonun adini arkadas_sayi olarak tanimladim. */
int arkadas_sayi(int sayi)
{
	/* Algoritma: girilen_sayi nin 1 den baslayarak modunu aliyorum ve her sayi icin 
		if kosuluna sokarak mod sonucu 0 olan sayilari topluyorum boylece
		girilen_sayi nin carpanlari toplamini hesapl�yorum. */ 
	int carpan=0,i;
	for(i=1 ; i<sayi ; i++)
	{
		if(sayi%i==0)
		{
			carpan=carpan+i;
		}
	}
	/* retur carpan; yaparak degeri fonksiyon disina c�karabiliyorum. */
	return carpan;
	
}

int main()
{
	int girilen_sayi,carpan_toplami,kontrol,sonuc,tut;
		/* Kullanilacak integer degerleri tanimladim. */
	printf("Arkadasini bulmak istediginiz sayiyi girin:");
	scanf("%d", &girilen_sayi);
	printf("\n");
		/* Kullan�c�dan arkadas say�s�n� bulmak istedigi integer degeri girmesini istedim. */
			
	carpan_toplami = arkadas_sayi(girilen_sayi);
		/* girilen_sayi yi arkadas_sayi fonksiyonunda isleme sokarak carpan_toplami na esitledim. */
	sonuc = arkadas_sayi(carpan_toplami);
		/* carpan_toplami ni arkadas_sayi fonksiyonuna sokarak sonuc degerine y�kledim. */
	
/* Iki farkli sayi birbirinin kendisi haric pozitif bolenleri toplamina esitse bu sayilara arkadas sayilar denir. 
	Pozitif ve farkli olmas� kosulu var ornegin 6'�n arkadas sayisi 6 degildir, 6 nin arkadas sayisi yoktur.
	Kisacasi arkadas sayisi kendisine esit olamaz bunu da if icine kosul koyarak belirttim.
	
	Algoritma: Girilen say�n�n kendisi hari� �arpanlar�n�n toplam�n� bularak bir de�ere y�kl�yor sonra o de�er i�in ayn� i�lemi y�r�t�yor
	yani o de�er i�inde �arpanlar�n�n toplam�n� hesapl�yor. Son ��kan sonu� e�er girilen say�ya e�it ise arkada� say�s� vard�r ve
	bunu ekrana yaz�yor. */
		
		if(girilen_sayi==sonuc && girilen_sayi!=carpan_toplami)
			/* girilen_sayi sonuc 'a esit ve girilen_sayi nin carpanlar� toplam� kendisi olmayacak. */
		{
			printf("%d'nin arkadas sayisi %d'dir.",girilen_sayi,carpan_toplami);
		}
		else
		{
			printf("%d'nin arkadas sayisi yoktur.",girilen_sayi);
		}
}

#include <stdio.h>
int factorial(int n)
{
	int faktoriyel=1;
	/* Girilen sayi yani n 1 veya 1 den b�y�k olmas� sart� ile d�ng�ye soktum bu sayede kendisi ile 1 eksi�ini kendisi 1 olana kadar carpacak ve faktoryel hesaplanm�s olacak. */
	while(n>=1)
    {
    	faktoriyel=faktoriyel*n;
        n=n-1; 
	}
	return faktoriyel;
}
int power(int x,int n)
{
    double us=1;
    int i;
	/* i yi 1 den baslayarak sonra i yi 1 er artt�rarak carp�yoruz e�er i girilen say�dan buyukse donguyu bitiriyoruz boylece ussu hesaplanm�s olur. */
    for (i=1;i<=n;i++)
    {
        us=x*us;
    }
    return us;
}

double sin(double x)
{
	/* Kullan�c�dan taylor degerini girmesini istedim. Bu deger 6 ile 12 aras�nda olursa daha iyi sonuc verecektir. */
	/* 6 dan k�c�k olursa formul yeterince uygulanmis olamayacagi icin sonuc hatal� eger buyuk olursa fonksiyonlar integer oldugu icin bir yerden sonra hesaplayamicak hata verecektir. 12 girmeniz �nerilir. */
	int taylor,isaret,faktor,i,keep;
	double tut=0,ussu;
	printf("Daha iyi bir sonuc icin taylor degeri 6 ila 12 arasinda olmalidir.12 onerilir.");
	printf("\nTaylor giriniz: ");
    scanf("%d", &taylor);
    /* Taylor degeri kadar for d�ng�s�ne girecek yani formulu uygulamaya devam edecek. */
    for (i=1;i<=taylor;i++)
    {
     	/* E�er i 2 ye b�l�n�yorsa isaret + b�l�nm�yorsa isaret - olacak i 1 den baslad�g� �c�n + baslayacak her i artt�g�nda isaret degisecek bu sayede formulun isaret k�sm� uygulanm�s olacak. */
	    if(i%2==1)
		{
			isaret=1;
		}
        else{
			isaret=-1;
		}
		/* ussunu hesaplayabilmek icin pow fonksiyonuna aci y� ve kac�nc� ussu al�nmas� gerektigini gonderiyoruz. */
        ussu = power(x*1000,2*i-1);
        /* fonksiyon integer degerler icin cal�st�g� ve degerin ondal�kl� oldugu icin 10000 ile carpip integer a cevirip oyle power fonksiyonuna sokuyorum. sonucu bolerek ayn� islemi yapmis olurum. */ 
        keep = power(1000.0000,2*i-1);
        /* faktoryeli hesaplayabilmek icin say�y� faktoryel fonksiyonuna g�nderiyoruz. */
        faktor = factorial(2*i-1);
        /* 2i-1 olmas�n�n sebebi formulde x x^3 x^5 veya 1! 3! 5! gibi ilerliyor bu �r�nt�n�n form�l� oldu�u i�in 2i-1 i kullan�yoruz. */
        /* isaret ile ussun sonucunu carp�p faktoryelin sonucuna bolerek formul uygulanm�s olur her seferinde bunu ekleyerek ilerlemek icin tut a at�yoruz. */
        tut = tut + isaret * (ussu / keep) / faktor;
    }
    return tut-0.007295; /* fonksiyonlar�n integer olmas�ndan kaynaklanan k�s�rat hatas�n� yok etmek i�in ortalama bir degerden cikardim. */
}

int main()
{
    double aci,sonuc,radyan,PI=3.14159265358979;
    printf("sin(x)=? icin x i giriniz: ");
    scanf("%lf",&aci);
    /* Kullan�c�dan aci degerini girmesini istedim ve onu da formulde kullanabilmek icin radyana donusturdum. */
    radyan=aci * PI / 180;
    /* Radyan� sin fonksiyonuna soktum ve ��kan de�eri sonuc a atad�m. */
    sonuc=sin(radyan);
    printf("\n%f",sonuc); /* Sonucu ekrana yazd�m. */
    return 0;
}

												/*
 													FURKAN 
														�ZEV 
															161044036
																		*/
#include<stdio.h>
int main()
{
	int guncelhiz,hedefhiz; 											// G�ncel h�z ile Hedef h�z� tam say� olarak programa tan�mlad�m.
		printf("Guncel hizinizi giriniz:\n");							// Ekrana guncel h�z� giriniz yaz�s�n� yazd�rd�m.
			scanf("%d", &guncelhiz);									// Kullan�c�dan g�ncel h�z i�in integer de�er girilmesini istedim.

		printf("Hedef hizinizi giriniz:\n");							// G�ncel h�z girildikten sonra Hedef h�z� giriniz yaz�s�n� ekrana yazd�m.
			scanf("%d", &hedefhiz);										// Kullan�c�dan hedef h�z i�in integer de�er girilmesini istedim.
			
		printf("Guncel hiz= %d\n",guncelhiz);							// Kullan�c�n�n girdi�i g�ncel h�z� Guncel hiz= x diye ekrana yazd�m.
		printf("Hedef hiz= %d\n",hedefhiz);								// Kullan�c�n�n girdi�i hedef h�z� Hedef hiz= x diye ekrana yazd�m.
			
	if(guncelhiz<hedefhiz)												// E�er hedef h�z g�ncel h�zdan b�y�kse for d�ng�s�ne girecek.
		{
		int i=guncelhiz;												// For d�ng�s�nde kullanabilmek i�in i tan�mlad�m ve g�ncel h�z a e�itledim.
			for(i;i<=hedefhiz;i++)										// For d�ng�s� g�ncel h�z hedef h�zdan b�y�k olana kadar g�ncel h�za 1 ilave edilerek printf e devam edecek.
				printf("Guncel hiz= %d\t\n\t",i);						// �lk olarak g�ncel h�z� ekrana yazacak daha sonra her d�ng� s�ras�nda ekrana g�ncel h�z� yazacak.

		}

	else																// Hedef h�z g�ncel h�zdan b�y�k de�ilse else parametresine gidecek.
		{

			if(guncelhiz>hedefhiz)										// E�er g�ncel h�z hedef h�zdan b�y�kse printf deki komutu yazacak.
				{
					printf("Hiziniz hedef hizdan yuksektir.");			// Ekrana "Hiziniz hedef hizdan y�ksektir." yazd�r.
				 }

			else														// G�ncel hiz hedef hiz a e�itse printf deki komutu yazacak.
				{
					printf("Hiziniz hedef hiza esittir.");				// Ekrana "Hiziniz hedef hiza esittir." yazacak.
				 } 

		}
	
	
	return 0;
}

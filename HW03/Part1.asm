;DE�ERLER� A1 VE A2 YE HEXADEC�MAL OLARAK G�R�N�Z SONU� HEXADEC�MAL OLARAK A2'YE YAZILACAKTIR.

Pozitif:
LOAD R0,[0xA1]
LOAD R1,[0xA0]
jmpEQ R1=R0,Next ; E�er e�itlik varsa mod i�lemini uygula;
jmpLE R1<=R0,finish2 ;E�er Mod u al�nacak de�er mod dan k���kse finish2'e atla.
Next:LOAD R0,[0xA0] ; A0'daki Mod'u al�nacak de�eri R0'a y�kle.
LOAD R1,[0xA1] ; A1'deki A0'a g�re al�nacak modun de�erini R1'e y�kle.
LOAD R2,255    ; 11111111 'in hexadecimal kar��l���n� R2'e y�kle.
; MOD i�lemi ilk de�erin ikinci de�er e b�l�m�nden kalan � bulmak i�in kullan�l�r.
; Bu simulator 'de b�lme �arpma ��karma i�lemi yapamayaca��m�z� biliyoruz.
; Bu y�zden 2. say�y�n�n Two's complement Notation'a g�re negatif ini al�p,
; �lk say� ikinci say�dan k���k olana kadar ��kar�yoruz ve i�lemi sonland�r�yoruz.
; R0'daki son de�er bizim i�lemimiin sonucunu verir.
XOR R3,R1,R2 ; R1 ile R2 i XOR yap�p R3'e yaz
LOAD R4,1    ; R4'e 1 de�erini y�kle
ADDI R2,R3,R4 ; R3 ile R4 � topla R2'e yaz
; �stteki 3 i�lem sonucu R2 de�erimiz art�k negatif.
Return:ADDI R0,R2,R0 ; 1. de�erle 2. de�erin negatif halini topla.
jmpLE R1<=R0,Return ; E�er R0 R1 den b�y�k ve e�itse Return i�lemine devam et.
STORE R0,[0xA2] ; R0 daki son de�eri (yani mod i�leminin sonucunu) A2'e yaz.
LOAD R4,48
ADDI R4,R0,R4
MOVE RF,R4
finish:halt
finish2:
LOAD R0,[0xA0]
STORE R0,[0xA2]
LOAD R4,48
ADDI R4,R0,R4
MOVE RF,R4
halt
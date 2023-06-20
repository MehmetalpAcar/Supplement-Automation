#include <stdio.h>
#include <locale.h>   //Bu kutuphane turkce dil destegi saglar.
void kirmizi() {
	printf("\033[1;31m");
}
void yesil() {
  printf("\033[0;32m");
}
void sifirla() {
	printf("\033[0m");
}
void sari() {
	printf("\033[0;33m");
}
void main()
{


	/*
	YARDIMCI OLABILECEK KODLAR VE ISLEVLERI
	system("COLOR 2");                                  bu kod terminaldeki yazilarin rengini duzenlemede kullanilir.

	*/

	setlocale(LC_ALL, "Turkish"); //Bu komut sat�r� void main fonksiyonunun i�ine t�rk�e fonksiyon atar.
	int n = 5;

	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int a4 = 0;
	int a5 = 0;
	int a6 = 0;  //Urunlerin adedini tutan degiskendir.

	float f1 = 5;
	float f2 = 5.25;
	float f3 = 4.75;
	float f4 = 4.5;
	float f5 = 5.5;
	float f6 = 5;   //Urunlerin fiyatini tutan degiskendir.

	char p1[] = "Whey Protein";
	char p2[] = "Pea Protein";
	char p3[] = "Complete Protein";
	char p4[] = "Egg White Powder";
	char p5[] = "Milk Protein";
	char p6[] = "Soya Protein";

	//printf("%s ",p1);
	printf("\n\t\tPROTE�N SHOPA HO�GELD�N�Z\n\n");

	anaMenu: //Bu etiket en ust menuyu temsil eder

	sifirla();
	printf("------------------------------------------------------------------\n\n");
	printf("Otomat�mzda bulunan protein �e�itleri a�a��da s�ralanm��t�r.\n");
	printf("1-) Whey Protein\n");
	printf("2-) Pea Protein\n");
	printf("3-) Complete Protein\n");
	printf("4-) Egg White Powder\n");
	printf("5-) Milk Protein\n");
	printf("6-) Soya Protein\n\n");

	proteinCesitleri: // Bu etiket goto metoduyla hatali giris yapan kullaniciyi ana menuye atar.

	printf("------------------------------------------------------------------\n\n");

	int menu, secim;

	printf("�r�nler hakk�nda bilgi edinmek veya sat�n almak i�in �r�n�n numars�n�; sepete gitmek i�in 666 yi tu�lay�n�z: ");
	scanf("%d", &menu);
	if (menu == 1)
	{
		printf("\n------------------------------------------------------------------\n\n");
		printf("\t%s Hakk�nda\n", p1);
		printf("*Her bir servisi 25 gr olarak belirlenmi�tir.\n");
		printf("*Her serviste:\n 18.4 gr protein\n 3.6 gr karbonhidrat (1.6 gr si �eker)\n 1.7 gr ya� (1.3 gr si doymus ya�)\n 0.15 gr tuz i�erir.");
		printf("*H�zl� sindirilen bir protein �e�ididir.\n");
		printf("*Peynir alt� suyundan imal edilir.\n");
		printf("*Birim fiyati di�er t�rlere gore daha uygundur.\n");
		printf("!!!�r�nlerimiz su hari� ba�ka bir �r�n ile t�ketilirse besin de�erleri de�i�iklik g�sterebilir!!!\n\n");

		wheyProtein:

		printf("------------------------------------------------------------------\n\n");
		printf("Sepetinizde �uanda %d adet %s vard�r.\n%s in birim fiyat� %.2f tl dir.\n", a1, p1, p1, f1);
		printf("L�tfen ana men�ye d�nmek i�in 999 say�s�n�;\nSepete gitmek i�in 666 y�;\n�r�n� sat�n almak veya adedini de�i�tirmek i�in miktar giriniz.\nSepetteki �r�nleri silmek i�in 0 � girebilirsiniz.\nTek seferde her �r�nden maksimum %d adet verilebilmektedir.\nHatal� adet girdi�iniz takdirde se�ti�iniz �r�n miktar� sepetinizde s�f�rlanacakt�r: ", n);
		scanf("%d", &secim);
		if (secim < 6)
		{
			a1 = secim;
			printf("\n------------------------------------------------------------------\n\n");
			yesil();
			printf("Sepetinize %d adet %s eklenmi�tir.\n", a1, p1);
			printf("Ana men�ye d�n�l�yor...\n\n");
			sifirla();
			goto anaMenu;
		}
		else if (secim == 666)
			goto sepet;
		else if (secim == 999)
			goto anaMenu;
		else
		{
			printf("\n------------------------------------------------------------------\n\n");
			kirmizi();
			printf("Hatal� bir de�er girdiniz. L�tfen tekrar deneyin.\n\n");
			sifirla();
			a1 = 0;
			goto wheyProtein;
		}
	}
	if (menu == 2)
	{
		printf("\n------------------------------------------------------------------\n\n");
		printf("\t%s Hakk�nda\n", p2);
		printf("*Her bir servisi 25 gr olarak belirlenmi�tir.\n");
		printf("*Her serviste:\n 21.6 gr protein\n 0.35 gr karbonhidrat(�eker i�ermez)\n 2 gr ya� (doymus yag 0.5 gr)\n 2.2 gr lif\n 0.15 gr tuz i�erir.");
		printf("*En populer vegan protein kaynagidir.\n");
		printf("*Gluten, Laktoz ve Kolesterol i�ermez.\n");
		printf("*Suda kolay kar���r, k�vam� yo�undur.\n");
		printf("!!!�r�nlerimiz su hari� ba�ka bir �r�n ile t�ketilirse besin de�erleri de�i�iklik g�sterebilir!!!\n");

		peaProtein:

		printf("\n------------------------------------------------------------------\n\n");
		printf("Sepetinizde �uanda %d adet %s vard�r.\n%s in birim fiyat� %.2f tl dir.", a2, p2, p2, f2);
		printf("L�tfen ana men�ye d�nmek i�in 999 say�s�n�;\nSepete gitmek i�in 666 y�;\n�r�n� sat�n almak veya adedini de�i�tirmek i�in miktar giriniz.\nSepetteki �r�nleri silmek i�in 0 � girebilirsiniz.\nTek seferde her �r�nden maksimum %d adet verilebilmektedir.\nHatal� adet girdi�iniz takdirde se�ti�iniz �r�n miktar� sepetinizde s�f�rlanacakt�r: ", n);
		scanf("%d", &secim);
		if (secim < 6)
		{
			a2 = secim;
			
			printf("\n------------------------------------------------------------------\n\n");
			yesil();
			printf("Sepetinize %d adet %s eklenmi�tir.\n", a2, p2); 
			printf("Ana men�ye d�n�l�yor...\n\n");
			sifirla();
			goto anaMenu;
		}
		else if (secim == 666)
			goto sepet;
		else if (secim == 999)
			goto anaMenu;
		else
		{
			printf("\n------------------------------------------------------------------\n\n");
			kirmizi();
			printf("Hatal� bir de�er girdiniz. L�tfen tekrar deneyin\n");
			sifirla();
			a2 = 0;
			goto peaProtein;
		}
	}
	if (menu == 3)
	{
		printf("\n------------------------------------------------------------------\n\n");
		printf("\t%s Hakk�nda\n", p3);
		printf("*Her bir servisi 25 gr olarak belirlenmi�tir.\n");
		printf("*Her serviste:\n 19.5 gr protein\n 2 gr karbonhidrat (1 gr si �eker)\n 0.8 gr ya� (0.3 gr si doymus ya�)\n 0.2 gr tuz.");
		printf("*4 farkli aminoasit profiline sahip.\n");
		printf("*Yava� ve h�zl� sindirilen proteinler birarada.\n");
		printf("D���k ya� ve seker i�eri�i.\n");
		printf("!!!�r�nlerimiz su hari� ba�ka bir �r�n ile tuketilirse besin degerleri degisiklik g�sterebilir!!!\n");

		completeProtein:

		printf("\n------------------------------------------------------------------\n\n");
		printf("Sepetinizde �uanda %d adet %s vard�r.\n%s in birim fiyat� %.2f tl dir.", a3, p3, p3, f3);
		printf("L�tfen ana men�ye d�nmek i�in 999 say�s�n�;\nSepete gitmek i�in 666 y�;\n�r�n� sat�n almak veya adedini de�i�tirmek i�in miktar giriniz.\nSepetteki �r�nleri silmek i�in 0 � girebilirsiniz.\nTek seferde her �r�nden maksimum %d adet verilebilmektedir.\nHatal� adet girdi�iniz takdirde se�ti�iniz �r�n miktar� sepetinizde s�f�rlanacakt�r: ", n);
		scanf("%d", &secim);
		if (secim < 6)
		{
			a3 = secim;
			printf("\n------------------------------------------------------------------\n\n");
			yesil();
			printf("Sepetinize %d adet %s eklenmi�tir.\n", a3, p3);
			printf("Ana men�ye d�n�l�yor...\n\n");
			sifirla();
			goto anaMenu;
		}
		else if (secim == 666)
			goto sepet;
		else if (secim == 999)
			goto anaMenu;
		else
		{
			printf("\n------------------------------------------------------------------\n\n");
			kirmizi();
			printf("Hatal� bir de�er girdiniz. L�tfen tekrar deneyin\n");
			sifirla();
			a3 = 0;
			goto completeProtein;
		}
	}
	if (menu == 4)
	{
		printf("\n------------------------------------------------------------------\n\n");
		printf("\t%s Hakk�nda\n", p4);
		printf("*Her bir servis 25 gr olarak belirlenmi�tir.\n");
		printf("*Her serviste:\n 19.3 gr protein\n 2 gr karbonhidrat (tamam� �eker)\n 0.03 gr ya� (doymus ya� i�ermez) 0.003 gr tuz vardir.\n");
		printf("*�r�n�m�z tamamen yumurta ak� ile �retilmi�tir.\n");
		printf("*Yumurta ak� yap�s� itibariyle su ile kolay kar��maz.\n");
		printf("*V�cutta biyoyararlan�ml�l��� ve emilimi en y�ksek protein kayna��d�r.\n");
		printf("*Y�ksek miktada BCAA (Branched Chain Amino Asid) i�erir.\n");
		printf("!!!�r�nlerimiz su hari� ba�ka bir �r�n ile t�ketilirse besin de�erleri de�i�iklik g�sterebilir!!!\n");

		eggProtein:

		printf("\n------------------------------------------------------------------\n\n");
		printf("Sepetinizde �uanda %d adet %s vard�r.\n%s in birim fiyat� %.2f tl dir.", a4, p4, p4, f4);
		printf("L�tfen ana men�ye d�nmek i�in 999 say�s�n�;\nSepete gitmek i�in 666 y�;\n�r�n� sat�n almak veya adedini de�i�tirmek i�in miktar giriniz.\nSepetteki �r�nleri silmek i�in 0 � girebilirsiniz.\nTek seferde her �r�nden maksimum %d adet verilebilmektedir.\nHatal� adet girdi�iniz takdirde se�ti�iniz �r�n miktar� sepetinizde s�f�rlanacakt�r: ", n);
		scanf("%d", &secim);
		if (secim < 6)
		{
			a4 = secim;
			printf("\n------------------------------------------------------------------\n\n");
			yesil();
			printf("Sepetinize %d adet %s eklenmi�tir.\n", a4, p4);
			printf("Ana men�ye d�n�l�yor...\n\n");
			sifirla();
			goto anaMenu;
		}
		else if (secim == 666)
			goto sepet;
		else if (secim == 999)
			goto anaMenu;
		else
		{
			printf("\n------------------------------------------------------------------\n\n");
			kirmizi();
			printf("Hatal� bir de�er girdiniz. L�tfen tekrar deneyin\n");
			sifirla();
			a4 = 0;
			goto eggProtein;
		}
	}
	if (menu == 5)
	{
		printf("\n------------------------------------------------------------------\n\n");
		printf("\t%s Hakk�nda\n", p5);
		printf("*Her bir servis 25 gr olarak belirlenmi�tir.\n");
		printf("*Her bir serviste:\n 17.5 gr protein\n 4.3 gr karbonhidrat (tamam� �eker)\n 0.007 gr yag (0.05 gr si doymus)\n 0.6 gr tuz vard�r\n");
		printf("*%80 kazein ve %20 whey protein kar���m�d�r.\n");
		printf("*V�cudun ihtiyaci olabilecek proteini h�zl�ca sa�lar.\n");
		printf("*��eri�indeki kazein protein sayesinde uzun s�rede emilir.\n");
		printf("*G�n icerisinde ve yatmadan t�ketmek i�in m�kemmel tercih.\n");
		printf("!!!�r�nlerimiz su hari� ba�ka bir �r�n ile t�ketilirse besin de�erleri de�i�iklik g�sterebilir!!!\n");

		milkProtein:

		printf("\n------------------------------------------------------------------\n\n");
		printf("Sepetinizde �uanda %d adet %s vard�r.\n%s in birim fiyat� %.2f tl dir.", a5, p5, p5, f5);
		printf("L�tfen ana men�ye d�nmek i�in 999 say�s�n�;\nSepete gitmek i�in 666 y�;\n�r�n� sat�n almak veya adedini de�i�tirmek i�in miktar giriniz.\nSepetteki �r�nleri silmek i�in 0 � girebilirsiniz.\nTek seferde her �r�nden maksimum %d adet verilebilmektedir.\nHatal� adet girdi�iniz takdirde se�ti�iniz �r�n miktar� sepetinizde s�f�rlanacakt�r: ", n);
		scanf("%d", &secim);
		if (secim < 6)
		{
			a5 = secim;
			printf("\n------------------------------------------------------------------\n\n");
			yesil();
			printf("Sepetinize %d adet %s eklenmi�tir.\n", a5, p5);
			printf("Ana men�ye d�n�l�yor...\n\n");
			sifirla();
			goto anaMenu;
		}
		else if (secim == 666)
			goto sepet;
		else if (secim == 999)
			goto anaMenu;
		else
		{
			printf("\n------------------------------------------------------------------\n\n");
			kirmizi();
			printf("Hatal� bir de�er girdiniz. L�tfen tekrar deneyin\n");
			sifirla();
			a5 = 0;
			goto milkProtein;
		}
	}
	if (menu == 6)
	{
		printf("\n------------------------------------------------------------------\n\n");
		printf("\t%s Hakk�nda\n", p6);
		printf("*Her bir servis 25 gr olarak belirlenmi�tir.\n");
		printf("*Her serviste:\n 16.3 gr protein\n 2 gr karbonhidrat\n 0.3 gr ya� (0.02 gr si doymu�)\n 0.05 gr tuz vardir.\n");
		printf("*�eker i�ermez.\n");
		printf("*Veganlar ve laktoz alerjisi olanlar i�in ideal");
		printf("!!!�r�nlerimiz su hari� ba�ka bir �r�n ile tuketilirse besin degerleri de�isiklik g�sterebilir!!!\n");

		soyaProtein:

		printf("\n------------------------------------------------------------------\n\n");
		printf("Sepetinizde �uanda %d adet %s vard�r.\n%s in birim fiyat� %.2f tl dir.", a6, p6, p6, f6);
		printf("L�tfen ana men�ye d�nmek i�in 999 say�s�n�;\nSepete gitmek i�in 666 y�;\n�r�n� sat�n almak veya adedini de�i�tirmek i�in miktar giriniz.\nSepetteki �r�nleri silmek i�in 0 � girebilirsiniz.\nTek seferde her �r�nden maksimum %d adet verilebilmektedir.\nHatal� adet girdi�iniz takdirde se�ti�iniz �r�n miktar� sepetinizde s�f�rlanacakt�r: ", n);
		scanf("%d", &secim);
		if (secim < 6)
		{
			a6 = secim;
			printf("\n------------------------------------------------------------------\n\n");
			yesil();
			printf("Sepetinize %d adet %s eklenmi�tir.\n", a6, p6);
			printf("Ana men�ye d�n�l�yor...\n\n");
			sifirla();
			goto anaMenu;
		}
		else if (secim == 666)
			goto sepet;
		else if (secim == 999)
			goto anaMenu;
		else
		{
			printf("\n------------------------------------------------------------------\n\n");
			kirmizi();
			printf("Hatal� bir de�er girdiniz. L�tfen tekrar deneyin\n");
			sifirla();
			a6 = 0;
			goto soyaProtein;
		}
	}
	if (menu == 666)
	{
		float t1 = a1 * f1;
		float t2 = a2 * f2;
		float t3 = a3 * f3;
		float t4 = a4 * f4;
		float t5 = a5 * f5;
		float t6 = a6 * f6;
		float tt = t1 + t2 + t3 + t4 + t5 + t6;
		int at = a1 + a2 + a3 + a4 + a5 + a6;   

		sepet:
		printf("\n------------------------------------------------------------------\n\n");
		printf("\t\tSEPETE HO�GELD�N�Z\n\n");
		if (a1 == 0)
		{
			if (a2 == 0)
			{
				if (a3 == 0)
				{
					if (a4 == 0)
					{
						if (a5 == 0)
						{
							if (a6 == 0)
							{
								kirmizi();
								printf("\t\       SEPET�N�Z �U ANDA BO�\n\t Ana menuye y�nlendiriliyorsunuz...\n\n");
								sifirla();
								goto anaMenu;
							}
						}
					}
				}
			}
		}
		sari();
		if (a1 > 0)
			printf("Sepetinizde bulunan %d adet %s in toplam fiyat� %.2f tir.\n\n", a1, p1, t1);
		if (a2 > 0)
			printf("Sepetinizde bulunan %d adet %s in toplam fiyat� %.2f tir.\n\n", a2, p2, t2);
		if (a3 > 0)
			printf("Sepetinizde bulunan %d adet %s in toplam fiyat� %.2f tir.\n\n", a3, p3, t3);
		if (a4 > 0)
			printf("Sepetinizde bulunan %d adet %s in toplam fiyat� %.2f tir.\n\n", a4, p4, t4);
		if (a5 > 0)
			printf("Sepetinizde bulunan %d adet %s in toplam fiyat� %.2f tir.\n\n", a5, p5, t5);
		if (a6 > 0)
			printf("Sepetinizde bulunan %d adet %s in toplam fiyat� %.2f tir.\n\n", a6, p6, t6);

		yesil();
		printf("Sepetinizde bulunan %d adet �r�n�n toplam fiyat� %.2f tl dir.\n\n",at, tt);
		kirmizi();
		printf("Ana menuye d�nmek i�in 999 tu�una bas�n.Ba�ka bir de�er girildi�i takdirde program sonlanacakt�r : ");
		scanf("%d", &secim);
		yesil();
		if (secim == 999)
			goto anaMenu;
		else
			printf("\nBizi tercih etti�iniz i�in te�ekk�r eder iyi g�nler dileriz.\n");

	}
	else
	{
		printf("\n------------------------------------------------------------------\n\n");
		kirmizi();
		printf("Hatal� bir de�er girdiniz.L�tfen tekrar deneyin.\n\n");
		sifirla();
		goto proteinCesitleri;
	}
	getch();
}
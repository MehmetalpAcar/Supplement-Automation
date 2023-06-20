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

	setlocale(LC_ALL, "Turkish"); //Bu komut satýrý void main fonksiyonunun içine türkçe fonksiyon atar.
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
	printf("\n\t\tPROTEÝN SHOPA HOÞGELDÝNÝZ\n\n");

	anaMenu: //Bu etiket en ust menuyu temsil eder

	sifirla();
	printf("------------------------------------------------------------------\n\n");
	printf("Otomatýmzda bulunan protein çeþitleri aþaðýda sýralanmýþtýr.\n");
	printf("1-) Whey Protein\n");
	printf("2-) Pea Protein\n");
	printf("3-) Complete Protein\n");
	printf("4-) Egg White Powder\n");
	printf("5-) Milk Protein\n");
	printf("6-) Soya Protein\n\n");

	proteinCesitleri: // Bu etiket goto metoduyla hatali giris yapan kullaniciyi ana menuye atar.

	printf("------------------------------------------------------------------\n\n");

	int menu, secim;

	printf("Ürünler hakkýnda bilgi edinmek veya satýn almak için ürünün numarsýný; sepete gitmek için 666 yi tuþlayýnýz: ");
	scanf("%d", &menu);
	if (menu == 1)
	{
		printf("\n------------------------------------------------------------------\n\n");
		printf("\t%s Hakkýnda\n", p1);
		printf("*Her bir servisi 25 gr olarak belirlenmiþtir.\n");
		printf("*Her serviste:\n 18.4 gr protein\n 3.6 gr karbonhidrat (1.6 gr si þeker)\n 1.7 gr yað (1.3 gr si doymus yað)\n 0.15 gr tuz içerir.");
		printf("*Hýzlý sindirilen bir protein çeþididir.\n");
		printf("*Peynir altý suyundan imal edilir.\n");
		printf("*Birim fiyati diðer türlere gore daha uygundur.\n");
		printf("!!!Ürünlerimiz su hariç baþka bir ürün ile tüketilirse besin deðerleri deðiþiklik gösterebilir!!!\n\n");

		wheyProtein:

		printf("------------------------------------------------------------------\n\n");
		printf("Sepetinizde þuanda %d adet %s vardýr.\n%s in birim fiyatý %.2f tl dir.\n", a1, p1, p1, f1);
		printf("Lütfen ana menüye dönmek için 999 sayýsýný;\nSepete gitmek için 666 yý;\nÜrünü satýn almak veya adedini deðiþtirmek için miktar giriniz.\nSepetteki ürünleri silmek için 0 ý girebilirsiniz.\nTek seferde her üründen maksimum %d adet verilebilmektedir.\nHatalý adet girdiðiniz takdirde seçtiðiniz ürün miktarý sepetinizde sýfýrlanacaktýr: ", n);
		scanf("%d", &secim);
		if (secim < 6)
		{
			a1 = secim;
			printf("\n------------------------------------------------------------------\n\n");
			yesil();
			printf("Sepetinize %d adet %s eklenmiþtir.\n", a1, p1);
			printf("Ana menüye dönülüyor...\n\n");
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
			printf("Hatalý bir deðer girdiniz. Lütfen tekrar deneyin.\n\n");
			sifirla();
			a1 = 0;
			goto wheyProtein;
		}
	}
	if (menu == 2)
	{
		printf("\n------------------------------------------------------------------\n\n");
		printf("\t%s Hakkýnda\n", p2);
		printf("*Her bir servisi 25 gr olarak belirlenmiþtir.\n");
		printf("*Her serviste:\n 21.6 gr protein\n 0.35 gr karbonhidrat(þeker içermez)\n 2 gr yað (doymus yag 0.5 gr)\n 2.2 gr lif\n 0.15 gr tuz içerir.");
		printf("*En populer vegan protein kaynagidir.\n");
		printf("*Gluten, Laktoz ve Kolesterol içermez.\n");
		printf("*Suda kolay karýþýr, kývamý yoðundur.\n");
		printf("!!!Ürünlerimiz su hariç baþka bir ürün ile tüketilirse besin deðerleri deðiþiklik gösterebilir!!!\n");

		peaProtein:

		printf("\n------------------------------------------------------------------\n\n");
		printf("Sepetinizde þuanda %d adet %s vardýr.\n%s in birim fiyatý %.2f tl dir.", a2, p2, p2, f2);
		printf("Lütfen ana menüye dönmek için 999 sayýsýný;\nSepete gitmek için 666 yý;\nÜrünü satýn almak veya adedini deðiþtirmek için miktar giriniz.\nSepetteki ürünleri silmek için 0 ý girebilirsiniz.\nTek seferde her üründen maksimum %d adet verilebilmektedir.\nHatalý adet girdiðiniz takdirde seçtiðiniz ürün miktarý sepetinizde sýfýrlanacaktýr: ", n);
		scanf("%d", &secim);
		if (secim < 6)
		{
			a2 = secim;
			
			printf("\n------------------------------------------------------------------\n\n");
			yesil();
			printf("Sepetinize %d adet %s eklenmiþtir.\n", a2, p2); 
			printf("Ana menüye dönülüyor...\n\n");
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
			printf("Hatalý bir deðer girdiniz. Lütfen tekrar deneyin\n");
			sifirla();
			a2 = 0;
			goto peaProtein;
		}
	}
	if (menu == 3)
	{
		printf("\n------------------------------------------------------------------\n\n");
		printf("\t%s Hakkýnda\n", p3);
		printf("*Her bir servisi 25 gr olarak belirlenmiþtir.\n");
		printf("*Her serviste:\n 19.5 gr protein\n 2 gr karbonhidrat (1 gr si þeker)\n 0.8 gr yað (0.3 gr si doymus yað)\n 0.2 gr tuz.");
		printf("*4 farkli aminoasit profiline sahip.\n");
		printf("*Yavaþ ve hýzlý sindirilen proteinler birarada.\n");
		printf("Düþük yað ve seker içeriði.\n");
		printf("!!!Ürünlerimiz su hariç baþka bir ürün ile tuketilirse besin degerleri degisiklik gösterebilir!!!\n");

		completeProtein:

		printf("\n------------------------------------------------------------------\n\n");
		printf("Sepetinizde þuanda %d adet %s vardýr.\n%s in birim fiyatý %.2f tl dir.", a3, p3, p3, f3);
		printf("Lütfen ana menüye dönmek için 999 sayýsýný;\nSepete gitmek için 666 yý;\nÜrünü satýn almak veya adedini deðiþtirmek için miktar giriniz.\nSepetteki ürünleri silmek için 0 ý girebilirsiniz.\nTek seferde her üründen maksimum %d adet verilebilmektedir.\nHatalý adet girdiðiniz takdirde seçtiðiniz ürün miktarý sepetinizde sýfýrlanacaktýr: ", n);
		scanf("%d", &secim);
		if (secim < 6)
		{
			a3 = secim;
			printf("\n------------------------------------------------------------------\n\n");
			yesil();
			printf("Sepetinize %d adet %s eklenmiþtir.\n", a3, p3);
			printf("Ana menüye dönülüyor...\n\n");
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
			printf("Hatalý bir deðer girdiniz. Lütfen tekrar deneyin\n");
			sifirla();
			a3 = 0;
			goto completeProtein;
		}
	}
	if (menu == 4)
	{
		printf("\n------------------------------------------------------------------\n\n");
		printf("\t%s Hakkýnda\n", p4);
		printf("*Her bir servis 25 gr olarak belirlenmiþtir.\n");
		printf("*Her serviste:\n 19.3 gr protein\n 2 gr karbonhidrat (tamamý þeker)\n 0.03 gr yað (doymus yað içermez) 0.003 gr tuz vardir.\n");
		printf("*Ürünümüz tamamen yumurta aký ile üretilmiþtir.\n");
		printf("*Yumurta aký yapýsý itibariyle su ile kolay karýþmaz.\n");
		printf("*Vücutta biyoyararlanýmlýlýðý ve emilimi en yüksek protein kaynaðýdýr.\n");
		printf("*Yüksek miktada BCAA (Branched Chain Amino Asid) içerir.\n");
		printf("!!!Ürünlerimiz su hariç baþka bir ürün ile tüketilirse besin deðerleri deðiþiklik gösterebilir!!!\n");

		eggProtein:

		printf("\n------------------------------------------------------------------\n\n");
		printf("Sepetinizde þuanda %d adet %s vardýr.\n%s in birim fiyatý %.2f tl dir.", a4, p4, p4, f4);
		printf("Lütfen ana menüye dönmek için 999 sayýsýný;\nSepete gitmek için 666 yý;\nÜrünü satýn almak veya adedini deðiþtirmek için miktar giriniz.\nSepetteki ürünleri silmek için 0 ý girebilirsiniz.\nTek seferde her üründen maksimum %d adet verilebilmektedir.\nHatalý adet girdiðiniz takdirde seçtiðiniz ürün miktarý sepetinizde sýfýrlanacaktýr: ", n);
		scanf("%d", &secim);
		if (secim < 6)
		{
			a4 = secim;
			printf("\n------------------------------------------------------------------\n\n");
			yesil();
			printf("Sepetinize %d adet %s eklenmiþtir.\n", a4, p4);
			printf("Ana menüye dönülüyor...\n\n");
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
			printf("Hatalý bir deðer girdiniz. Lütfen tekrar deneyin\n");
			sifirla();
			a4 = 0;
			goto eggProtein;
		}
	}
	if (menu == 5)
	{
		printf("\n------------------------------------------------------------------\n\n");
		printf("\t%s Hakkýnda\n", p5);
		printf("*Her bir servis 25 gr olarak belirlenmiþtir.\n");
		printf("*Her bir serviste:\n 17.5 gr protein\n 4.3 gr karbonhidrat (tamamý þeker)\n 0.007 gr yag (0.05 gr si doymus)\n 0.6 gr tuz vardýr\n");
		printf("*%80 kazein ve %20 whey protein karýþýmýdýr.\n");
		printf("*Vücudun ihtiyaci olabilecek proteini hýzlýca saðlar.\n");
		printf("*Ýçeriðindeki kazein protein sayesinde uzun sürede emilir.\n");
		printf("*Gün icerisinde ve yatmadan tüketmek için mükemmel tercih.\n");
		printf("!!!Ürünlerimiz su hariç baþka bir ürün ile tüketilirse besin deðerleri deðiþiklik gösterebilir!!!\n");

		milkProtein:

		printf("\n------------------------------------------------------------------\n\n");
		printf("Sepetinizde þuanda %d adet %s vardýr.\n%s in birim fiyatý %.2f tl dir.", a5, p5, p5, f5);
		printf("Lütfen ana menüye dönmek için 999 sayýsýný;\nSepete gitmek için 666 yý;\nÜrünü satýn almak veya adedini deðiþtirmek için miktar giriniz.\nSepetteki ürünleri silmek için 0 ý girebilirsiniz.\nTek seferde her üründen maksimum %d adet verilebilmektedir.\nHatalý adet girdiðiniz takdirde seçtiðiniz ürün miktarý sepetinizde sýfýrlanacaktýr: ", n);
		scanf("%d", &secim);
		if (secim < 6)
		{
			a5 = secim;
			printf("\n------------------------------------------------------------------\n\n");
			yesil();
			printf("Sepetinize %d adet %s eklenmiþtir.\n", a5, p5);
			printf("Ana menüye dönülüyor...\n\n");
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
			printf("Hatalý bir deðer girdiniz. Lütfen tekrar deneyin\n");
			sifirla();
			a5 = 0;
			goto milkProtein;
		}
	}
	if (menu == 6)
	{
		printf("\n------------------------------------------------------------------\n\n");
		printf("\t%s Hakkýnda\n", p6);
		printf("*Her bir servis 25 gr olarak belirlenmiþtir.\n");
		printf("*Her serviste:\n 16.3 gr protein\n 2 gr karbonhidrat\n 0.3 gr yað (0.02 gr si doymuþ)\n 0.05 gr tuz vardir.\n");
		printf("*Þeker içermez.\n");
		printf("*Veganlar ve laktoz alerjisi olanlar için ideal");
		printf("!!!Ürünlerimiz su hariç baþka bir ürün ile tuketilirse besin degerleri deðisiklik gösterebilir!!!\n");

		soyaProtein:

		printf("\n------------------------------------------------------------------\n\n");
		printf("Sepetinizde þuanda %d adet %s vardýr.\n%s in birim fiyatý %.2f tl dir.", a6, p6, p6, f6);
		printf("Lütfen ana menüye dönmek için 999 sayýsýný;\nSepete gitmek için 666 yý;\nÜrünü satýn almak veya adedini deðiþtirmek için miktar giriniz.\nSepetteki ürünleri silmek için 0 ý girebilirsiniz.\nTek seferde her üründen maksimum %d adet verilebilmektedir.\nHatalý adet girdiðiniz takdirde seçtiðiniz ürün miktarý sepetinizde sýfýrlanacaktýr: ", n);
		scanf("%d", &secim);
		if (secim < 6)
		{
			a6 = secim;
			printf("\n------------------------------------------------------------------\n\n");
			yesil();
			printf("Sepetinize %d adet %s eklenmiþtir.\n", a6, p6);
			printf("Ana menüye dönülüyor...\n\n");
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
			printf("Hatalý bir deðer girdiniz. Lütfen tekrar deneyin\n");
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
		printf("\t\tSEPETE HOÞGELDÝNÝZ\n\n");
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
								printf("\t\       SEPETÝNÝZ ÞU ANDA BOÞ\n\t Ana menuye yönlendiriliyorsunuz...\n\n");
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
			printf("Sepetinizde bulunan %d adet %s in toplam fiyatý %.2f tir.\n\n", a1, p1, t1);
		if (a2 > 0)
			printf("Sepetinizde bulunan %d adet %s in toplam fiyatý %.2f tir.\n\n", a2, p2, t2);
		if (a3 > 0)
			printf("Sepetinizde bulunan %d adet %s in toplam fiyatý %.2f tir.\n\n", a3, p3, t3);
		if (a4 > 0)
			printf("Sepetinizde bulunan %d adet %s in toplam fiyatý %.2f tir.\n\n", a4, p4, t4);
		if (a5 > 0)
			printf("Sepetinizde bulunan %d adet %s in toplam fiyatý %.2f tir.\n\n", a5, p5, t5);
		if (a6 > 0)
			printf("Sepetinizde bulunan %d adet %s in toplam fiyatý %.2f tir.\n\n", a6, p6, t6);

		yesil();
		printf("Sepetinizde bulunan %d adet ürünün toplam fiyatý %.2f tl dir.\n\n",at, tt);
		kirmizi();
		printf("Ana menuye dönmek için 999 tuþuna basýn.Baþka bir deðer girildiði takdirde program sonlanacaktýr : ");
		scanf("%d", &secim);
		yesil();
		if (secim == 999)
			goto anaMenu;
		else
			printf("\nBizi tercih ettiðiniz için teþekkür eder iyi günler dileriz.\n");

	}
	else
	{
		printf("\n------------------------------------------------------------------\n\n");
		kirmizi();
		printf("Hatalý bir deðer girdiniz.Lütfen tekrar deneyin.\n\n");
		sifirla();
		goto proteinCesitleri;
	}
	getch();
}
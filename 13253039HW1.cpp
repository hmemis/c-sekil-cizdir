/*
Odev No:1
Ogrenci No:13253039
Hilal MEMÝS
*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//ilk oncelikle fonksiyonlari tanýmladim
void menu();
void ucgenciz();
void kareciz();
void dikdortgenciz();
void eskenardortgenciz();
void paralelkenarciz();
void cikis();
int main()
{
	int secim;
	menu();
	do
	{
	printf("\nSeciminiz :\n");
	scanf("%d",&secim);
	if(secim<6 && secim > 0)
	{
      system("cls"); //secim yazilan aralikta ise ekran temizlenir
	}
	else if(secim == 0) 
	{
		return 0;   //secim 0 ise programin sonlanmasini saglar
		break;    
	}
	else
	{
		printf("HATALI secim yaptiniz!!!!");   //istenilen aralikta secim yapilmaz ise bu yazi ekrana gelir
	}
	}while(secim!=1 && secim!=2 && secim!=3 && secim!=4 && secim!=5);

	switch(secim)

	{
	case 1: 
		printf("UCGEN Cizilecek\n");
    ucgenciz();   //ucgen cizme fonksiyonunu çagirdim
	cikis();      //cikiþ fonksiyonunu cagirdim
	break;
	case 2:
		printf("KARE Cizilecek\n");
	kareciz();
	cikis();
	break;
	case 3:
		printf("DIKDORTGEN Cizilecek\n");
	dikdortgenciz();
	cikis();
	break;
	case 4:
		printf("ESKENARDORTGEN Cizilecek\n");
	eskenardortgenciz();
	cikis();
	break;
	case 5:
		printf("PARALELKENAR Cizilecek\n");
	paralelkenarciz();
	cikis();
	break;
	case 0:
		system(false); // 0 a basilir ise programin durmasini saglar
		break;
	default:
		printf("\nYanlis Deger Girdiniz:\n");
		break;
	}
}
void menu() // menü fonksiyonunda ana ekrana yazilacak bilgileri yazdim
{
	printf("HOSGELDINIZ\n");
	printf("1. Ucgen\n");
	printf("2. Kare\n");
	printf("3. Dikdortgen\n");
	printf("4. Eskenardortgen\n");
	printf("5. Paralelkenar\n");
	printf("0. Cikis");
}
void ucgenciz() //ucgen cizme kodlari
{
	int boy;
	printf("Boy degerini giriniz :");
	scanf("%d",&boy);
	for(int i=0;i<boy;i++)
	{
		for(int j=0;j<=i;j++)
		{	printf("*"); }
		printf("\n");

	}

}
void kareciz() // kare cizme kodlari
{
    int boy;
	printf("Boy Degerini Giriniz :");
	scanf("%d",&boy);
	for(int i=0;i<boy;i++)
	{
		for(int j=0;j<boy;j++)
		{
		printf("*"); 
		}
		printf("\n");
	}
}
void dikdortgenciz() // dikdortgen cizme kodlari
{
    int boy,en;
	printf("Boy Degerini Giriniz :\n");
	scanf("%d",&boy);
	printf("En Degerini Giriniz :");
	scanf("%d",&en);

	for(int i=0;i<boy;i++)
	{
		for(int j=0;j<en;j++)
		{
		printf("*"); 
		}
		printf("\n");
	}
}
void eskenardortgenciz() // eskenardortgen cizme kodlari
{
	int boy;
	do
	{
	printf("Boy Degerini Giriniz(Boy Degeri Tek Sayi Olmali) :");
	scanf("%d",&boy);
	}while(boy%2==0); // sadece tek sayilarla islem yapabilmek icin
	for(int i=0;i<=(boy / 2);i++)
	{
		for(int j=0;j<(boy / 2)-i;j++)
		{
			printf(" ");
		}
		for(int k=0;k<(2 * i)+1;k++)
		{
			printf("*");
			
		}printf("\n");
	}
	for(int i=0;i<boy/2;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			printf(" ");
		}	
		for(int k=0;k<boy-2-(2*i);k++)
			{
				printf("*");

			}
		printf("\n");
	}

}
void paralelkenarciz()  // paralelkenar cizme kodlari
{
   int boy;
   printf("Boy Degerini Giriniz :");
	scanf("%d",&boy);
	for(int i=0;i<boy;i++)
	{
		for(int j=0;j<(boy-i);j++)
		{
			printf(" ");
		}
		for(int k=0;k<boy;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void cikis() //cikis fonksiyonunu programa devam etmek icin veya programdan cikmak icin kullandim
{
	char tus;
	
	printf("Devam Etmek Icin Bir Tusa Basiniz :");
	getch();        // bir tusa basmasini beklemek icin
	system("cls");  //cizilen sekilden sonra ekranin temizlenmesi icin
	scanf("%c",&tus);
		main();     // ana ekrana geri donebilmek icin main fonksiyonunu cagirdim
}
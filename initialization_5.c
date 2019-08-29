int g1 = 10;  //gecerli, sabit ifadesi ile ilk deger veriliyor
//int g2 = g1; //C'de gecersiz (statik omurlu degiskenlere sabit ifadesi ile ilk deger vermek zorunlu) C++'da gecerli

int main()
{
	int x = 10, y = x * x, z = y + x; //gecerli
	int g1 = g1; //tanimsiz davranis - yerel g1 degiskenine kendi cop degeri ile ilk deger veriliyor
}

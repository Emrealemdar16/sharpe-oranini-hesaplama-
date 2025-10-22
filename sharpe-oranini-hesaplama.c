#include <stdio.h>
#include <stdlib.h>

int main()
{
    float getiri,risksiz_faiz,standart_sapma,sharpe_orani; //float ile atadıgımız degerlerı ondalıklı sayı olarak tanımlarız.

   printf( "getiri oraninin yuzde(%%) kac oldugunu giriniz:"); 
    scanf("%f",&getiri);

    printf("risksiz_faiz oraninin yuzde(%%) kac oldugunu giriniz: ");  //scanf komutlarıyla kullanıcıdan 3 tane sayı gırmesı ıstenmıs ve prıntlerle ekrana yazılarak kullanıcıya bılgılendıre yapılmıstır.
    scanf("%f",&risksiz_faiz);

    printf("standart_sapma oraninin yuzde(%%) kac oldugunu giriniz:");
    scanf("%f",&standart_sapma);

    if (standart_sapma == 0){
        printf("--hata--\tstandart_sapma 0 olamaz.\n");  //standart sapma degerının 0 olamıcagı belırtılmıstır ve 0 yazılırsa hata mesajı ekrana verılıp program sıfırlanmıstır.
        return 1;
    }
    sharpe_orani=(getiri/100-risksiz_faiz/100)/(standart_sapma/100);  //sharpe oranının formulu.
    printf("sharpe_orani:%f\n\n",sharpe_orani);

    if(sharpe_orani<0){
        printf("COK ZAYIF.\t Kabul edilemez bir getiri\n");
    }

    else if(sharpe_orani<1){
        printf("ZAYIF.\t Riske gore yetersiz getiri\n");   //sharpe oranının aldıgı degere gore alınan rısk durumu ekranda kullanıcıya gosterılmıstır.
    }
    else if(sharpe_orani<2){
        printf("IYI.\t Riske gore kabul edilebilir\n");
    }
    else if(sharpe_orani<3){
        printf("COK IYI.\t Riske deger getiri");
    }
    else{
        printf("MUKEMMEL.\t Riske gore harika getiri");
    }

    return 0;
}

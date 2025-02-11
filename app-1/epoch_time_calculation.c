#include <stdio.h>
#include <time.h>

struct TarihSaat{

    int gun;
    int ay;
    int yil;
    int saat;
    int dakika;
    int saniye;

};

int main(){

    struct TarihSaat tarih1, tarih2;
    time_t epoch1, epoch2, zamanFarki;

    printf("Birinci tarih ve saati girin (gg aa yyyy ss dd sn): ");
    scanf("%d %d %d %d %d %d", 
        &tarih1.gun, &tarih1.ay, &tarih1.yil, &tarih1.saat, &tarih1.dakika, &tarih1.saniye);

    printf("Ikinci tarih ve saati girin (gg aa yyyy ss dd sn): ");
    scanf("%d %d %d %d %d %d", 
        &tarih2.gun, &tarih2.ay, &tarih2.yil, &tarih2.saat, &tarih2.dakika, &tarih2.saniye);

    struct tm tm1 = {0};
    
    tm1.tm_mday = tarih1.gun;
    tm1.tm_mon = tarih1.ay - 1;
    tm1.tm_year = tarih1.yil - 1900;
    tm1.tm_hour = tarih1.saat;
    tm1.tm_min = tarih1.dakika;
    tm1.tm_sec = tarih1.saniye;

    struct tm tm2 = {0};

    tm2.tm_mday = tarih2.gun;
    tm2.tm_mon = tarih2.ay - 1;
    tm2.tm_year = tarih2.yil - 1900;
    tm2.tm_hour = tarih2.saat;
    tm2.tm_min = tarih2.dakika;
    tm2.tm_sec = tarih2.saniye;

    epoch1 = mktime(&tm1);
    epoch2 = mktime(&tm2);

    zamanFarki = difftime(epoch2, epoch1);

    if(zamanFarki < 0){

        zamanFarki = -zamanFarki;
    }

    printf("Birinci tarih epoch zamani: %ld\n", epoch1);
    printf("Ikinci tarih epoch zamani: %ld\n", epoch2);
    printf("Zaman farki (saniye): %ld\n", zamanFarki);
    printf("Zaman farki (dakika): %ld\n", zamanFarki/60);
    printf("Zaman farki (saat): %ld\n", zamanFarki/3600);
    printf("Zaman farki (gun): %ld\n", zamanFarki/(3600*24));

    return 0;
}
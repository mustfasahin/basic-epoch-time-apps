#include <stdio.h>
#include <time.h>

struct Date{

    int day;
    int month;
    int year;
};

struct Date getDate(const char *prompt){

    struct Date date;

    printf("\n%s\n", prompt);

    printf("Gun: ");
    scanf("%d", &date.day);
    printf("Ay: ");
    scanf("%d", &date.month);
    printf("Yil: ");
    scanf("%d", &date.year);

    return date;
}

void calculateDifference(struct Date date1, struct Date date2){

    struct tm t1 = {0};

        t1.tm_year = date1.year - 1900;
        t1.tm_mon = date1.month - 1;
        t1.tm_mday = date1.day;

    struct tm t2 = {0};

        t2.tm_year = date2.year - 1900;
        t2.tm_mon = date2.month - 1;
        t2.tm_mday = date2.day;

    time_t time1 = mktime(&t1);
    time_t time2 = mktime(&t2);

    double diff = difftime(time2, time1);

        if(diff < 0)
            diff = -diff;

    double days = diff / (24*60*60);
    double years = days / 365;

    printf("\nSonuclar\n");
    printf("Epoch sayisi(saniye): %lf\n", diff);
    printf("Gun sayisi: %lf\n", days);
    printf("Yil sayisi: %lf\n", years);
}

int main(){

    int choice;

    printf("Tarih Farki Hesaplayici\n\n");
    printf("--------------------------\n\n");

    struct Date date1, date2;
    
    while(1){

        printf("\n1. Iki tarih arasi hesaplama\n");
        printf("2. Dogum gunu hesaplama\n");
        printf("3. Cikis\n\n");
        
        printf("Seciminiz: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                date1 = getDate("Ilk tarihi giriniz");
                date2 = getDate("Ikinci tarihi giriniz");
                calculateDifference(date1, date2);
                break;

            case 2:
                date1 = getDate("Dogum tarihinizi giriniz");

                time_t now = time(NULL);
                struct tm *today = localtime(&now);
                struct Date currentDate = {

                    today -> tm_mday,
                    today -> tm_mon + 1,
                    today -> tm_year + 1900
                };

                calculateDifference(date1, currentDate);
                break;

            case 3:
                printf("\nProgram sonlandiriliyor...\n");
                return 0;

            default:
                printf("\nGecersiz secim!\n");
        }
    }

    return 0;
}
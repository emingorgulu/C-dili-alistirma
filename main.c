#include <stdio.h>

int main() {
    int a, b;
    printf("Iki sayi giriniz: ");
    scanf("%d %d", &a, &b);

    printf("Toplam: %d\n", a + b);
    printf("Fark: %d\n", a - b);
    printf("Carpim: %d\n", a * b);
    if (b != 0)
        printf("Bolum: %f\n",(float) a / b);
    else
        printf("tanimsiz\n");
        printf("islemler bitmistir.\n");

int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi > 0)
        printf("Pozitif\n");
    else if (sayi < 0)
        printf("Negatif\n");
    else
        printf("Notr\n");
        printf("Pozitif negatif bulucu bitti.\n");

char harf;
    printf("Bir harf giriniz: ");
    scanf(" %c", &harf);

    if (harf=='a'||harf=='e'||harf=='i'||harf=='o'||harf=='u'||
        harf=='A'||harf=='E'||harf=='I'||harf=='O'||harf=='U')
        printf("Sesli harf\n");
    else
        printf("Sessiz harf\n");
        printf("Harf bulucu bitti.\n");

int n;
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i > 50) break;
        if (i % 3 == 0) continue;
        printf("%d\n", i);
    }
    printf("sayi sayma bitti\n");

    int notlar[5][4];
    float ortalama;

    for (int i = 0; i < 5; i++) {
        printf("%d. ogrencinin 4 notunu giriniz: ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &notlar[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        ortalama = 0;
        for (int j = 0; j < 4; j++) {
            ortalama += notlar[i][j];
        }
        ortalama /= 4.0;
        printf("%d. ogrencinin ortalamasi: %.2f -> %s\n", i+1, ortalama,
               (ortalama < 50) ? "Kaldi" : "Gecti");
    }
    printf("ortalama hesaplama bitti.\n");

    int x, y, z, temp;
    printf("Uc sayi giriniz: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y) { temp = x; x = y; y = temp; }
    if (x > z) { temp = x; x = z; z = temp; }
    if (y > z) { temp = y; y = z; z = temp; }

    printf("Kucukten Buyuge siralanis: %d %d %d\n", x, y, z);

    return 0;
}

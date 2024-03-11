#include <stdio.h>

int asal_sayi_mi(int sayi) {
    int asal_sayi = 1;
    for (int j = 2; j < sayi; j++) {
        if (sayi % j == 0) {
            asal_sayi = 0;
            break; // Eğer bir bölen bulursak, asal değil demektir
        }
    }
    return asal_sayi;
}

int main() {
    int sayi = 77;
    if (asal_sayi_mi(sayi)) { // Fonksiyon, 1 (true) veya 0 (false) değeri döndürecektir
        printf("%d asal sayıdır.\n", sayi);
    } else {
        printf("%d asal sayı değildir.\n", sayi);
    }
    return 0;
}


  

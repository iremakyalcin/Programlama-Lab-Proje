#pragma once

#include <stdio.h>

int menuPrint(){

 int choice=0;

    printf("--------------------------------------------\n");
    printf("DEPREM VERILERI SORGU VE RAPORLAMA SISTEMI\n");
    printf("--------------------------------------------\n");
    printf("***Yapmak istediginiz islemi seciniz.***\n");
    printf("SORGULAMA ICIN 1'I TUSLAYINIZ.\n");
    printf("SIRALAMA ICIN 2'YI TUSLAYINIZ.\n");
    printf("KAYDETME ICIN 3'U TUSLAYINIZ.\n");
    printf("AYRISTIRMA ICIN 4'U TUSLAYINIZ.\n");
    printf("ANALIZ ICIN 5'I TUSLAYINIZ.\n");
    printf("CIKIS ICIN 6'YI TUSLAYINIZ.\n");
    scanf("%d" , &choice);

    return 0;

}
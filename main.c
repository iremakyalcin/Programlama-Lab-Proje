#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"  //menüyü çağıran kütüphane



int main(){

    FILE *fp;  //dosya pointer'ı

    fp = fopen("/Users/iremakyalcin/Desktop/earthquake.csv" , "r");  //fopen fonksiyonu ile dosyayı read komutuyla açıyoruz

    if(fp==NULL){   //dosya boş mu (NULL ise) diye kontrol ediyoruz
        printf("Dosya acilamadi.\n");   //dosyanın açılamadığı bilgisi
    }
    
   int choice;  //switch yapısı için kullanıcıdan değer alan değişken

   do{

       menuPrint();  //menü fonksiyonunu çağırdık

   }while(choice!=0);


    fclose(fp);  //fclose fonksiyonu ile fp adlı dosyayı kapatıyoruz

    return 0;
}

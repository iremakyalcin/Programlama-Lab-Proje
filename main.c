#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"  //menü kütüphanesini ekledik
#include "sorgu.h"  //sorgu kütüphanesini ekledik
#include "test.h"



int main(){

    


    FILE *fp;  //dosya pointer'ı

    fp = fopen("/Users/iremakyalcin/Desktop/Lab/earthquake.csv" , "r");  //fopen fonksiyonu ile dosyayı read komutuyla açıyoruz

    if(fp==NULL){   //dosya boş mu (NULL ise) diye kontrol ediyoruz
        printf("Dosya acilamadi.\n");   //dosyanın açılamadığı bilgisi
    }
    
    
int choice = 0;

//sorgu();


   do{

       menuPrint(&choice);  //menü fonksiyonunu çağırdık

       switch (choice){

           case 1:
           //sorgu(fp);
           break;

           case 2:
           //sirala();
           break;

           case 3:
           //kaydet();
           break;

           case 4:
           //ayristir();
           break;

           case 5:
           //analiz();
           break;

       }

   }while(choice!=0);
      
    fclose(fp);
    return 0;
}

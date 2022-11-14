#include <stdio.h>
#include <stdlib.h>

#define DATA_NAME 50
#define COUNTRY_VAL 1000
#define CITY_VAL 1000

void saveCountry()  //aranan ülke verilerinin kaydı
{

    FILE* fp;  //file pointer
	FILE* save;  
	char dataName[DATA_NAME];
	char data;
	
	fp = fopen("data/file1.txt", "r");   //read modu ile dosya açma

	printf("Dosya:"); //kullanıcıdan alınan dosya adı
    scanf("%s",path);  //dosya path'i
    char country[COUNTRY_VAL];

	printf(country, "%s.csv", dataName);   //csv olarak kaydetme
	fp=fopen(country,"w");  //write modu ile dosyayı açma

    while ((data = fgetc(fp)) != EOF)  //dosya açılma kontrol
	fputc(data, save);

    fclose(fp);  
    fclose(save);
    
}

void saveCity()   //aranan şehir verilerinin kaydı
{

    FILE* fp;  //file pointer
	FILE* save;
	char dataName[DATA_NAME];
	char data;
	
	fp = fopen("data/file2.txt", "r");   //read modu ile dosya açma

	printf("Dosya:"); //kullanıcıdan alınan dosya adı
    scanf("%s",path);  //dosya path'i
    char city[CITY_VAL];

	printf(city, "%s.csv", dataName);   //csv olarak kaydetme
	fp=fopen(city,"w");  //write modu ile dosyayı açma

    while ((data = fgetc(fp)) != EOF)  //dosya açılma kontrol
	fputc(data, save);

    fclose(fp);  
    fclose(save);
    
}
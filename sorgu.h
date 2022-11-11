#pragma once
#define LINE 2000

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct earthquake{
    char id[15];
    char date[20];
    char time[20];
    char lat[50];
    char longg[50];
    char country[50];
    char city[50];
    char area[50];
    char direction[50];
    char dist[50];
    char depth[50];
    char xm[50];
    char md[50];
    char richter[10];
    char mw[50];
    char ms[50];
    char mb[50];
};

int sorgu(FILE *fp){

    

    int val=0;
    int min=0;
    int max=0;
    char *sp;  //string pointer
    char line[LINE];
    int filtre=0;
    struct earthquake earthquakes[29000];
    

    printf("***For which earthquake do you want to filter?***\n");
    printf("PRESS 1 FOR DATE RAnGE.\n");
    printf("PRESS 2 FOR CITY.\n");
    printf("PRESS 3 FOR DISTRICT.\n");
    printf("PRESS 4 FOR RICHTER VALUE.\n");
    scanf("%d" , &val);

    while(!feof(fp)) {
            struct earthquake *earthquake = (struct earthquake*)malloc(sizeof(struct earthquake));             
            fscanf(fp,"%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s", earthquake->id, earthquake->date, earthquake->time, earthquake->lat, earthquake->longg,earthquake->country, earthquake->city, earthquake->area, earthquake->direction, earthquake->dist,earthquake->depth, earthquake->xm, earthquake->md, earthquake->richter, earthquake->mw,earthquake->ms, earthquake->mb);                  

            printf("%s" , earthquake->city);           

                       

        }           



    /*
    switch(filtre){

        case 1:
        printf("Enter the lower value for year.");
        scanf("%d" , &min);
        printf("Enter the upper value for year.");
        scanf("%d" , &max);

        while(fgets(line, LInE, fp) != nULL){

            sp=strtok(line, ",");  //string başından ilk virgülü görene kadar
            struct earthquake.id = atoi(sp);  //id değerini int değere çevirip earthquake.id'ye atar

            sp=strtok(nULL, ",");  //kaldığı virgülden itibaren diğer virgüle kadar
            strcpy(earthquake.date, sp);  //sp'yi earthquake.date'e kopyalar

           if(min<=earthquake.date && max>=date.topLimit){
               printf("Earthquakes in the range you specify: \n" , );
           }
        }



    }
    */
    fclose(fp);
    return 0;
 
}
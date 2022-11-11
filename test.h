#include <stdio.h>

struct earthquakee{
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

void deneme(FILE *fp){

char line[1000];
char *token;
int counter = 0;

while(fgets(line,sizeof(line),fp)){

counter++;
   struct earthquakee *earthquake = (struct earthquakee*)malloc(sizeof(struct earthquakee));             
            //fscanf(fp,"%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s", earthquake->id, earthquake->date, earthquake->time, earthquake->lat, earthquake->longg,earthquake->country, earthquake->city, earthquake->area, earthquake->direction, earthquake->dist,earthquake->depth, earthquake->xm, earthquake->md, earthquake->richter, earthquake->mw,earthquake->ms, earthquake->mb);                  
    

token=strtok(line,",");
if (token != NULL) {
    strcpy(earthquake->id,token);
}

token=strtok(NULL,",");
if (token != NULL) {
    strcpy(earthquake->date,token);
}

token=strtok(NULL,",");
if (token != NULL) {
    strcpy(earthquake->time,token);
}


token=strtok(NULL,",");
if (token != NULL) {
    strcpy(earthquake->lat,token);
}


token=strtok(NULL,",");
if (token != NULL) {
    strcpy(earthquake->longg,token);
}


token=strtok(NULL,",");
if (token != NULL) {
    strcpy(earthquake->country,token);
}


token=strtok(NULL,",");
if (token != NULL) {
    strcpy(earthquake->city,token);
}


token=strtok(NULL,",");
if (token != NULL) {
    strcpy(earthquake->area,token);
}


token=strtok(NULL,",");
if (token != NULL) {
    strcpy(earthquake->direction,token);
}


token=strtok(NULL,",");
if (token != NULL) {
    strcpy(earthquake->dist,token);
}


token=strtok(NULL,",");
if (token != NULL) {
    strcpy(earthquake->depth,token);
}


token=strtok(NULL,",");
if (token != NULL) {
   strcpy(earthquake->xm,token);
}


token=strtok(NULL,",");
if (token != NULL) {
   strcpy(earthquake->md,token);
}


token=strtok(NULL,",");
if (token != NULL) {
   strcpy(earthquake->richter,token);
}


token=strtok(NULL,",");
if (token != NULL) {
   strcpy(earthquake->mw,token);
}


token=strtok(NULL,",");
if (token != NULL) {
   strcpy(earthquake->ms,token);
}


token=strtok(NULL,",");
if (token != NULL) {
   strcpy(earthquake->mb,token);
}



            printf("%d %s\n" ,counter, earthquake->city);   



}

/*
    while(!feof(fp)) {
            struct hasan *hasan = (struct hasan*)malloc(sizeof(struct hasan));             
            fscanf(fp,"%s",hasan->line);
            hasan->line="benim adım hasan\n";

            printf("%s" , hasan->line);           
                   

        }  
        */       

}
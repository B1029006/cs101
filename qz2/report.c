#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
#include <string.h>

FILE* reportFile;
FILE* openRecords;
static char date[32];


typedef struct lottoRecord{
 int lotto_no;//= currentCount
 int lotto_receipt;//= i *55
 int emp_id;//= id
 char lotto_date[32];//= date
 char lotto_time[32];//= Time
}lotto_record_t; 

void cutTheTime(){ //cut the time to date&time
 time_t now = time(0);
 strftime(date, 100, "%Y%m%d", localtime(&now));
 //strftime(Time, 100, "%H:%M:%S", localtime(&now));
}
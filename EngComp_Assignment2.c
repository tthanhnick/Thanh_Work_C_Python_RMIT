/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2020B
  Assessment: Assessment 2
  Author: Nguyen Tien Thanh
  ID: Your student id s3818111
  Created  date: 22/08/2020
  Acknowledgement: Clearly acknowledge the resources that you use to complete this assessment
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char year[12][4]={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", 
          "Aug", "Sep", "Oct", "Nov", "Dec"};
          
// WRITE YOUR FUNCTION HERE
void strdate(char *src, char *dest) {
    //name of variable
    int i=0,j=0;
    int month=0;
    char temp[6];
    
    //take the number out of punctuation and substitute to *dest
    // Day concatenate to dest
    dest [0] = src [0];
    dest [1] = src [1];
    dest [2] = ' ';
    // Month concatenate to dest
    month = (int) ((src[3]-'0')*10)+(src[4]-'0'); 
    for(int i=0;i<12;i++){
          if ((month-1)==i){
            strcat(dest, year[i]);
            break;
          }
    }
    // Year concatenate to dest
    temp[0] = ' ';
    temp[1] = src [6];
    temp[2] = src [7];
    temp[3] = src [8];
    temp[4] = src [9];
    strcat(dest,temp);
}

// PLEASE DON'T CHANGE ANYTHING FROM THIS LINE
int main() {
    // Get date in dd/mm/yyyy format
    char date1[11];
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date1);

    // Test the function
    char date2[20];  // 20 characters is enough for date2
    strdate(date1, date2);
    printf("%s\n", date2);

    return 0;
}

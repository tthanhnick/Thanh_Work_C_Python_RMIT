/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2020B
  Assessment: Assessment 3
  Author: Nguyen Tien Thanh
  ID: s3818111
  Created  date: 19/09/2020
  Acknowledgement: Clearly acknowledge the resources that you use to complete this assessment
*/

// Declare header
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  // open FILE
  FILE *fp = fopen("data.txt", "r");
  FILE *fp1 = fopen("result.txt", "w");

  // declare variable
  float average = 0.0;
  int word_len = 1; // count first word - no spaces
  int char_len = 0;
  char c = '\0';
  if (fp == NULL)
  {
    fprintf(stderr, "Could not open input file.\n");
    return 1;
  }

  if (fp1 == NULL)
  {
    fprintf(stderr, "Could not open output file.\n");
    fclose(fp);
    return 1;
  }
  // while function to get string
  while ((c = fgetc(fp)) != EOF)
  {
    if (isspace(c) == 0) // if(c != ' ')
    {
      char_len++;
    }
    if (isspace(c) != 0) // if(c == ' ')
    {
      word_len++;
    }
  }
  // calculate average
  average = (float)(char_len - 3) / (float)word_len;

  // print to another file
  fprintf(fp1, "%.2f", average);
  fclose(fp);
  fclose(fp1);
  return 0;
}

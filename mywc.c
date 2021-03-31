#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(int argc, char*argv[])
{
  FILE * fp;
  char * line = NULL;
  size_t len=0;
  ssize_t read;

  if (argc < 2)
  {
    printf("my_grep: searchterm{file ...]\n");
    exit(EXIT_FAILURE);

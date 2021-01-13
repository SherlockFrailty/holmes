#include <stdio.h>
#include <stdlib.h>


void reverseWord(char* start, char* end) {
 int len = end - start;
 for (int i = 0, j = len - 1; i < j; i++, j--) {
  char tmp = start[i];
  start[i] = start[j];
  start[j] = tmp;
 }
}


void Reverse(char* arr) {
 char* start = arr;
 char* end;
 int i = 0;
 for (i = 0; arr[i]; i++) {
  if (arr[i]!='a'&&arr[i]!='b'&&arr[i]!='c'&&arr[i]!='d'&&arr[i]!='e'&&arr[i]!='f'&&arr[i]!='g'&&arr[i]!='h'&&arr[i]!='i'&&arr[i]!='j'&&arr[i]!='k'&&arr[i]!='l'&&arr[i]!='m'&&arr[i]!='n'&&arr[i]!='o'&&arr[i]!='p'&&arr[i]!='q'&&arr[i]!='r'&&arr[i]!='s'&&arr[i]!='t'&&arr[i]!='u'&&arr[i]!='v'&&arr[i]!='w'&&arr[i]!='x'&&arr[i]!='y'&&arr[i]!='z'&&arr[i]!='A'&&arr[i]!='B'&&arr[i]!='C'&&arr[i]!='D'&&arr[i]!='E'&&arr[i]!='F'&&arr[i]!='G'&&arr[i]!='H'&&arr[i]!='I'&&arr[i]!='J'&&arr[i]!='K'&&arr[i]!='L'&&arr[i]!='M'&&arr[i]!='N'&&arr[i]!='O'&&arr[i]!='P'&&arr[i]!='Q'&&arr[i]!='R'&&arr[i]!='S'&&arr[i]!='T'&&arr[i]!='U'&&arr[i]!='V'&&arr[i]!='W'&&arr[i]!='X'&&arr[i]!='Y'&&arr[i]!='Z') {
   end = arr + i;
   reverseWord(start, end);
   start = end + 1;
  }
 }
 reverseWord(start, arr + i);
 puts(arr);
}

int main() {
 char arr[1000] = {"\0"};
 int ch,i=0;
 while((ch=getchar())!='\n') arr[i++]=ch; 
 Reverse(arr);
 return 0;
}


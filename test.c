#include <stdio.h>
#include <string.h>
void str(char A[10][21]);

int main(void)
{
  char a[10][21];
  int i;

  printf("10個の半角英数文字列を入力します\n");
  for(i=0;i<10;i++){
	scanf("%s", a[i]);
  }
  str(a);

  printf("半角英数文字列を入れ替えると次のようになります\n");
  for(i=0;i<10;i++)
    {
      printf("%s ",*(a+i));
    }
  printf("\n");
  return 0;
}

void str(char A[10][21])
{
  char tmp[21];
  int i,j,k;

   for(i=0;i<10;i++){
	for(j=i+1;j<10;j++){
		if( strcmp(A[i],A[j]) > 0 ){
			strcpy(tmp,A[i]);
			strcpy(A[i],A[j]);
	    		strcpy(A[j],tmp);
			/*for(k=0;k<10;k++)
    {
      printf("%s ",*(A+k));
    }
  printf("\n");*/
	  	}
      	}
   }
}


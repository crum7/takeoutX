

#include<stdio.h>
#include<string.h> 
 
int main(void)
{
	//ここに空白・タブ・改行を除いた16進数を含むアセンブリ言語を貼り付け。
	//https://html-css-javascript.com/n-space-tab/
  char *str="";
 

for(int i=0;i<20000;i++){


  if(strncmp("h",&str[i],1)==0){

//hから前の２文字から表示
	printf("%.*s",1,&str[i-2]);
	printf("%.*s",1,&str[i-1]);
	printf("%.*s\n",1,&str[i]);
  }
//https://www.rapidtables.org/ja/convert/number/hex-to-ascii.html
}
  return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{                                                             
	char str1[100], str2[100];
	int i,j,c=0;
	int k=0;
	
	scanf("%s",&str1);
	scanf("%s",&str2);
	
	for(i=0; i<strlen(str2) ;i++)
	{
		 for(j=0; j<strlen(str1) ;j++)
		   {
		   	if(str2[i] == str1[j])
		   	 {
		
		   	 	 str1[j]= '*';
				}
				else
				k++;
		   }
	}
	
	if(k == strlen(str2))
	{
		printf("-1");
		
	}
	else
	{
	
for(i=0;i< strlen(str1);i++)
{
	if(str1[i] != '*')
	  printf("%c",str1[i]);
	
}
}
	return 0;
}




   /* get the string 1 and string 2,
      
      check if the charcters in str2 present in str1,
      
      if present means put a charcter '*' in that place of string1;
      
      the print the string with the character of '*'
      
      required output will be displayed. */

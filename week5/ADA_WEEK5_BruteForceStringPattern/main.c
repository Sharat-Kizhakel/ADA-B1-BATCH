#include <stdio.h>
#include <string.h>
int pattern_text(char Text[],char pattern[]){
    int i,j;
    int n=strlen(Text);
    int m=strlen(pattern);
    for(i=0;i<=(n-m);i++){
        j=0;
   while(j<m&&Text[i+j]==pattern[j]){
             j++;
        }
        if(j==m)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
   char text[20];
   char pattern[20];
   printf("Enter the text\n");
   scanf("%s",text);
   printf("Enter the pattern\n");
    scanf("%s",pattern);
    if(pattern_text(text,pattern)==-1)
    {
printf("The pattern is not present in the text");
    }
    else
    {
printf("The pattern is found at index %d in the given text",pattern_text(text,pattern));
   }
return 0;
}



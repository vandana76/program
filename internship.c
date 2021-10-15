#include <stdio.h>
#include <string.h>
 const int MAX_CHAR = 26;
void findAndPrintUncommonChars(char *str1,char *str2,int l1,int l2)
{
int present[MAX_CHAR];
int i;

    for (i=0; i<MAX_CHAR; i++)
present[i] = 0;
for (i=0; i<l1; i++)
present[str1[i]-'a']=1;
    for (i=0; i<l2; i++)

    {
        if (present[str2[i] - 'a'] == 1|| present[str2[i] - 'a'] == -1)
 present[str2[i] - 'a'] = -1;
        else
 present[str2[i] - 'a'] = 2;

    }

// print all the uncommon characters
    for (int i=0; i<MAX_CHAR; i++)
        if (present[i] == 1 || present[i] == 2 )
          printf("%c",i+'a');
}
 
// Driver program to test above
int main()
{
    char str1[MAX_CHAR],str2[MAX_CHAR];
    int l1,l2;
    fgets(str1,MAX_CHAR,stdin);
    fgets(str1,MAX_CHAR,stdin);
    l1=strlen(str1);
    l2=strlen(str2);
    findAndPrintUncommonChars(str1, str2,l1,l2);
    return 0;
}

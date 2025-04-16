#include <stdio.h>
#include <string.h>
void replaceWord(char *str, const char *oldWord, const char *newWord)
{
    char result[1000];
    int i, cnt=0;
    int newWlen=strlen(newWord);
    int oldWlen=strlen(oldWord);
    for (i=0;str[i]!='\0';i++) 
	{
        if (strstr(&str[i], oldWord)==&str[i])
		{
            cnt++;
            i+=oldWlen-1;
        }
    }
    i=0;
    while(*str){
        if (strstr(str, oldWord)==str)
		{
            strcpy(&result[i], newWord);
            i+=newWlen;
            str+=oldWlen;
        } else 
		{
            result[i++]=*str++;
        }
    }
    result[i]='\0';
    strcpy(str, result);
}
int main()
{
    char str[1000], oldWord[100], newWord[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the word to replace: ");
    scanf("%s", oldWord);
    printf("Enter the new word: ");
    scanf("%s", newWord);
    replaceWord(str, oldWord, newWord);
    printf("Old string and updated string together: %s\n", str);
    return 0;
}


//Contents: strings in C
#include <stdio.h>

int sizeStr(char *str) {
    int size = 0;
    while (*(str + size++) != '\0');
    return --size;
}

int sizeStr2(str)
char str[];
{
    int size = 0;
    while (str[size++] != '\0');
    return --size;
}

int strpos(char *fstStr,char *sndStr) { //Doubtful implementation!
    int len1 = sizeStr(fstStr), len2 = sizeStr(sndStr),i,j1,j2;
    for (i = 0; i + len2 <= len1; i++) 
        for (j1 = i,j2 = 0; j2 <= len2 && *(fstStr + j1) == *(sndStr + j2);j1++,j2++)
            if (j2 == len2) return i;
    return -1;
}

void concat(str1,str2) 
char str1[],str2[];
{
    int i,j;
    for (i = 0; str1[i] != '\0'; i++);
    for (j = 0; str2[j] != '\0'; str1[i++] = str2[j++]);
}

void substr(str1,i,j,str2) 
char str1[],str2[];
int i,j;
{
    int aux;
    for (aux = 0; j > 0; str2[aux++] = str1[i++], j--);
    str2[aux] = '\0';
}

int main(){
    char myCountry[30] = {"Brazil"};
    printf("%s is your country\n",myCountry);
    printf("It has %d letters\n",sizeStr(myCountry));
    char employee[40] = {"Jorge Westbrown"};
    printf("%d\t%d\n",sizeStr(employee),sizeStr2(employee));
    printf("%d\n",strpos("abcdefg","fg"));
    concat(myCountry," is my country");
    printf("%s\n",myCountry);
    concat(employee," is from England");
    printf("%s\n",employee);
    char england[8];
    substr(employee,24,7,england);
    printf("%s\n",england);
    char msg[13];
    substr("The world is changing...",0,12,msg);
    printf("%s\n",msg);

    return 0;
}
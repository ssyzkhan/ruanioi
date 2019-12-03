#include<stdio.h>
#include<string.h>
int main(){
    char str[60];
    int len,i,j,chr[26];
    char mmin='z';
    scanf("%s",str);
    len=strlen(str);
    for(i=len-1;i>=1;i--)
        if(str[i-1]<str[i])break;
    if(i==0){
        printf("No result!\n");
        return 0;
    }
    for(j=0;j<i-1;j++)putchar(str[j]);
    memset(chr,0,sizeof(chr));
    for(j=i;j<len;j++){
        if(str[j]>str[i-1]&&str[j]<mmin)
            mmin=str[j];
        chr[str[j]-'a']++;
    }
    chr[mmin-'a']--;
    chr[str[i-1]-'a']++;
    putchar(mmin);
    for(i=0;i<26;i++)
        for(j=0;j<chr[i];j++)
            putchar(i+'a');
    putchar('\n');
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    if(fgets(str,sizeof(str),stdin)!=NULL){
        str[strlen(str)-1]='\0';
    }
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            printf("&nbsp;");
        }else{
            printf("%c",str[i]);
        }
	}
return 0;}

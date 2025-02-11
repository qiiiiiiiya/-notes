#include<stdio.h>
#include<stdlib.h>
int int_compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
void sort(int *arr,int n){
    qsort(arr,n,sizeof(int),int_compare);
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);}
            else{
                const char* empty_str = " ";
            printf("%s", empty_str);
		}
    
    }for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
        else {
            const char* empty_str = " ";
            printf("%s", empty_str);
			}
        }
}
int main(){
    int n=10;
    int *a=(int*)malloc(sizeof(int)*n);
    if(a==NULL){
        printf("内存分配失败\n");
        return 1;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
    int choice;
    while(1){
        if (scanf("%d", &choice) != 1) {
            printf("输入无效，请输入 0 或 1。\n");
            continue;
        }
        if (choice == 0) {
            break;
        }else if (choice == 1) {
            int *temp=(int*)realloc(a,sizeof(int)*(n+1));
            if(temp==NULL){
                printf("内存分配失败\n");
                return 1;
            }
            a=temp;
                printf("请输入一个新数字：");
                scanf("%d", &a[n]);
                n++;
                sort(a,n);
        } else {
            printf("输入无效，请输入 0 或 1。\n");
        }
    } 
    free(a);  
return 0;
}

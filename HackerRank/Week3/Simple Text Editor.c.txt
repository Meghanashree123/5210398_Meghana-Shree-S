#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LEN 1000000
typedef struct{
    int type;
    char*data;
}operation;


int main() {
    int Q,i;
    scanf("%d",&Q);
    char *s=calloc(MAX_LEN,sizeof(char));
    int len=0;
    operation*stack=malloc(Q*sizeof(operation));
    int t=-1;
    for(i=0;i<Q;i++){
        int type;
        scanf("%d",&type);
        if(type==1){
            char w[1000000];
            scanf("%s",w);
            int wlen=strlen(w);
            stack[++t].type=1;
            stack[t].data=strdup(w);
            strcpy(s+len,w);
            len=len+wlen;
            
            
        }else if(type==2){
            int k;
            scanf("%d",&k);
            stack[++t].type=2;
            stack[t].data=strndup(s+len-k,k);
            len=len-k;
            s[len]='\0';
        }else if(type==3){
            int k;
            scanf("%d",&k);
            printf("%c\n",s[k-1]);
        }else if(type==4){
            if(t>=0){
                operation last=stack[t--];
                if(last.type==1){
                    int wlen=strlen(last.data);
                    len=len-wlen;
                    s[len]='\0';
                    
                    
                }else if(last.type==2){
                    int dlen=strlen(last.data);
                    strcpy(s+len,last.data);
                    len=len+dlen;
                    
                }
                free(last.data);
            }
            
        }
    }
    free(s);
    for(i=0;i<=t;i++){
        free(stack[i].data);
        
    }
    free(stack);
    return 0;
}
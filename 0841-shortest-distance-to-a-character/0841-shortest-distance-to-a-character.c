/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shortestToChar(char* s, char c, int* returnSize) {
    int *a=(int *)malloc(sizeof(int)*10000);
    int min;
    for(int i=0;i<strlen(s);i++){
        min=100000;
        if(s[i]!=c){
            for(int j=0;j<strlen(s);j++){
                if(s[j]==c){
                    if(min>abs(i-j)){
                        min=abs(i-j);
                    }
                }
                
            }
        }
        else{
            min=0;
        }
        a[i]=min;
    }
    * returnSize=strlen(s);
    return a;
}
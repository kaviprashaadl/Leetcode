char* convertToBase7(int n) {
    int ini=n;
    if(n==0)
    return "0";
    if(n <0)
    n=n*-1;
    char a[100];
    char *b=(char *)malloc(sizeof(char)*100);
    int rem,num=0,i=0,k=0;
    while(n !=0){
    rem = n%7;
    a[i]=(char)rem+48;
    n=n/7;
    i++;
    }
    //printf("%c",a[0]);
    //a[i]='\0';
    if(ini<0){
        b[0]='-';
        k++;
        ini=100;
        }
    for(int j=i-1;j>=0;j--){
        
        b[k]=a[j];
        k++;
        
    }
    b[k]='\0';
    
    printf("%s",b);
    return b;
}
int strStr(char* haystack, char* needle) {
    int c=0;
    if(strlen(haystack)<strlen(needle))
    return -1;
    if(strlen(haystack)==strlen(needle)){
        for(int i=0;i<strlen(haystack);i++){
            if(haystack[i]!=needle[i])
            return -1;
        }
        return 0;
    }
    for(int i=0;i<=strlen(haystack)-strlen(needle);i++){
        c=0;
        for(int j=0;j<strlen(needle);j++){
            if(haystack[i+j]==needle[j]){
                c++;
            }
        }
        if(c==strlen(needle)){
            return i;
        }
    }
    return -1;
}
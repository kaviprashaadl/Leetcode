
bool isValid(char* s) {
    char a[100000];
    int i=0;
    for(int k=0;k<strlen(s);k++){
        if(s[k]=='('){
        a[i]=s[k];
        i++;
        }
        if(s[k]=='{'){
        a[i]=s[k];
        i++;
        }
        if(s[k]=='['){
        a[i]=s[k];
        i++;
        }
        if(s[k]==')'&&(--i<0||a[i]!='(')){
            return false;
        }
        if(s[k]=='}'&&(--i<0||a[i]!='{')){
            return false;
        }
        if(s[k]==']'&&(--i<0||a[i]!='[')){
            return false;
        }


    }
    if(i==0)
    return true;
    else
    return false;

}
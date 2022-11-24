int spellcheck(char[] str1,char[] str2,int k){
    int cnt=0;
    for(int i=0;i<str1.size();i++){
        if(str1[i]==str2[i]){
            continue;
        }
        else{
            cnt++;
        }
    }
    if(cnt==0){
        return 1;
    }
    else if(cnt<k){
        return 2;
    }
    else if(cnt==k){
        return 3;
    }
    else {
        return 4;
    }

}
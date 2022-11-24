int createnum(int a,int b,int c){
    int a[3];
    a[0]=a;
    a[1]=b;
    a[2]=c;
    sort(a,a+3);    


    int num=0;

    num=(a[2]*100)+(a[1]*10)+a[0];
    return num;
}
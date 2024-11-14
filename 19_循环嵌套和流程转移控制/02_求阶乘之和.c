void cycle1(){
    /********** Begin **********/
    int total;
    for(int i=1,k=1;i<11;i++){
        k*=i;
        total+=k;
    }
    printf("%d\n",total);
    /********** End **********/
}
void cycle2(){
    /********** Begin **********/
    int total=0;
    for(int i=1,k=1;i<11;i++){
        k=1;
        for(int j=1;j<=i;j++){
            k*=j;
        }
        total+=k;
    }
    printf("%d\n",total);
    /********** End **********/
}


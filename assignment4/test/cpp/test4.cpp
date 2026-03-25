int fun(int a, int b, int n){
    int c = 0;
    for(int j=0; j < b; j++){
        a += b;
    }
    // Negative dependencies
    for(int i = 0; i < b; i++){
        a += b;
    }
    // Trip Count (b!=n)
    for(int k=0; k < n; k++){
        a += b;
    }
    return a + b;
}

int main(){
    return fun(1,2,3);
}
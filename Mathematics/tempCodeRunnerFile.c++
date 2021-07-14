
    for(int i=1;i<=max;i++){
        b[i] = b[i] + b[i-1];
    }
    int c[n];
    for(int i=0;i<n;i++){
        c[b[a[i]]+1] = a[i];
        b[a[i]]--;
    }
    for(int i=0;i<n;i++){
        cout << a[i] <<  " ";
    }
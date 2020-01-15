//
// Created by Samik Biswas on 19-09-2019.
//

float taylor(float x, float n){

    static int p = 1;
    static int f = 1;
    int r;
    if (n == 0){
        return 1;
    }

    else {
        r = taylor(x, n-1);
        p = p * x; //This step will keep growing the power of x.
        f = f * n; //This will keep multiplying the factorial part.
        return r + p/n; //Finally with each step,
    }
}

float taylorFast(float x, float n){
    int static s = 1;
    if (n == 0){
        return s;
    } else{
        int s = 1 + x/n;
        return taylorFast(x, n-1);
    }
}
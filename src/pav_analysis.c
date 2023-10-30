#include <math.h>
#include "pav_analysis.h"

float compute_power(const float *x, unsigned int N) {
    float pot= 1e-12;
    for(unsigned int i = 0; i<N; i++){
        pot += x[i]*x[i];
    }
    return (10*log10(pot/N));
}

float compute_am(const float *x, unsigned int N) {
    float res= 0;
    for(unsigned int i = 0; i<N; i++){
        res += fabs(x[i]);
    }
    return (res/N);
}

float compute_zcr(const float *x, unsigned int N, float fm) {
    int zcr= 0;
    for(unsigned int i = 1; i<(N-1); i++){
        if(x[i]*x[i-1]<0){
            zcr++;
        }
    }
    return (fm/2)*(1/(N-1))*zcr;
<<<<<<< HEAD
}

//#include <math.h>
//#include "pav_analysis.h"

//int TLong = 0.002;

// code ventana p[n]


/*float compute_power(const float *x, unsigned int N) {
    float pot= 1e-12;
    for(unsigned int i = 0; i<N; i++){
        pot += x[i]*x[i];
    }
    return 10*log10(pot/N);
}

float compute_windowed_power(const float *x, unsigned int TLong, unsigned int TDesp, unsigned int N,float fm) {
    int Nv = fm*TLong;
    int Mv = fm*TDesp;
    float potw= 1e-12;
    int pulso[Nv] = ones;

    for (unsigned int j =0; j < (N/Nv); j++ ) {  
        for(unsigned int i = 0; i<Nv; i++){
            xv[i]=x[(Mv*j)+i]*pulso[i];            
            float Hamming[i]=0.54+0.46*cos(2*3.14*i);
            int potv += ((xv[i]*Hamming[i])*(xv[i]*Hamming[i]))/(Hamming[i]*Hamming[i]);
        }
        potw += potv;
    }
    return 10*log10(potw);
} 

float compute_am(const float *x, unsigned int N) {
    float res= 0;
    for(unsigned int i = 0; i<N; i++){
        res += fabs(x[i]);
    }
    return (res/N);
}

float compute_zcr(const float *x, unsigned int N, float fm) {
    int zcr= 0;
    for(unsigned int i = 1; i<(N-1); i++){
        if(x[i]*x[i-1]<0){
            zcr++;
        }
    }
    float fzcr = (((fm/2)/(N-1))*zcr);
    return fzcr;
}*/
=======
}
>>>>>>> 9de866284be5fefef35c9a032193f38bce287c3d

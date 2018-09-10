#include <stdio.h>
#include <stdlib.h>

void mm(float **A, float **B, float **C, int nla, int nca, int ncb){
    for(int i = 1; i < nla; i++){
        A[i] = A[i-1] + nca;
    }

    for(int i = 1; i < nca; i++){
        B[i] = B[i-1] + ncb;
    }

    for(int i = 1; i < nla; i++){
        C[i] = C[i-1] + ncb;
    }

    for(int i = 0; i < nla; i++){
        for(int j = 0; j < nca; j++){
            A[i][j] = i + j + 1;
        }
    }

    for(int i = 0; i < nca; i++){
        for(int j = 0; j < ncb; j++){
            B[i][j] = i + j + 1;
        }
    }

    for(int i = 0; i < nla; i++){
        for(int j = 0; j < ncb; j++){
            C[i][j] = 0;
        }
    }

    for(int i = 0; i < nla; i++){
        for(int j = 0; j < ncb; j++){
            for(int p = 0; p < nca; p++){
                C[i][j] = C[i][j] + A[i][p] * B[p][j];
            }
        }
    }
}
int main()
{
    float **Am, **Bm, **Cm;
    int nl1 = 4, nc1 = 3, nc2 = 2;

    Am = (float **)malloc(nl1 * sizeof(float*));
    Bm = (float **)malloc(nc1 * sizeof(float*));
    Cm = (float **)malloc(nl1 * sizeof(float*));

    Am[0] = (float*)malloc(nl1 * nc1 * sizeof(float));
    Bm[0] = (float*)malloc(nc1 * nc2 * sizeof(float));
    Cm[0] = (float*)malloc(nl1 * nc2 * sizeof(float));

    mm(Am, Bm, Cm, nl1, nc1, nc2);

    for(int i = 0; i < nl1; i++){
        for(int j = 0; j < nc1; j++){
           printf(" %.1f ", Am[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < nc1; i++){
        for(int j = 0; j < nc2; j++){
            printf(" %.1f ", Bm[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < nl1; i++){
        for(int j = 0; j < nc2; j++){
            printf(" %.1f ", Cm[i][j]);
        }
        printf("\n");
    }
    free(am[o]);
    free(am);
    free(bm[o]);
    free(bm);
    free(cm[o]);
    free(cm);

    return 0;
}

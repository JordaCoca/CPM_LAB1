
/*
    Problemas que se tienen que solucionar:
        - Eliminar los bucles que hay entre las sentencias --> usar variables "temporales"
        - Desplazar S1, S2, S3, S4, en 1 para eliminar la distancia
*/
for(i=1;i<N;i++)
{
 A[i] = B[i-1] + 13;
 B[i] = A[i] + C[i-1] * 2;
 C[i] = B[i] + D[i-1];
 D[i] = C[i] + E[i-1];
 E[i] = D[i] + 5;
}

/*
 *  Desplazado 
*/

for(i=1;i<N-1;i++)
{
 A[i+1] = B[i+1] + 13;
 B[i+1] = A[i+1] + C[i] * 2;
 C[i+1] = B[i+1] + D[i];
 D[i+1] = C[i+1] + E[i];
 E[i] = D[i] + 5;
}


for(i=0;i<N-1;i++){
    for(j=0;j<N-1;j++)
    {
        A[i+1][j+1] = A[i+1][j] * B[i][j] + C[i][j];
        D[i][j] = A[i+1][j+1] / 2;
        C[i][j] = A[i][j+1];
    }
}

for(i=1;i<N;i++)
{
 A[i] = B[i] + C[i-1];
 C[i] = A[i-1] + C[i];
 D[i] = A[i] * 2;
 E[i] = D[i] + C[i-2];
}
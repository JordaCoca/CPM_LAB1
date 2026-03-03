for(i=1;i<N;i++)
{
 A[i] = B[i-1] + 13;
 B[i] = A[i] + C[i-1] * 2;
 C[i] = B[i] + D[i-1];
 D[i] = C[i] + E[i-1];
 E[i] = D[i] + 5;
}
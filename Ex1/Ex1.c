for(i=1;i<N;i++)
{
 A[i] = B[i];
 C[i] = A[i] - B[i-1];
 E[i] = C[i+1]/2;
 B[i] = C[i] * 2;
}

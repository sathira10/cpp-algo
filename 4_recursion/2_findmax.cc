int max(int A[], int n) {
  if (n == 1) {
    return A[0];
  }

  int res = max(A, n - 1);

  if (res > A[n - 1])
    return res;
  else
    return A[n - 1];
}
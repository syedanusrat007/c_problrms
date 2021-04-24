#include <stdio.h>

void merge(int a[], int m, int b[], int n, int sorted[]) {
  int i, j, k;

  j = k = 0;

  for (i = 0; i < m + n;) {
    if (j < m && k < n) {
      if (a[j] < b[k]) {
        sorted[i] = a[j];
        j++;
      }
      else {
        sorted[i] = b[k];
        k++;
      }
      i++;
    }
    else if (j == m) {
      for (; i < m + n;i++,k++) {
        sorted[i] = b[k];
      }
    }
    else {
      for (; i < m + n;i++,j++) {
        sorted[i] = a[j];}
    }
  }
}

int main() {
  int a[100], b[100], m, n, c, sorted[200];
  scanf("%d", &m);
  for (c = 0; c < m; c++) {
    scanf("%d", &a[c]);
  }
  scanf("%d", &n);
  for (c = 0; c < n; c++) {
    scanf("%d", &b[c]);
  }

  merge(a, m, b, n, sorted);

  for (c = 0; c < m + n; c++) {
    printf("%d\n", sorted[c]);
  }

  return 0;
}




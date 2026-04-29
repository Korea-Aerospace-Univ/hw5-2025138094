#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
  int N;
  int a,b,c;
  bool is_correct_c = false;
  
  scanf("%d", &N);
  getchar();
 
  for(a = 1; 900 * a <= N; a++) {
    for(b=2; 750 * b <= N - 900*a; b += 2) {
        for(c=1; 200 * c <= N - 900*a - 750*b; c++) {
            if(900*a + 750*b + 200*c == N) 
            {
                if(c<a || c<b) {
                    printf("%d %d %d\n", a,b,c);
                    is_correct_c = true;
                }
            }
        }
    }
  }
  if(is_correct_c != true) printf("none");
  
  
  return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[]) {
  int t,i;
  scanf("%d", &t);
  int x = 0;
  char p[4];
  while(t--){
    scanf("%s", p);

    for(i=0; i<3; i++){
      if(p[i]=='+'){
        x++;
      }
      else if(p[i]=='-'){
        x--;
      }
    }
  }
  printf("%d\n", x/2);
  return 0;
}

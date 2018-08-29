int main(){
  TIPO x[4] = {1,2,3,4};
  int *p;

  for(int i = 0; i < 4; i++){
        p = (x + i);
        printf("%i\n",p);
  }
}

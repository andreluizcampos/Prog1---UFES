int main(){
  int n1, n2, q;
  scanf("%d %d",&n1,&n2);
  printf("RESP:");
  if(n1<n2){
    for(q=n1+1;q<n2;q++){
        if(q%2==0){
            printf("%d",q);
        }
    }
  }}
  

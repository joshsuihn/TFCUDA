__global__ t(int *d){
  atomicAdd(d, 1);}

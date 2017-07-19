#include <iostream>


__global__ void getMeSize(int *result) {
     result[0]=sizeof(void*);
}



int main() { 

    std::cout << "Come up and C++ me some time." << std::endl;

	
   #ifdef __CUDACC__
      std::cout << "__CUDACC__" << "\n";
   #else
      std::cout << "No __CUDACC__" << "\n";
   #endif 

   #ifdef __NVCC__
      std::cout << "__NVCC__" << "\n";
   #else
      std::cout << "No __NVCC__" << "\n";
   #endif 

   #ifdef __CUDA_ARCH__
      std::cout << "__CUDA_ARCH__" << "\n";
   #else
      std::cout << "No __CUDA_ARCH__" << "\n";
   #endif

   return 0;   
}



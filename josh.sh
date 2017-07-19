OUTPUT="$(find ./* -name *.o)"
#echo "${OUTPUT}"
#OUT="$(nm ./tensorflow/contrib/makefile/gen/obj/tensorflow/core/kernels/quantized_bias_add_op.o | grep  Eigen )" 
#echo "${OUT}"

for i in `find ./* -name *.o`; 
    do
      #`nm $($i)` ;
      #OUT="$(nm ${i} |  grep ' U ')" | grep Eigen8internal;  
      #OUT="$(nm ${i} |  grep "_ZN10tensorflow7functor11XentFunctorIN5Eigen9GpuDeviceEfEclERKS3_NS2_9TensorMapINS2_6TensorIKfLi2ELi1EiEELi16ENS2_11MakePointerEEESC_NS7_INS8_IfLi2ELi1EiEELi16ESB_EENS7_INS8_IfLi1ELi1EiEELi16ESB_EESE_" |  grep ' U ')" ;  
      OUT="$(nm ${i} |  grep "_ZZN9perftools8gputools4cuda13Diagnostician14FindDsoVersionEvENKUlP12dl_phdr_infojPvE_clES4_jS5_")" ;  
      if [[ -n "$OUT" ]]; then
         echo "${i}" ; 
         echo "${OUT}"
      fi
      
    done 

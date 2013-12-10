// typedef int SIMD_type __attribute__((__vector_size__(16)));

SIMD_type llvm_add_2(SIMD_type a, SIMD_type b);
SIMD_type llvm_add_4(SIMD_type a, SIMD_type b);
SIMD_type llvm_add_8(SIMD_type a, SIMD_type b);
SIMD_type llvm_add_16(SIMD_type a, SIMD_type b);
SIMD_type llvm_add_32(SIMD_type a, SIMD_type b);
SIMD_type llvm_add_64(SIMD_type a, SIMD_type b);
SIMD_type llvm_add_128(SIMD_type a, SIMD_type b);
SIMD_type llvm_sub_2(SIMD_type a, SIMD_type b);
SIMD_type llvm_sub_4(SIMD_type a, SIMD_type b);
SIMD_type llvm_sub_8(SIMD_type a, SIMD_type b);
SIMD_type llvm_sub_16(SIMD_type a, SIMD_type b);
SIMD_type llvm_sub_32(SIMD_type a, SIMD_type b);
SIMD_type llvm_sub_64(SIMD_type a, SIMD_type b);
SIMD_type llvm_sub_128(SIMD_type a, SIMD_type b);
SIMD_type llvm_mul_2(SIMD_type a, SIMD_type b);
SIMD_type llvm_mul_4(SIMD_type a, SIMD_type b);
SIMD_type llvm_mul_8(SIMD_type a, SIMD_type b);
SIMD_type llvm_mul_16(SIMD_type a, SIMD_type b);
SIMD_type llvm_mul_32(SIMD_type a, SIMD_type b);
SIMD_type llvm_mul_64(SIMD_type a, SIMD_type b);
SIMD_type llvm_mul_128(SIMD_type a, SIMD_type b);
SIMD_type llvm_and_2(SIMD_type a, SIMD_type b);
SIMD_type llvm_and_4(SIMD_type a, SIMD_type b);
SIMD_type llvm_and_8(SIMD_type a, SIMD_type b);
SIMD_type llvm_and_16(SIMD_type a, SIMD_type b);
SIMD_type llvm_and_32(SIMD_type a, SIMD_type b);
SIMD_type llvm_and_64(SIMD_type a, SIMD_type b);
SIMD_type llvm_and_128(SIMD_type a, SIMD_type b);
SIMD_type llvm_or_2(SIMD_type a, SIMD_type b);
SIMD_type llvm_or_4(SIMD_type a, SIMD_type b);
SIMD_type llvm_or_8(SIMD_type a, SIMD_type b);
SIMD_type llvm_or_16(SIMD_type a, SIMD_type b);
SIMD_type llvm_or_32(SIMD_type a, SIMD_type b);
SIMD_type llvm_or_64(SIMD_type a, SIMD_type b);
SIMD_type llvm_or_128(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_eq_2(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_eq_4(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_eq_8(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_eq_16(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_eq_32(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_eq_64(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_eq_128(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_sgt_2(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_sgt_4(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_sgt_8(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_sgt_16(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_sgt_32(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_sgt_64(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_sgt_128(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ugt_2(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ugt_4(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ugt_8(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ugt_16(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ugt_32(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ugt_64(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ugt_128(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_slt_2(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_slt_4(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_slt_8(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_slt_16(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_slt_32(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_slt_64(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_slt_128(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ult_2(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ult_4(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ult_8(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ult_16(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ult_32(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ult_64(SIMD_type a, SIMD_type b);
SIMD_type llvm_icmp_ult_128(SIMD_type a, SIMD_type b);
SIMD_type llvm_shl_2(SIMD_type a, SIMD_type b);
SIMD_type llvm_shl_4(SIMD_type a, SIMD_type b);
SIMD_type llvm_shl_8(SIMD_type a, SIMD_type b);
SIMD_type llvm_shl_16(SIMD_type a, SIMD_type b);
SIMD_type llvm_shl_32(SIMD_type a, SIMD_type b);
SIMD_type llvm_shl_64(SIMD_type a, SIMD_type b);
SIMD_type llvm_shl_128(SIMD_type a, SIMD_type b);
SIMD_type llvm_lshr_2(SIMD_type a, SIMD_type b);
SIMD_type llvm_lshr_4(SIMD_type a, SIMD_type b);
SIMD_type llvm_lshr_8(SIMD_type a, SIMD_type b);
SIMD_type llvm_lshr_16(SIMD_type a, SIMD_type b);
SIMD_type llvm_lshr_32(SIMD_type a, SIMD_type b);
SIMD_type llvm_lshr_64(SIMD_type a, SIMD_type b);
SIMD_type llvm_lshr_128(SIMD_type a, SIMD_type b);
SIMD_type llvm_ashr_2(SIMD_type a, SIMD_type b);
SIMD_type llvm_ashr_4(SIMD_type a, SIMD_type b);
SIMD_type llvm_ashr_8(SIMD_type a, SIMD_type b);
SIMD_type llvm_ashr_16(SIMD_type a, SIMD_type b);
SIMD_type llvm_ashr_32(SIMD_type a, SIMD_type b);
SIMD_type llvm_ashr_64(SIMD_type a, SIMD_type b);
SIMD_type llvm_ashr_128(SIMD_type a, SIMD_type b);

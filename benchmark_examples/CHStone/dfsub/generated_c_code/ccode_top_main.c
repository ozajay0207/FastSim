#include<stdio.h>
#define a_input_DataWidth 64
#define a_input_AddressRange 22
#define a_input_AddressWidth 5
#define a_input_DWIDTH 64
#define a_input_AWIDTH 5
#define a_input_MEM_SIZE 22
#define b_input_DataWidth 64
#define b_input_AddressRange 22
#define b_input_AddressWidth 5
#define b_input_DWIDTH 64
#define b_input_AWIDTH 5
#define b_input_MEM_SIZE 22
#define z_output_DataWidth 64
#define z_output_AddressRange 22
#define z_output_AddressWidth 5
#define z_output_DWIDTH 64
#define z_output_AWIDTH 5
#define z_output_MEM_SIZE 22
do_twos_complement( long long unsigned int a ){
 long long int temp = (long long int) a;
 return temp; 
}
void subFloat64Sigs(unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,unsigned long long int * ,int* dummy);
void top_main(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,int* dummy,unsigned long long int * a_input_rom[],unsigned long long int * b_input_rom[],unsigned long long int * z_output_rom[]){
int clock=*dummy;
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
   long long int ap_CS_fsm_state1=1;
   long long int ap_CS_fsm_state2=1;
   long long int ap_CS_fsm_state3=1;
   long long int ap_CS_fsm_state4=1;
   long long int ap_CS_fsm_state5=1;
   long long int ap_CS_fsm_state6=1;
   unsigned long long int a_input_address0=0;
   unsigned long long int a_input_address0__temp=0;
   unsigned long long int a_input_ce0=0;
   unsigned long long int a_input_ce0__temp=0;
   unsigned long long int a_input_q0=0;
   unsigned long long int a_input_q0__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_block_state5_on_subcall_done=0;
   unsigned long long int ap_block_state5_on_subcall_done__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=1;
   unsigned long long int b_input_address0=0;
   unsigned long long int b_input_address0__temp=0;
   unsigned long long int b_input_ce0=0;
   unsigned long long int b_input_ce0__temp=0;
   unsigned long long int b_input_q0=0;
   unsigned long long int b_input_q0__temp=0;
   unsigned long long int exitcond_fu_122_p2=0;
   unsigned long long int exitcond_fu_122_p2__temp=0;
   unsigned long long int grp_subFloat64Sigs_fu_111_ap_done=0;
   unsigned long long int grp_subFloat64Sigs_fu_111_ap_done__temp=0;
   unsigned long long int grp_subFloat64Sigs_fu_111_ap_idle=0;
   unsigned long long int grp_subFloat64Sigs_fu_111_ap_idle__temp=0;
   unsigned long long int grp_subFloat64Sigs_fu_111_ap_ready=0;
   unsigned long long int grp_subFloat64Sigs_fu_111_ap_ready__temp=0;
   unsigned long long int grp_subFloat64Sigs_fu_111_ap_return=0;
   unsigned long long int grp_subFloat64Sigs_fu_111_ap_return__temp=0;
   unsigned long long int grp_subFloat64Sigs_fu_111_ap_start=1;
   unsigned long long int grp_subFloat64Sigs_fu_111_ap_start__temp=1;
   unsigned long long int grp_subFloat64Sigs_fu_111_ap_start_reg=1;
   unsigned long long int grp_subFloat64Sigs_fu_111_ap_start_reg__temp=1;
   unsigned long long int i_1_fu_128_p2=0;
   unsigned long long int i_1_fu_128_p2__temp=0;
   unsigned long long int i_1_reg_185=0;
   unsigned long long int i_1_reg_185__temp=0;
   unsigned long long int i_reg_77=0;
   unsigned long long int i_reg_77__temp=0;
   unsigned long long int main_result_1_fu_176_p2=0;
   unsigned long long int main_result_1_fu_176_p2__temp=0;
   unsigned long long int main_result_reg_88=0;
   unsigned long long int main_result_reg_88__temp=0;
   unsigned long long int result_reg_100=0;
   unsigned long long int result_reg_100__temp=0;
   unsigned long long int tmp_1_fu_166_p2=0;
   unsigned long long int tmp_1_fu_166_p2__temp=0;
   unsigned long long int tmp_2_cast_fu_172_p1=0;
   unsigned long long int tmp_2_cast_fu_172_p1__temp=0;
   unsigned long long int tmp_2_fu_144_p3=0;
   unsigned long long int tmp_2_fu_144_p3__temp=0;
   unsigned long long int tmp_2_reg_215=0;
   unsigned long long int tmp_2_reg_215__temp=0;
   unsigned long long int tmp_3_fu_152_p3=0;
   unsigned long long int tmp_3_fu_152_p3__temp=0;
   unsigned long long int tmp_fu_134_p1=0;
   unsigned long long int tmp_fu_134_p1__temp=0;
   unsigned long long int tmp_itmp_fu_160_p2=0;
   unsigned long long int tmp_itmp_fu_160_p2__temp=0;
   unsigned long long int tmp_itmp_reg_220=0;
   unsigned long long int tmp_itmp_reg_220__temp=0;
   unsigned long long int tmp_reg_190=0;
   unsigned long long int tmp_reg_190__temp=0;
   unsigned long long int x1_reg_205=0;
   unsigned long long int x1_reg_205__temp=0;
   unsigned long long int x2_reg_210=0;
   unsigned long long int x2_reg_210__temp=0;
   unsigned long long int z_output_address0=0;
   unsigned long long int z_output_address0__temp=0;
   unsigned long long int z_output_ce0=0;
   unsigned long long int z_output_ce0__temp=0;
   unsigned long long int z_output_q0=0;
   unsigned long long int z_output_q0__temp=0;
	ap_done=0;
	ap_start=1;
   ap_ST_fsm_state1:
	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
   exitcond_fu_122_p2__temp = exitcond_fu_122_p2 ;
   i_1_fu_128_p2__temp = i_1_fu_128_p2 ;
   x1_reg_205__temp = x1_reg_205 ;
   tmp_itmp_reg_220__temp = tmp_itmp_reg_220 ;
   main_result_reg_88__temp = main_result_reg_88 ;
   grp_subFloat64Sigs_fu_111_ap_idle__temp = grp_subFloat64Sigs_fu_111_ap_idle ;
   tmp_2_cast_fu_172_p1__temp = tmp_2_cast_fu_172_p1 ;
   grp_subFloat64Sigs_fu_111_ap_ready__temp = grp_subFloat64Sigs_fu_111_ap_ready ;
   i_1_reg_185__temp = i_1_reg_185 ;
   a_input_q0__temp = a_input_q0 ;
   b_input_address0__temp = b_input_address0 ;
   main_result_1_fu_176_p2__temp = main_result_1_fu_176_p2 ;
   result_reg_100__temp = result_reg_100 ;
   tmp_3_fu_152_p3__temp = tmp_3_fu_152_p3 ;
   tmp_2_fu_144_p3__temp = tmp_2_fu_144_p3 ;
   grp_subFloat64Sigs_fu_111_ap_start_reg__temp = grp_subFloat64Sigs_fu_111_ap_start_reg ;
   tmp_2_reg_215__temp = tmp_2_reg_215 ;
   b_input_q0__temp = b_input_q0 ;
   b_input_ce0__temp = b_input_ce0 ;
   x2_reg_210__temp = x2_reg_210 ;
   z_output_ce0__temp = z_output_ce0 ;
   tmp_itmp_fu_160_p2__temp = tmp_itmp_fu_160_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   a_input_address0__temp = a_input_address0 ;
   z_output_address0__temp = z_output_address0 ;
   tmp_1_fu_166_p2__temp = tmp_1_fu_166_p2 ;
   tmp_fu_134_p1__temp = tmp_fu_134_p1 ;
   i_reg_77__temp = i_reg_77 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_block_state5_on_subcall_done__temp = ap_block_state5_on_subcall_done ;
   grp_subFloat64Sigs_fu_111_ap_start__temp = grp_subFloat64Sigs_fu_111_ap_start ;
   tmp_reg_190__temp = tmp_reg_190 ;
   grp_subFloat64Sigs_fu_111_ap_done__temp = grp_subFloat64Sigs_fu_111_ap_done ;
   z_output_q0__temp = z_output_q0 ;
   a_input_ce0__temp = a_input_ce0 ;
   grp_subFloat64Sigs_fu_111_ap_return__temp = grp_subFloat64Sigs_fu_111_ap_return ;

       grp_subFloat64Sigs_fu_111_ap_start_reg = 0 ;
       
       tmp_reg_190 = tmp_reg_190 & 32767 ;
       a_input_ce0 = 0;
       b_input_ce0 = 0;
       z_output_ce0 = 0;
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           i_reg_77 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           main_result_reg_88 =  0;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
          a_input_address0 =  i_reg_77__temp ;
          b_input_address0 =  i_reg_77__temp ;
          z_output_address0 =  tmp_reg_190__temp ;
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               i_reg_77 =  0;
       }
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               main_result_reg_88 =  0;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle =  1;
       }
          a_input_address0 =  i_reg_77__temp ;
          b_input_address0 =  i_reg_77__temp ;
          z_output_address0 =  tmp_reg_190__temp ;
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:       
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
   exitcond_fu_122_p2__temp = exitcond_fu_122_p2 ;
   i_1_fu_128_p2__temp = i_1_fu_128_p2 ;
   x1_reg_205__temp = x1_reg_205 ;
   tmp_itmp_reg_220__temp = tmp_itmp_reg_220 ;
   main_result_reg_88__temp = main_result_reg_88 ;
   grp_subFloat64Sigs_fu_111_ap_idle__temp = grp_subFloat64Sigs_fu_111_ap_idle ;
   tmp_2_cast_fu_172_p1__temp = tmp_2_cast_fu_172_p1 ;
   grp_subFloat64Sigs_fu_111_ap_ready__temp = grp_subFloat64Sigs_fu_111_ap_ready ;
   i_1_reg_185__temp = i_1_reg_185 ;
   a_input_q0__temp = a_input_q0 ;
   b_input_address0__temp = b_input_address0 ;
   main_result_1_fu_176_p2__temp = main_result_1_fu_176_p2 ;
   result_reg_100__temp = result_reg_100 ;
   tmp_3_fu_152_p3__temp = tmp_3_fu_152_p3 ;
   tmp_2_fu_144_p3__temp = tmp_2_fu_144_p3 ;
   grp_subFloat64Sigs_fu_111_ap_start_reg__temp = grp_subFloat64Sigs_fu_111_ap_start_reg ;
   tmp_2_reg_215__temp = tmp_2_reg_215 ;
   b_input_q0__temp = b_input_q0 ;
   b_input_ce0__temp = b_input_ce0 ;
   x2_reg_210__temp = x2_reg_210 ;
   z_output_ce0__temp = z_output_ce0 ;
   tmp_itmp_fu_160_p2__temp = tmp_itmp_fu_160_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   a_input_address0__temp = a_input_address0 ;
   z_output_address0__temp = z_output_address0 ;
   tmp_1_fu_166_p2__temp = tmp_1_fu_166_p2 ;
   tmp_fu_134_p1__temp = tmp_fu_134_p1 ;
   i_reg_77__temp = i_reg_77 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_block_state5_on_subcall_done__temp = ap_block_state5_on_subcall_done ;
   grp_subFloat64Sigs_fu_111_ap_start__temp = grp_subFloat64Sigs_fu_111_ap_start ;
   tmp_reg_190__temp = tmp_reg_190 ;
   grp_subFloat64Sigs_fu_111_ap_done__temp = grp_subFloat64Sigs_fu_111_ap_done ;
   z_output_q0__temp = z_output_q0 ;
   a_input_ce0__temp = a_input_ce0 ;
   grp_subFloat64Sigs_fu_111_ap_return__temp = grp_subFloat64Sigs_fu_111_ap_return ;

       grp_subFloat64Sigs_fu_111_ap_start_reg = 0 ;
       
       tmp_reg_190 = tmp_reg_190 & 32767 ;
       a_input_ce0 = 1;
       b_input_ce0 = 1;
       z_output_ce0 = 0;
               exitcond_fu_122_p2 =   ( i_reg_77__temp  == 30000 ? 1 :  0 ) ;
   if(((exitcond_fu_122_p2 == 1) && (1 == ap_CS_fsm_state2)) == 1){
       if(1 == ap_CS_fsm_state2)
       {
           i_1_reg_185 =   ( i_reg_77__temp  + 1 ) ;
       }
       if((exitcond_fu_122_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
           tmp_reg_190 =   (  ( tmp_reg_190__temp  & 18446744073709518848/*18446744073709551584*/ )  | ( i_reg_77__temp  & 32767 )  ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
           a_input_ce0 =  1;
       }
       if((exitcond_fu_122_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_done =  1;
			if(ap_done==1){
          ap_return = main_result_reg_88;
			}
       }
       if((exitcond_fu_122_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
           b_input_ce0 =  1;
       }
          a_input_address0 =  i_reg_77__temp ;
          b_input_address0 =  i_reg_77__temp ;
          z_output_address0 =  tmp_reg_190__temp ;
       if(a_input_ce0){
          a_input_q0=a_input_rom[a_input_address0];
       }
       if(b_input_ce0){
          b_input_q0=b_input_rom[b_input_address0];
       }
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((exitcond_fu_122_p2 == 1) && (1 == ap_CS_fsm_state2)) == 0){
       if(1 == ap_CS_fsm_state2)
       {
               i_1_reg_185 =   ( i_reg_77__temp  + 1 ) ;
       }
       if((exitcond_fu_122_p2 == 0) && (1 == ap_CS_fsm_state2))
       {
               tmp_reg_190 =   (  ( tmp_reg_190__temp  & 18446744073709518848/*18446744073709551584*/ )  |  ( i_reg_77__temp  & 32767 )  ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
               a_input_ce0 =  1;
       }
       if((exitcond_fu_122_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_done =  1;
			if(ap_done==1){
          ap_return = main_result_reg_88;
			}
       }
       if((exitcond_fu_122_p2 == 1) && (1 == ap_CS_fsm_state2))
       {
               ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state2)
       {
               b_input_ce0 =  1;
       }
          a_input_address0 =  i_reg_77__temp ;
          b_input_address0 =  i_reg_77__temp ;
          z_output_address0 =  tmp_reg_190__temp ;
       if(a_input_ce0){
          a_input_q0=a_input_rom[a_input_address0];
       }
       if(b_input_ce0){
          b_input_q0=b_input_rom[b_input_address0];
       }
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
   exitcond_fu_122_p2__temp = exitcond_fu_122_p2 ;
   i_1_fu_128_p2__temp = i_1_fu_128_p2 ;
   x1_reg_205__temp = x1_reg_205 ;
   tmp_itmp_reg_220__temp = tmp_itmp_reg_220 ;
   main_result_reg_88__temp = main_result_reg_88 ;
   grp_subFloat64Sigs_fu_111_ap_idle__temp = grp_subFloat64Sigs_fu_111_ap_idle ;
   tmp_2_cast_fu_172_p1__temp = tmp_2_cast_fu_172_p1 ;
   grp_subFloat64Sigs_fu_111_ap_ready__temp = grp_subFloat64Sigs_fu_111_ap_ready ;
   i_1_reg_185__temp = i_1_reg_185 ;
   a_input_q0__temp = a_input_q0 ;
   b_input_address0__temp = b_input_address0 ;
   main_result_1_fu_176_p2__temp = main_result_1_fu_176_p2 ;
   result_reg_100__temp = result_reg_100 ;
   tmp_3_fu_152_p3__temp = tmp_3_fu_152_p3 ;
   tmp_2_fu_144_p3__temp = tmp_2_fu_144_p3 ;
   grp_subFloat64Sigs_fu_111_ap_start_reg__temp = grp_subFloat64Sigs_fu_111_ap_start_reg ;
   tmp_2_reg_215__temp = tmp_2_reg_215 ;
   b_input_q0__temp = b_input_q0 ;
   b_input_ce0__temp = b_input_ce0 ;
   x2_reg_210__temp = x2_reg_210 ;
   z_output_ce0__temp = z_output_ce0 ;
   tmp_itmp_fu_160_p2__temp = tmp_itmp_fu_160_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   a_input_address0__temp = a_input_address0 ;
   z_output_address0__temp = z_output_address0 ;
   tmp_1_fu_166_p2__temp = tmp_1_fu_166_p2 ;
   tmp_fu_134_p1__temp = tmp_fu_134_p1 ;
   i_reg_77__temp = i_reg_77 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_block_state5_on_subcall_done__temp = ap_block_state5_on_subcall_done ;
   grp_subFloat64Sigs_fu_111_ap_start__temp = grp_subFloat64Sigs_fu_111_ap_start ;
   tmp_reg_190__temp = tmp_reg_190 ;
   grp_subFloat64Sigs_fu_111_ap_done__temp = grp_subFloat64Sigs_fu_111_ap_done ;
   z_output_q0__temp = z_output_q0 ;
   a_input_ce0__temp = a_input_ce0 ;
   grp_subFloat64Sigs_fu_111_ap_return__temp = grp_subFloat64Sigs_fu_111_ap_return ;

       grp_subFloat64Sigs_fu_111_ap_start_reg = 0 ;
       
       tmp_reg_190 = tmp_reg_190 & 32767 ;
       a_input_ce0 = 0;
       b_input_ce0 = 0;
       z_output_ce0 = 0;
               tmp_itmp_fu_160_p2 =   (  (  ( b_input_q0__temp  >> 63 )  & 1 )  ^  (  ( a_input_q0__temp  >> 63 )  & 1 )  ) ;
   if(((tmp_itmp_fu_160_p2 == 0) && (1 == ap_CS_fsm_state3)) == 1){
       if(1 == ap_CS_fsm_state3)
       {
           x2_reg_210 =  b_input_q0__temp ;
           x1_reg_205 =  a_input_q0__temp ;
           tmp_itmp_reg_220 =   (  (  ( b_input_q0__temp  >> 63 )  & 1 )  ^  (  ( a_input_q0__temp  >> 63 )  & 1 )  ) ;
           tmp_2_reg_215 =   (  ( a_input_q0__temp  >> 63 )  & 1 ) ;
       }
          a_input_address0 =  i_reg_77__temp ;
          b_input_address0 =  i_reg_77__temp ;
          z_output_address0 =  tmp_reg_190__temp ;
       goto ap_ST_fsm_state5;
   }
   if(((tmp_itmp_fu_160_p2 == 0) && (1 == ap_CS_fsm_state3)) == 0){
       if(1 == ap_CS_fsm_state3)
       {
               x2_reg_210 =  b_input_q0__temp ;
               x1_reg_205 =  a_input_q0__temp ;
               tmp_itmp_reg_220 =   (  (  ( b_input_q0__temp  >> 63 )  & 1 )  ^  (  ( a_input_q0__temp  >> 63 )  & 1 )  ) ;
               tmp_2_reg_215 =   (  ( a_input_q0__temp  >> 63 )  & 1 ) ;
       }
          a_input_address0 =  i_reg_77__temp ;
          b_input_address0 =  i_reg_77__temp ;
          z_output_address0 =  tmp_reg_190__temp ;
       goto ap_ST_fsm_state4;
   }

   ap_ST_fsm_state4:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 0;
   exitcond_fu_122_p2__temp = exitcond_fu_122_p2 ;
   i_1_fu_128_p2__temp = i_1_fu_128_p2 ;
   x1_reg_205__temp = x1_reg_205 ;
   tmp_itmp_reg_220__temp = tmp_itmp_reg_220 ;
   main_result_reg_88__temp = main_result_reg_88 ;
   grp_subFloat64Sigs_fu_111_ap_idle__temp = grp_subFloat64Sigs_fu_111_ap_idle ;
   tmp_2_cast_fu_172_p1__temp = tmp_2_cast_fu_172_p1 ;
   grp_subFloat64Sigs_fu_111_ap_ready__temp = grp_subFloat64Sigs_fu_111_ap_ready ;
   i_1_reg_185__temp = i_1_reg_185 ;
   a_input_q0__temp = a_input_q0 ;
   b_input_address0__temp = b_input_address0 ;
   main_result_1_fu_176_p2__temp = main_result_1_fu_176_p2 ;
   result_reg_100__temp = result_reg_100 ;
   tmp_3_fu_152_p3__temp = tmp_3_fu_152_p3 ;
   tmp_2_fu_144_p3__temp = tmp_2_fu_144_p3 ;
   grp_subFloat64Sigs_fu_111_ap_start_reg__temp = grp_subFloat64Sigs_fu_111_ap_start_reg ;
   tmp_2_reg_215__temp = tmp_2_reg_215 ;
   b_input_q0__temp = b_input_q0 ;
   b_input_ce0__temp = b_input_ce0 ;
   x2_reg_210__temp = x2_reg_210 ;
   z_output_ce0__temp = z_output_ce0 ;
   tmp_itmp_fu_160_p2__temp = tmp_itmp_fu_160_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   a_input_address0__temp = a_input_address0 ;
   z_output_address0__temp = z_output_address0 ;
   tmp_1_fu_166_p2__temp = tmp_1_fu_166_p2 ;
   tmp_fu_134_p1__temp = tmp_fu_134_p1 ;
   i_reg_77__temp = i_reg_77 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_block_state5_on_subcall_done__temp = ap_block_state5_on_subcall_done ;
   grp_subFloat64Sigs_fu_111_ap_start__temp = grp_subFloat64Sigs_fu_111_ap_start ;
   tmp_reg_190__temp = tmp_reg_190 ;
   grp_subFloat64Sigs_fu_111_ap_done__temp = grp_subFloat64Sigs_fu_111_ap_done ;
   z_output_q0__temp = z_output_q0 ;
   a_input_ce0__temp = a_input_ce0 ;
   grp_subFloat64Sigs_fu_111_ap_return__temp = grp_subFloat64Sigs_fu_111_ap_return ;

       grp_subFloat64Sigs_fu_111_ap_start_reg = 0 ;
       
       tmp_reg_190 = tmp_reg_190 & 32767 ;
       a_input_ce0 = 0;
       b_input_ce0 = 0;
       z_output_ce0 = 0;
       if(1 == ap_CS_fsm_state4)
       {
           grp_subFloat64Sigs_fu_111_ap_start_reg =  1;
       }
          a_input_address0 =  i_reg_77__temp ;
          b_input_address0 =  i_reg_77__temp ;
          z_output_address0 =  tmp_reg_190__temp ;
if (grp_subFloat64Sigs_fu_111_ap_start_reg==1){
grp_subFloat64Sigs_fu_111_ap_start=1;
subFloat64Sigs(&x1_reg_205,&ap_clk,&grp_subFloat64Sigs_fu_111_ap_done,&grp_subFloat64Sigs_fu_111_ap_idle,&grp_subFloat64Sigs_fu_111_ap_ready,&grp_subFloat64Sigs_fu_111_ap_return,&ap_rst,&grp_subFloat64Sigs_fu_111_ap_start,&x2_reg_210,&tmp_2_reg_215,&clock);
grp_subFloat64Sigs_fu_111_ap_done=1;
}
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 1;
	ap_CS_fsm_state6 = 0;
   exitcond_fu_122_p2__temp = exitcond_fu_122_p2 ;
   i_1_fu_128_p2__temp = i_1_fu_128_p2 ;
   x1_reg_205__temp = x1_reg_205 ;
   tmp_itmp_reg_220__temp = tmp_itmp_reg_220 ;
   main_result_reg_88__temp = main_result_reg_88 ;
   grp_subFloat64Sigs_fu_111_ap_idle__temp = grp_subFloat64Sigs_fu_111_ap_idle ;
   tmp_2_cast_fu_172_p1__temp = tmp_2_cast_fu_172_p1 ;
   grp_subFloat64Sigs_fu_111_ap_ready__temp = grp_subFloat64Sigs_fu_111_ap_ready ;
   i_1_reg_185__temp = i_1_reg_185 ;
   a_input_q0__temp = a_input_q0 ;
   b_input_address0__temp = b_input_address0 ;
   main_result_1_fu_176_p2__temp = main_result_1_fu_176_p2 ;
   result_reg_100__temp = result_reg_100 ;
   tmp_3_fu_152_p3__temp = tmp_3_fu_152_p3 ;
   tmp_2_fu_144_p3__temp = tmp_2_fu_144_p3 ;
   grp_subFloat64Sigs_fu_111_ap_start_reg__temp = grp_subFloat64Sigs_fu_111_ap_start_reg ;
   tmp_2_reg_215__temp = tmp_2_reg_215 ;
   b_input_q0__temp = b_input_q0 ;
   b_input_ce0__temp = b_input_ce0 ;
   x2_reg_210__temp = x2_reg_210 ;
   z_output_ce0__temp = z_output_ce0 ;
   tmp_itmp_fu_160_p2__temp = tmp_itmp_fu_160_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   a_input_address0__temp = a_input_address0 ;
   z_output_address0__temp = z_output_address0 ;
   tmp_1_fu_166_p2__temp = tmp_1_fu_166_p2 ;
   tmp_fu_134_p1__temp = tmp_fu_134_p1 ;
   i_reg_77__temp = i_reg_77 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_block_state5_on_subcall_done__temp = ap_block_state5_on_subcall_done ;
   grp_subFloat64Sigs_fu_111_ap_start__temp = grp_subFloat64Sigs_fu_111_ap_start ;
   tmp_reg_190__temp = tmp_reg_190 ;
   grp_subFloat64Sigs_fu_111_ap_done__temp = grp_subFloat64Sigs_fu_111_ap_done ;
   z_output_q0__temp = z_output_q0 ;
   a_input_ce0__temp = a_input_ce0 ;
   grp_subFloat64Sigs_fu_111_ap_return__temp = grp_subFloat64Sigs_fu_111_ap_return ;

       grp_subFloat64Sigs_fu_111_ap_start_reg = 0 ;
       
       tmp_reg_190 = tmp_reg_190 & 32767 ;
       a_input_ce0 = 0;
       b_input_ce0 = 0;
       z_output_ce0 = 1;
               tmp_itmp_reg_220 =  tmp_itmp_reg_220__temp ;
   if(((0 == ap_block_state5_on_subcall_done) && (1 == ap_CS_fsm_state5)) == 1){
       if(((0 == ap_block_state5_on_subcall_done) && (tmp_itmp_reg_220 == 1)) && (1 == ap_CS_fsm_state5))
       {
           result_reg_100 =  grp_subFloat64Sigs_fu_111_ap_return__temp ;
       }
       if((0 == ap_block_state5_on_subcall_done) && (1 == ap_CS_fsm_state5))
       {
           z_output_ce0 =  1;
       }
          a_input_address0 =  i_reg_77__temp ;
          b_input_address0 =  i_reg_77__temp ;
          z_output_address0 =  tmp_reg_190__temp ;
       if(z_output_ce0){
          z_output_q0=z_output_rom[z_output_address0];
       }
       goto ap_ST_fsm_state6;
   }
   if(((0 == ap_block_state5_on_subcall_done) && (1 == ap_CS_fsm_state5)) == 0){
       if(((0 == ap_block_state5_on_subcall_done) && (tmp_itmp_reg_220 == 1)) && (1 == ap_CS_fsm_state5))
       {
               result_reg_100 =  grp_subFloat64Sigs_fu_111_ap_return__temp ;
       }
       if((0 == ap_block_state5_on_subcall_done) && (1 == ap_CS_fsm_state5))
       {
               z_output_ce0 =  1;
       }
          a_input_address0 =  i_reg_77__temp ;
          b_input_address0 =  i_reg_77__temp ;
          z_output_address0 =  tmp_reg_190__temp ;
       if(z_output_ce0){
          z_output_q0=z_output_rom[z_output_address0];
       }
       goto ap_ST_fsm_state5;
   }

   ap_ST_fsm_state6:
	clock=clock+1;
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;
	ap_CS_fsm_state6 = 1;
   exitcond_fu_122_p2__temp = exitcond_fu_122_p2 ;
   i_1_fu_128_p2__temp = i_1_fu_128_p2 ;
   x1_reg_205__temp = x1_reg_205 ;
   tmp_itmp_reg_220__temp = tmp_itmp_reg_220 ;
   main_result_reg_88__temp = main_result_reg_88 ;
   grp_subFloat64Sigs_fu_111_ap_idle__temp = grp_subFloat64Sigs_fu_111_ap_idle ;
   tmp_2_cast_fu_172_p1__temp = tmp_2_cast_fu_172_p1 ;
   grp_subFloat64Sigs_fu_111_ap_ready__temp = grp_subFloat64Sigs_fu_111_ap_ready ;
   i_1_reg_185__temp = i_1_reg_185 ;
   a_input_q0__temp = a_input_q0 ;
   b_input_address0__temp = b_input_address0 ;
   main_result_1_fu_176_p2__temp = main_result_1_fu_176_p2 ;
   result_reg_100__temp = result_reg_100 ;
   tmp_3_fu_152_p3__temp = tmp_3_fu_152_p3 ;
   tmp_2_fu_144_p3__temp = tmp_2_fu_144_p3 ;
   grp_subFloat64Sigs_fu_111_ap_start_reg__temp = grp_subFloat64Sigs_fu_111_ap_start_reg ;
   tmp_2_reg_215__temp = tmp_2_reg_215 ;
   b_input_q0__temp = b_input_q0 ;
   b_input_ce0__temp = b_input_ce0 ;
   x2_reg_210__temp = x2_reg_210 ;
   z_output_ce0__temp = z_output_ce0 ;
   tmp_itmp_fu_160_p2__temp = tmp_itmp_fu_160_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   a_input_address0__temp = a_input_address0 ;
   z_output_address0__temp = z_output_address0 ;
   tmp_1_fu_166_p2__temp = tmp_1_fu_166_p2 ;
   tmp_fu_134_p1__temp = tmp_fu_134_p1 ;
   i_reg_77__temp = i_reg_77 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   ap_block_state5_on_subcall_done__temp = ap_block_state5_on_subcall_done ;
   grp_subFloat64Sigs_fu_111_ap_start__temp = grp_subFloat64Sigs_fu_111_ap_start ;
   tmp_reg_190__temp = tmp_reg_190 ;
   grp_subFloat64Sigs_fu_111_ap_done__temp = grp_subFloat64Sigs_fu_111_ap_done ;
   z_output_q0__temp = z_output_q0 ;
   a_input_ce0__temp = a_input_ce0 ;
   grp_subFloat64Sigs_fu_111_ap_return__temp = grp_subFloat64Sigs_fu_111_ap_return ;

       grp_subFloat64Sigs_fu_111_ap_start_reg = 0 ;
       
       tmp_reg_190 = tmp_reg_190 & 32767 ;
       a_input_ce0 = 0;
       b_input_ce0 = 0;
       z_output_ce0 = 0;
       if(1 == ap_CS_fsm_state6)
       {
           i_reg_77 =  i_1_reg_185__temp ;
       }
       if(1 == ap_CS_fsm_state6)
       {
           main_result_reg_88 =   (  ( result_reg_100__temp  != z_output_q0__temp  ? 1 : 0 )  + main_result_reg_88__temp  ) ;		  
       }
			
			
          a_input_address0 =  i_reg_77__temp ;
          b_input_address0 =  i_reg_77__temp ;
          z_output_address0 =  tmp_reg_190__temp ;
       goto ap_ST_fsm_state2;
   end:
	*ap_clk__1=ap_clk;
	*ap_done__1=ap_done;
	*ap_idle__1=ap_idle;
	*ap_ready__1=ap_ready;
	*ap_return__1=ap_return;
	 printf("Total Errors: %d\n",main_result_reg_88);
	
	*ap_rst__1=ap_rst;
	*ap_start__1=ap_start;
	*dummy=clock;

       return;
}

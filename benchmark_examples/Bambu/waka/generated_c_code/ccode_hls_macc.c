#include<stdio.h>
void hls_macc(int *ap_clk1,int *ap_done1,int *ap_idle1,int *ap_ready1,int *ap_return1,int *ap_rst1,int *ap_start1,int *in11,int *in101,int *in121,int *in141,int *in151,int *in171,int *in191,int *in21,int *in201,int *in221,int *in241,int *in271,int *in281,int *in291,int *in31,int *in321,int *in41,int *in71,int *in81,int *in91,int *out131,int *out301,int *out311,int dummy){	
int ap_clk=*ap_clk1;
int ap_done=*ap_done1;
int ap_idle=*ap_idle1;
int ap_ready=*ap_ready1;
int ap_return=*ap_return1;
int ap_rst=*ap_rst1;
int ap_start=*ap_start1;
int in1=*in11;
int in10=*in101;
int in12=*in121;
int in14=*in141;
int in15=*in151;
int in17=*in171;
int in19=*in191;
int in2=*in21;
int in20=*in201;
int in22=*in221;
int in24=*in241;
int in27=*in271;
int in28=*in281;
int in29=*in291;
int in3=*in31;
int in32=*in321;
int in4=*in41;
int in7=*in71;
int in8=*in81;
int in9=*in91;
int out13=*out131;
int out30=*out301;
int out31=*out311;

   int ap_CS_fsm=1;
   int ap_CS_fsm__temp=1;
   int ap_CS_fsm_state1=1;
   int ap_CS_fsm_state1__temp=1;
   int ap_CS_fsm_state2=1;
   int ap_CS_fsm_state2__temp=1;
   int ap_CS_fsm_state3=1;
   int ap_CS_fsm_state3__temp=1;
   int ap_CS_fsm_state4=1;
   int ap_CS_fsm_state4__temp=1;
   int ap_NS_fsm=0;
   int ap_NS_fsm__temp=0;
   int ap_clk__temp=0;
   int ap_rst__temp=0;
   int ap_start__temp=0;
   int in10__temp=0;
   int in12__temp=0;
   int in14__temp=0;
   int in15__temp=0;
   int in17__temp=0;
   int in19__temp=0;
   int in1__temp=0;
   int in20__temp=0;
   int in22__temp=0;
   int in24__temp=0;
   int in27__temp=0;
   int in28__temp=0;
   int in29__temp=0;
   int in2__temp=0;
   int in32__temp=0;
   int in3__temp=0;
   int in4__temp=0;
   int in7__temp=0;
   int in8__temp=0;
   int in9__temp=0;
   int out13__temp=0;
   int out13_assign_fu_281_p2=0;
   int out13_assign_fu_281_p2__temp=0;
   int out30__temp=0;
   int out30_assign_1_fu_270_p3=0;
   int out30_assign_1_fu_270_p3__temp=0;
   int out30_assign_fu_264_p2=0;
   int out30_assign_fu_264_p2__temp=0;
   int out30_assign_reg_337=0;
   int out30_assign_reg_337__temp=0;
   int out31__temp=0;
   int t11_fu_188_p2=0;
   int t11_fu_188_p2__temp=0;
   int t11_reg_305=0;
   int t11_reg_305__temp=0;
   int t16_1_fu_258_p2=0;
   int t16_1_fu_258_p2__temp=0;
   int t16_1_reg_332=0;
   int t16_1_reg_332__temp=0;
   int t16_2_fu_276_p3=0;
   int t16_2_fu_276_p3__temp=0;
   int t16_fu_217_p2=0;
   int t16_fu_217_p2__temp=0;
   int t16_reg_327=0;
   int t16_reg_327__temp=0;
   int t23_fu_206_p2=0;
   int t23_fu_206_p2__temp=0;
   int t23_reg_316=0;
   int t23_reg_316__temp=0;
   int t25_fu_228_p2=0;
   int t25_fu_228_p2__temp=0;
   int t26_1_fu_245_p2=0;
   int t26_1_fu_245_p2__temp=0;
   int t26_2_fu_250_p3=0;
   int t26_2_fu_250_p3__temp=0;
   int t26_fu_233_p2=0;
   int t26_fu_233_p2__temp=0;
   int t5_fu_194_p2=0;
   int t5_fu_194_p2__temp=0;
   int t5_reg_311=0;
   int t5_reg_311__temp=0;
   int tmp1_fu_182_p2=0;
   int tmp1_fu_182_p2__temp=0;
   int tmp2_fu_200_p2=0;
   int tmp2_fu_200_p2__temp=0;
   int tmp3_fu_239_p2=0;
   int tmp3_fu_239_p2__temp=0;
   int tmp4_fu_287_p2=0;
   int tmp4_fu_287_p2__temp=0;
   int tmp5_fu_293_p2=0;
   int tmp5_fu_293_p2__temp=0;
   int tmp_2_fu_222_p2=0;
   int tmp_2_fu_222_p2__temp=0;
   int tmp_2_fu_222_p2_temp=0;
   int tmp_2_fu_222_p2_temp__temp=0;
   int tmp_fu_211_p2=0;
   int tmp_fu_211_p2__temp=0;
   int tmp_reg_321=0;
   int tmp_reg_321__temp=0;
   int tmp_reg_321_temp=0;
   int tmp_reg_321_temp__temp=0;

   ap_ST_fsm_state1:
   
	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
   t11_fu_188_p2__temp = t11_fu_188_p2 ;
   tmp2_fu_200_p2__temp = tmp2_fu_200_p2 ;
   out13_assign_fu_281_p2__temp = out13_assign_fu_281_p2 ;
   t16_reg_327__temp = t16_reg_327 ;
   out30_assign_reg_337__temp = out30_assign_reg_337 ;
   t16_2_fu_276_p3__temp = t16_2_fu_276_p3 ;
   t25_fu_228_p2__temp = t25_fu_228_p2 ;
   t26_2_fu_250_p3__temp = t26_2_fu_250_p3 ;
   tmp_reg_321__temp = tmp_reg_321 ;
   t23_fu_206_p2__temp = t23_fu_206_p2 ;
   tmp4_fu_287_p2__temp = tmp4_fu_287_p2 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp5_fu_293_p2__temp = tmp5_fu_293_p2 ;
   t11_reg_305__temp = t11_reg_305 ;
   tmp1_fu_182_p2__temp = tmp1_fu_182_p2 ;
   t16_fu_217_p2__temp = t16_fu_217_p2 ;
   t5_fu_194_p2__temp = t5_fu_194_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   out30_assign_1_fu_270_p3__temp = out30_assign_1_fu_270_p3 ;
   t16_1_fu_258_p2__temp = t16_1_fu_258_p2 ;
   t5_reg_311__temp = t5_reg_311 ;
   t16_1_reg_332__temp = t16_1_reg_332 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   tmp_reg_321_temp__temp = tmp_reg_321_temp ;
   tmp_2_fu_222_p2_temp__temp = tmp_2_fu_222_p2_temp ;
   t26_fu_233_p2__temp = t26_fu_233_p2 ;
   t23_reg_316__temp = t23_reg_316 ;
   tmp3_fu_239_p2__temp = tmp3_fu_239_p2 ;
   tmp_fu_211_p2__temp = tmp_fu_211_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   out30_assign_fu_264_p2__temp = out30_assign_fu_264_p2 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_2_fu_222_p2__temp = tmp_2_fu_222_p2 ;
   t26_1_fu_245_p2__temp = t26_1_fu_245_p2 ;

   if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) == 1){
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           t11_reg_305 =   (  ( in7 + in12 )  + in8 ) ;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
       goto ap_ST_fsm_state2;
   }
   if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) == 0){
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               t11_reg_305 =   (  ( in7 + in12 )  + in8 ) ;
       }
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
               ap_idle =  1;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:
	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
   t11_fu_188_p2__temp = t11_fu_188_p2 ;
   tmp2_fu_200_p2__temp = tmp2_fu_200_p2 ;
   out13_assign_fu_281_p2__temp = out13_assign_fu_281_p2 ;
   t16_reg_327__temp = t16_reg_327 ;
   out30_assign_reg_337__temp = out30_assign_reg_337 ;
   t16_2_fu_276_p3__temp = t16_2_fu_276_p3 ;
   t25_fu_228_p2__temp = t25_fu_228_p2 ;
   t26_2_fu_250_p3__temp = t26_2_fu_250_p3 ;
   tmp_reg_321__temp = tmp_reg_321 ;
   t23_fu_206_p2__temp = t23_fu_206_p2 ;
   tmp4_fu_287_p2__temp = tmp4_fu_287_p2 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp5_fu_293_p2__temp = tmp5_fu_293_p2 ;
   t11_reg_305__temp = t11_reg_305 ;
   tmp1_fu_182_p2__temp = tmp1_fu_182_p2 ;
   t16_fu_217_p2__temp = t16_fu_217_p2 ;
   t5_fu_194_p2__temp = t5_fu_194_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   out30_assign_1_fu_270_p3__temp = out30_assign_1_fu_270_p3 ;
   t16_1_fu_258_p2__temp = t16_1_fu_258_p2 ;
   t5_reg_311__temp = t5_reg_311 ;
   t16_1_reg_332__temp = t16_1_reg_332 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   tmp_reg_321_temp__temp = tmp_reg_321_temp ;
   tmp_2_fu_222_p2_temp__temp = tmp_2_fu_222_p2_temp ;
   t26_fu_233_p2__temp = t26_fu_233_p2 ;
   t23_reg_316__temp = t23_reg_316 ;
   tmp3_fu_239_p2__temp = tmp3_fu_239_p2 ;
   tmp_fu_211_p2__temp = tmp_fu_211_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   out30_assign_fu_264_p2__temp = out30_assign_fu_264_p2 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_2_fu_222_p2__temp = tmp_2_fu_222_p2 ;
   t26_1_fu_245_p2__temp = t26_1_fu_245_p2 ;

       if(1 == ap_CS_fsm_state2)
       {
           t5_reg_311 =   ( in3 - in4 ) ;
           t23_reg_316 =   (  (  ( in3 - in4 )  + in22 )  + t11_reg_305__temp  ) ;
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
   t11_fu_188_p2__temp = t11_fu_188_p2 ;
   tmp2_fu_200_p2__temp = tmp2_fu_200_p2 ;
   out13_assign_fu_281_p2__temp = out13_assign_fu_281_p2 ;
   t16_reg_327__temp = t16_reg_327 ;
   out30_assign_reg_337__temp = out30_assign_reg_337 ;
   t16_2_fu_276_p3__temp = t16_2_fu_276_p3 ;
   t25_fu_228_p2__temp = t25_fu_228_p2 ;
   t26_2_fu_250_p3__temp = t26_2_fu_250_p3 ;
   tmp_reg_321__temp = tmp_reg_321 ;
   t23_fu_206_p2__temp = t23_fu_206_p2 ;
   tmp4_fu_287_p2__temp = tmp4_fu_287_p2 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp5_fu_293_p2__temp = tmp5_fu_293_p2 ;
   t11_reg_305__temp = t11_reg_305 ;
   tmp1_fu_182_p2__temp = tmp1_fu_182_p2 ;
   t16_fu_217_p2__temp = t16_fu_217_p2 ;
   t5_fu_194_p2__temp = t5_fu_194_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   out30_assign_1_fu_270_p3__temp = out30_assign_1_fu_270_p3 ;
   t16_1_fu_258_p2__temp = t16_1_fu_258_p2 ;
   t5_reg_311__temp = t5_reg_311 ;
   t16_1_reg_332__temp = t16_1_reg_332 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   tmp_reg_321_temp__temp = tmp_reg_321_temp ;
   tmp_2_fu_222_p2_temp__temp = tmp_2_fu_222_p2_temp ;
   t26_fu_233_p2__temp = t26_fu_233_p2 ;
   t23_reg_316__temp = t23_reg_316 ;
   tmp3_fu_239_p2__temp = tmp3_fu_239_p2 ;
   tmp_fu_211_p2__temp = tmp_fu_211_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   out30_assign_fu_264_p2__temp = out30_assign_fu_264_p2 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_2_fu_222_p2__temp = tmp_2_fu_222_p2 ;
   t26_1_fu_245_p2__temp = t26_1_fu_245_p2 ;

       if(1 == ap_CS_fsm_state3)
       {
           tmp_reg_321 =   ( in2 == in1 ? 1 : 0 ) ;
           t16_reg_327 =   ( t11_reg_305__temp  - in17 ) ;
           t16_1_reg_332 =   (  (  (  ( in9 < in10 ? 1 : 0 )  & 1 )  == 1 ?  (  ( t23_reg_316__temp  - in24 )  + in27 )  :   (  ( in19 + in20 )  + t5_reg_311__temp  )  )  - in28 ) ;
           out30_assign_reg_337 =   (  (  (  ( in9 < in10 ? 1 : 0 )  & 1 )  == 1 ?  (  ( t23_reg_316__temp  - in24 )  + in27 )  :   (  ( in19 + in20 )  + t5_reg_311__temp  )  )  + in29 ) ;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
   t11_fu_188_p2__temp = t11_fu_188_p2 ;
   tmp2_fu_200_p2__temp = tmp2_fu_200_p2 ;
   out13_assign_fu_281_p2__temp = out13_assign_fu_281_p2 ;
   t16_reg_327__temp = t16_reg_327 ;
   out30_assign_reg_337__temp = out30_assign_reg_337 ;
   t16_2_fu_276_p3__temp = t16_2_fu_276_p3 ;
   t25_fu_228_p2__temp = t25_fu_228_p2 ;
   t26_2_fu_250_p3__temp = t26_2_fu_250_p3 ;
   tmp_reg_321__temp = tmp_reg_321 ;
   t23_fu_206_p2__temp = t23_fu_206_p2 ;
   tmp4_fu_287_p2__temp = tmp4_fu_287_p2 ;
   ap_CS_fsm_state3__temp = ap_CS_fsm_state3 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   tmp5_fu_293_p2__temp = tmp5_fu_293_p2 ;
   t11_reg_305__temp = t11_reg_305 ;
   tmp1_fu_182_p2__temp = tmp1_fu_182_p2 ;
   t16_fu_217_p2__temp = t16_fu_217_p2 ;
   t5_fu_194_p2__temp = t5_fu_194_p2 ;
   ap_CS_fsm_state2__temp = ap_CS_fsm_state2 ;
   out30_assign_1_fu_270_p3__temp = out30_assign_1_fu_270_p3 ;
   t16_1_fu_258_p2__temp = t16_1_fu_258_p2 ;
   t5_reg_311__temp = t5_reg_311 ;
   t16_1_reg_332__temp = t16_1_reg_332 ;
   ap_CS_fsm_state4__temp = ap_CS_fsm_state4 ;
   tmp_reg_321_temp__temp = tmp_reg_321_temp ;
   tmp_2_fu_222_p2_temp__temp = tmp_2_fu_222_p2_temp ;
   t26_fu_233_p2__temp = t26_fu_233_p2 ;
   t23_reg_316__temp = t23_reg_316 ;
   tmp3_fu_239_p2__temp = tmp3_fu_239_p2 ;
   tmp_fu_211_p2__temp = tmp_fu_211_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   out30_assign_fu_264_p2__temp = out30_assign_fu_264_p2 ;
   ap_CS_fsm_state1__temp = ap_CS_fsm_state1 ;
   tmp_2_fu_222_p2__temp = tmp_2_fu_222_p2 ;
   t26_1_fu_245_p2__temp = t26_1_fu_245_p2 ;

       if(1 == ap_CS_fsm_state4)
       {
           ap_done =  1;
          ap_return =   (  (  (  ( tmp_reg_321__temp  & 1 )  == 1 ? out30__temp  :  out30_assign_reg_337__temp  )  +  (  ( tmp_reg_321__temp  & 1 )  == 1 ? t16_reg_327__temp  :  t16_1_reg_332__temp  )  )  +  (  ( in14 - in15 )  + in32 )  ) ;
       }
       if(1 == ap_CS_fsm_state4)
       {
           ap_ready =  1;
       }
       if(ap_done==1){
       goto end;
       }
       goto ap_ST_fsm_state1;
   end:
	*ap_clk1=ap_clk;
	*ap_done1=ap_done;
	*ap_idle1=ap_idle;
	*ap_ready1=ap_ready;
	*ap_return1=ap_return;
	*ap_rst1=ap_rst;
	*ap_start1=ap_start;
	*in11=in1;
	*in101=in10;
	*in121=in12;
	*in141=in14;
	*in151=in15;
	*in171=in17;
	*in191=in19;
	*in21=in2;
	*in201=in20;
	*in221=in22;
	*in241=in24;
	*in271=in27;
	*in281=in28;
	*in291=in29;
	*in31=in3;
	*in321=in32;
	*in41=in4;
	*in71=in7;
	*in81=in8;
	*in91=in9;
	*out131=out13;
	*out301=out30;
	*out311=out31;		
       return;
}

// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module AddRoundKey (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        statemt_address0,
        statemt_ce0,
        statemt_we0,
        statemt_d0,
        statemt_q0,
        statemt_address1,
        statemt_ce1,
        statemt_we1,
        statemt_d1,
        statemt_q1,
        n
);

parameter    ap_ST_fsm_state1 = 6'd1;
parameter    ap_ST_fsm_pp0_stage0 = 6'd2;
parameter    ap_ST_fsm_pp0_stage1 = 6'd4;
parameter    ap_ST_fsm_pp0_stage2 = 6'd8;
parameter    ap_ST_fsm_pp0_stage3 = 6'd16;
parameter    ap_ST_fsm_state10 = 6'd32;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [4:0] statemt_address0;
output   statemt_ce0;
output   statemt_we0;
output  [31:0] statemt_d0;
input  [31:0] statemt_q0;
output  [4:0] statemt_address1;
output   statemt_ce1;
output   statemt_we1;
output  [31:0] statemt_d1;
input  [31:0] statemt_q1;
input  [31:0] n;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[4:0] statemt_address0;
reg statemt_ce0;
reg statemt_we0;
reg[31:0] statemt_d0;
reg[4:0] statemt_address1;
reg statemt_ce1;
reg statemt_we1;
reg[31:0] statemt_d1;

(* fsm_encoding = "none" *) reg   [5:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [8:0] word13_address0;
reg    word13_ce0;
wire   [7:0] word13_q0;
reg   [2:0] j_reg_131;
reg   [31:0] reg_142;
wire    ap_CS_fsm_pp0_stage1;
reg    ap_enable_reg_pp0_iter0;
wire    ap_block_state3_pp0_stage1_iter0;
wire    ap_block_state7_pp0_stage1_iter1;
wire    ap_block_pp0_stage1_flag00011001;
reg   [0:0] exitcond_reg_317;
wire    ap_CS_fsm_pp0_stage2;
wire    ap_block_state4_pp0_stage2_iter0;
wire    ap_block_state8_pp0_stage2_iter1;
wire    ap_block_pp0_stage2_flag00011001;
wire   [7:0] tmp_fu_151_p3;
reg   [7:0] tmp_reg_312;
wire   [0:0] exitcond_fu_159_p2;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state6_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_flag00011001;
reg   [0:0] ap_reg_pp0_iter1_exitcond_reg_317;
wire   [2:0] j_6_fu_165_p2;
reg   [2:0] j_6_reg_321;
wire   [7:0] tmp_s_fu_175_p2;
reg   [7:0] tmp_s_reg_326;
wire   [3:0] tmp_44_fu_189_p3;
reg   [3:0] tmp_44_reg_337;
reg   [3:0] ap_reg_pp0_iter1_tmp_44_reg_337;
reg   [4:0] statemt_addr_reg_343;
reg   [4:0] statemt_addr_24_reg_348;
wire   [8:0] tmp_cast_cast_fu_213_p1;
reg   [8:0] tmp_cast_cast_reg_353;
wire   [31:0] tmp_45_fu_231_p2;
reg   [31:0] tmp_45_reg_363;
reg   [4:0] statemt_addr_25_reg_368;
wire    ap_CS_fsm_pp0_stage3;
wire    ap_block_state5_pp0_stage3_iter0;
wire    ap_block_state9_pp0_stage3_iter1;
wire    ap_block_pp0_stage3_flag00011001;
reg   [7:0] word13_load_3_reg_383;
reg    ap_enable_reg_pp0_iter1;
reg   [4:0] statemt_addr_26_reg_388;
wire   [31:0] tmp_51_fu_306_p2;
reg   [31:0] tmp_51_reg_393;
wire    ap_block_pp0_stage0_flag00011011;
reg    ap_condition_pp0_exit_iter0_state2;
wire    ap_block_pp0_stage3_flag00011011;
reg   [2:0] j_phi_fu_135_p4;
wire    ap_block_pp0_stage0_flag00000000;
wire   [31:0] tmp_cast_fu_180_p1;
wire   [31:0] tmp_90_cast_fu_197_p1;
wire   [31:0] tmp_92_cast_fu_208_p1;
wire   [31:0] tmp_104_cast_fu_222_p1;
wire    ap_block_pp0_stage1_flag00000000;
wire   [31:0] tmp_94_cast_fu_242_p1;
wire   [31:0] tmp_105_cast_fu_252_p1;
wire    ap_block_pp0_stage2_flag00000000;
wire  signed [31:0] tmp_106_cast_fu_277_p1;
wire    ap_block_pp0_stage3_flag00000000;
wire   [31:0] tmp_96_cast_fu_298_p1;
wire   [31:0] tmp_47_fu_261_p2;
wire   [31:0] tmp_49_fu_286_p2;
wire   [5:0] tmp_114_fu_147_p1;
wire   [7:0] j_cast1_fu_171_p1;
wire   [1:0] tmp_115_fu_185_p1;
wire   [3:0] tmp_46_fu_202_p2;
wire   [8:0] tmp_103_fu_216_p2;
wire   [31:0] word13_load_cast_fu_227_p1;
wire   [3:0] tmp_48_fu_237_p2;
wire   [8:0] tmp_104_fu_247_p2;
wire   [31:0] word13_load_1_cast_fu_257_p1;
wire   [9:0] tmp_cast_cast1_fu_268_p1;
wire   [9:0] tmp_105_fu_271_p2;
wire   [31:0] word13_load_2_cast_fu_282_p1;
wire   [3:0] tmp_50_fu_293_p2;
wire   [31:0] word13_load_3_cast_fu_303_p1;
wire    ap_CS_fsm_state10;
reg   [5:0] ap_NS_fsm;
wire    ap_block_pp0_stage1_flag00011011;
wire    ap_block_pp0_stage2_flag00011011;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 6'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
end

AddRoundKey_word13 #(
    .DataWidth( 8 ),
    .AddressRange( 480 ),
    .AddressWidth( 9 ))
word13_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(word13_address0),
    .ce0(word13_ce0),
    .q0(word13_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011011 == 1'b0) & (1'b1 == ap_condition_pp0_exit_iter0_state2))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage3) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (ap_block_pp0_stage3_flag00011011 == 1'b0))) begin
            ap_enable_reg_pp0_iter1 <= (ap_condition_pp0_exit_iter0_state2 ^ 1'b1);
        end else if (((1'b1 == ap_CS_fsm_pp0_stage3) & (ap_block_pp0_stage3_flag00011011 == 1'b0))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_reg_317 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011001 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1))) begin
        j_reg_131 <= j_6_reg_321;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        j_reg_131 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_enable_reg_pp0_iter0) & (exitcond_reg_317 == 1'd0))) begin
        if (((1'b1 == ap_CS_fsm_pp0_stage2) & (ap_block_pp0_stage2_flag00011001 == 1'b0))) begin
            reg_142 <= statemt_q0;
        end else if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_block_pp0_stage1_flag00011001 == 1'b0))) begin
            reg_142 <= statemt_q1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011001 == 1'b0))) begin
        ap_reg_pp0_iter1_exitcond_reg_317 <= exitcond_reg_317;
        ap_reg_pp0_iter1_tmp_44_reg_337[3 : 2] <= tmp_44_reg_337[3 : 2];
        exitcond_reg_317 <= exitcond_fu_159_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011001 == 1'b0))) begin
        j_6_reg_321 <= j_6_fu_165_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011001 == 1'b0) & (1'd0 == exitcond_fu_159_p2))) begin
        statemt_addr_24_reg_348[3 : 2] <= tmp_92_cast_fu_208_p1[3 : 2];
        statemt_addr_reg_343[3 : 2] <= tmp_90_cast_fu_197_p1[3 : 2];
        tmp_44_reg_337[3 : 2] <= tmp_44_fu_189_p3[3 : 2];
        tmp_s_reg_326 <= tmp_s_fu_175_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_block_pp0_stage1_flag00011001 == 1'b0) & (exitcond_reg_317 == 1'd0))) begin
        statemt_addr_25_reg_368[3 : 2] <= tmp_94_cast_fu_242_p1[3 : 2];
        tmp_45_reg_363 <= tmp_45_fu_231_p2;
        tmp_cast_cast_reg_353[7 : 0] <= tmp_cast_cast_fu_213_p1[7 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_block_pp0_stage1_flag00011001 == 1'b0) & (1'd0 == ap_reg_pp0_iter1_exitcond_reg_317))) begin
        statemt_addr_26_reg_388[3 : 2] <= tmp_96_cast_fu_298_p1[3 : 2];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage2) & (ap_block_pp0_stage2_flag00011001 == 1'b0) & (1'd0 == ap_reg_pp0_iter1_exitcond_reg_317))) begin
        tmp_51_reg_393 <= tmp_51_fu_306_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        tmp_reg_312[7 : 2] <= tmp_fu_151_p3[7 : 2];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_reg_317 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011001 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1))) begin
        word13_load_3_reg_383 <= word13_q0;
    end
end

always @ (*) begin
    if ((exitcond_fu_159_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1)) | (1'b1 == ap_CS_fsm_state10))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_enable_reg_pp0_iter0) & (1'b0 == ap_enable_reg_pp0_iter1))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_reg_317 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter1) & (ap_block_pp0_stage0_flag00000000 == 1'b0))) begin
        j_phi_fu_135_p4 = j_6_reg_321;
    end else begin
        j_phi_fu_135_p4 = j_reg_131;
    end
end

always @ (*) begin
    if ((1'b1 == ap_enable_reg_pp0_iter0)) begin
        if (((1'b1 == ap_CS_fsm_pp0_stage3) & (ap_block_pp0_stage3_flag00000000 == 1'b0))) begin
            statemt_address0 = statemt_addr_25_reg_368;
        end else if (((1'b1 == ap_CS_fsm_pp0_stage2) & (ap_block_pp0_stage2_flag00000000 == 1'b0))) begin
            statemt_address0 = statemt_addr_reg_343;
        end else if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_block_pp0_stage1_flag00000000 == 1'b0))) begin
            statemt_address0 = tmp_94_cast_fu_242_p1;
        end else if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00000000 == 1'b0))) begin
            statemt_address0 = tmp_90_cast_fu_197_p1;
        end else begin
            statemt_address0 = 'bx;
        end
    end else begin
        statemt_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage3) & (1'b1 == ap_enable_reg_pp0_iter1) & (ap_block_pp0_stage3_flag00000000 == 1'b0))) begin
        statemt_address1 = statemt_addr_26_reg_388;
    end else if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b1 == ap_enable_reg_pp0_iter1) & (ap_block_pp0_stage1_flag00000000 == 1'b0))) begin
        statemt_address1 = tmp_96_cast_fu_298_p1;
    end else if (((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_block_pp0_stage2_flag00000000 == 1'b0))) begin
        statemt_address1 = statemt_addr_24_reg_348;
    end else if (((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00000000 == 1'b0))) begin
        statemt_address1 = tmp_92_cast_fu_208_p1;
    end else begin
        statemt_address1 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b1 == ap_enable_reg_pp0_iter0) & (ap_block_pp0_stage1_flag00011001 == 1'b0)) | ((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_block_pp0_stage2_flag00011001 == 1'b0)) | ((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011001 == 1'b0)) | ((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_block_pp0_stage3_flag00011001 == 1'b0)))) begin
        statemt_ce0 = 1'b1;
    end else begin
        statemt_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_block_pp0_stage2_flag00011001 == 1'b0)) | ((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011001 == 1'b0)) | ((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_block_pp0_stage1_flag00011001 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1)) | ((1'b1 == ap_CS_fsm_pp0_stage3) & (ap_block_pp0_stage3_flag00011001 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1)))) begin
        statemt_ce1 = 1'b1;
    end else begin
        statemt_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_enable_reg_pp0_iter0)) begin
        if (((1'b1 == ap_CS_fsm_pp0_stage3) & (ap_block_pp0_stage3_flag00000000 == 1'b0))) begin
            statemt_d0 = tmp_49_fu_286_p2;
        end else if (((1'b1 == ap_CS_fsm_pp0_stage2) & (ap_block_pp0_stage2_flag00000000 == 1'b0))) begin
            statemt_d0 = tmp_45_reg_363;
        end else begin
            statemt_d0 = 'bx;
        end
    end else begin
        statemt_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage3) & (1'b1 == ap_enable_reg_pp0_iter1) & (ap_block_pp0_stage3_flag00000000 == 1'b0))) begin
        statemt_d1 = tmp_51_reg_393;
    end else if (((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_block_pp0_stage2_flag00000000 == 1'b0))) begin
        statemt_d1 = tmp_47_fu_261_p2;
    end else begin
        statemt_d1 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_enable_reg_pp0_iter0) & (exitcond_reg_317 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_block_pp0_stage2_flag00011001 == 1'b0)) | ((1'b1 == ap_enable_reg_pp0_iter0) & (exitcond_reg_317 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_block_pp0_stage3_flag00011001 == 1'b0)))) begin
        statemt_we0 = 1'b1;
    end else begin
        statemt_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_enable_reg_pp0_iter0) & (exitcond_reg_317 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_block_pp0_stage2_flag00011001 == 1'b0)) | ((1'b1 == ap_CS_fsm_pp0_stage3) & (ap_block_pp0_stage3_flag00011001 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1) & (1'd0 == ap_reg_pp0_iter1_exitcond_reg_317)))) begin
        statemt_we1 = 1'b1;
    end else begin
        statemt_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_enable_reg_pp0_iter0)) begin
        if (((1'b1 == ap_CS_fsm_pp0_stage3) & (ap_block_pp0_stage3_flag00000000 == 1'b0))) begin
            word13_address0 = tmp_106_cast_fu_277_p1;
        end else if (((1'b1 == ap_CS_fsm_pp0_stage2) & (ap_block_pp0_stage2_flag00000000 == 1'b0))) begin
            word13_address0 = tmp_105_cast_fu_252_p1;
        end else if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_block_pp0_stage1_flag00000000 == 1'b0))) begin
            word13_address0 = tmp_104_cast_fu_222_p1;
        end else if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00000000 == 1'b0))) begin
            word13_address0 = tmp_cast_fu_180_p1;
        end else begin
            word13_address0 = 'bx;
        end
    end else begin
        word13_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b1 == ap_enable_reg_pp0_iter0) & (ap_block_pp0_stage1_flag00011001 == 1'b0)) | ((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_block_pp0_stage2_flag00011001 == 1'b0)) | ((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011001 == 1'b0)) | ((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_block_pp0_stage3_flag00011001 == 1'b0)))) begin
        word13_ce0 = 1'b1;
    end else begin
        word13_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (((ap_block_pp0_stage0_flag00011011 == 1'b0) & ~((1'b1 == ap_enable_reg_pp0_iter0) & (ap_block_pp0_stage0_flag00011011 == 1'b0) & (exitcond_fu_159_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if (((1'b1 == ap_enable_reg_pp0_iter0) & (ap_block_pp0_stage0_flag00011011 == 1'b0) & (exitcond_fu_159_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((ap_block_pp0_stage1_flag00011011 == 1'b0)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        ap_ST_fsm_pp0_stage2 : begin
            if ((ap_block_pp0_stage2_flag00011011 == 1'b0)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end
        end
        ap_ST_fsm_pp0_stage3 : begin
            if (((ap_block_pp0_stage3_flag00011011 == 1'b0) & ~((1'b1 == ap_CS_fsm_pp0_stage3) & (1'b1 == ap_enable_reg_pp0_iter1) & (ap_block_pp0_stage3_flag00011011 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((1'b1 == ap_CS_fsm_pp0_stage3) & (1'b1 == ap_enable_reg_pp0_iter1) & (ap_block_pp0_stage3_flag00011011 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_pp0_stage2 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_pp0_stage3 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd5];

assign ap_block_pp0_stage0_flag00000000 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_flag00011001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_flag00011011 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_flag00000000 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_flag00011001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_flag00011011 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2_flag00000000 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2_flag00011001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2_flag00011011 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3_flag00000000 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3_flag00011001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3_flag00011011 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage2_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage3_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage1_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage2_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage3_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign exitcond_fu_159_p2 = ((j_phi_fu_135_p4 == 3'd4) ? 1'b1 : 1'b0);

assign j_6_fu_165_p2 = (j_phi_fu_135_p4 + 3'd1);

assign j_cast1_fu_171_p1 = j_phi_fu_135_p4;

assign tmp_103_fu_216_p2 = (9'd120 + tmp_cast_cast_fu_213_p1);

assign tmp_104_cast_fu_222_p1 = tmp_103_fu_216_p2;

assign tmp_104_fu_247_p2 = (9'd240 + tmp_cast_cast_reg_353);

assign tmp_105_cast_fu_252_p1 = tmp_104_fu_247_p2;

assign tmp_105_fu_271_p2 = (10'd360 + tmp_cast_cast1_fu_268_p1);

assign tmp_106_cast_fu_277_p1 = $signed(tmp_105_fu_271_p2);

assign tmp_114_fu_147_p1 = n[5:0];

assign tmp_115_fu_185_p1 = j_phi_fu_135_p4[1:0];

assign tmp_44_fu_189_p3 = {{tmp_115_fu_185_p1}, {2'd0}};

assign tmp_45_fu_231_p2 = (statemt_q0 ^ word13_load_cast_fu_227_p1);

assign tmp_46_fu_202_p2 = (tmp_44_fu_189_p3 | 4'd1);

assign tmp_47_fu_261_p2 = (reg_142 ^ word13_load_1_cast_fu_257_p1);

assign tmp_48_fu_237_p2 = (tmp_44_reg_337 | 4'd2);

assign tmp_49_fu_286_p2 = (reg_142 ^ word13_load_2_cast_fu_282_p1);

assign tmp_50_fu_293_p2 = (ap_reg_pp0_iter1_tmp_44_reg_337 | 4'd3);

assign tmp_51_fu_306_p2 = (statemt_q1 ^ word13_load_3_cast_fu_303_p1);

assign tmp_90_cast_fu_197_p1 = tmp_44_fu_189_p3;

assign tmp_92_cast_fu_208_p1 = tmp_46_fu_202_p2;

assign tmp_94_cast_fu_242_p1 = tmp_48_fu_237_p2;

assign tmp_96_cast_fu_298_p1 = tmp_50_fu_293_p2;

assign tmp_cast_cast1_fu_268_p1 = tmp_s_reg_326;

assign tmp_cast_cast_fu_213_p1 = tmp_s_reg_326;

assign tmp_cast_fu_180_p1 = tmp_s_fu_175_p2;

assign tmp_fu_151_p3 = {{tmp_114_fu_147_p1}, {2'd0}};

assign tmp_s_fu_175_p2 = (j_cast1_fu_171_p1 + tmp_reg_312);

assign word13_load_1_cast_fu_257_p1 = word13_q0;

assign word13_load_2_cast_fu_282_p1 = word13_q0;

assign word13_load_3_cast_fu_303_p1 = word13_load_3_reg_383;

assign word13_load_cast_fu_227_p1 = word13_q0;

always @ (posedge ap_clk) begin
    tmp_reg_312[1:0] <= 2'b00;
    tmp_44_reg_337[1:0] <= 2'b00;
    ap_reg_pp0_iter1_tmp_44_reg_337[1:0] <= 2'b00;
    statemt_addr_reg_343[1:0] <= 2'b00;
    statemt_addr_reg_343[4] <= 1'b0;
    statemt_addr_24_reg_348[1:0] <= 2'b01;
    statemt_addr_24_reg_348[4] <= 1'b0;
    tmp_cast_cast_reg_353[8] <= 1'b0;
    statemt_addr_25_reg_368[1:0] <= 2'b10;
    statemt_addr_25_reg_368[4] <= 1'b0;
    statemt_addr_26_reg_388[1:0] <= 2'b11;
    statemt_addr_26_reg_388[4] <= 1'b0;
end

endmodule //AddRoundKey

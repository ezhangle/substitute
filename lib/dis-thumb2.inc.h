#include "dis.h"
static INLINE tdis_ret P(GPR_Rm_unk_Rd_1_t2MOVr)(tdis_ctx ctx, struct bitslice Rm, struct bitslice Rd) {
    data(rout(Rd), r(Rm));
}
static INLINE tdis_ret P(GPR_Rn_unk_Rd_1_t2ADDri12)(tdis_ctx ctx, struct bitslice Rd, struct bitslice Rn) {
    data(rout(Rd), r(Rn));
}
static INLINE tdis_ret P(GPR_Rt_8_VMOVDRR)(tdis_ctx ctx, struct bitslice Rt) {
    return P(unidentified)(ctx); /* don't care */
}
static INLINE tdis_ret P(GPR_Rt_t2addrmode_imm12_addr_S_1_t2STRi12)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(rs(addr, 13, 4), r(Rt));
}
static INLINE tdis_ret P(GPR_Rt_t2addrmode_negimm8_addr_S_1_t2STRi8)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(rs(addr, 9, 4), r(Rt));
}
static INLINE tdis_ret P(GPR_Rt_t2addrmode_so_reg_addr_S_1_t2STRs)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(rs(addr, 6, 4), rs(addr, 2, 4), r(Rt));
}
static INLINE tdis_ret P(GPRnopc_Rn_rGPR_Rm_unk_Rd_1_t2ADDrr)(tdis_ctx ctx, struct bitslice Rm, struct bitslice Rd, struct bitslice Rn) {
    data(rout(Rd), r(Rm), r(Rn));
}
static INLINE tdis_ret P(GPRnopc_Rn_unk_Rd_2_t2ADDri)(tdis_ctx ctx, struct bitslice Rd, struct bitslice Rn) {
    data(rout(Rd), r(Rn));
}
static INLINE tdis_ret P(GPRnopc_Rt_t2addrmode_imm8_pre_addr_S_1_t2STR_PRE)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(rs(addr, 9, 4), r(Rt));
}
static INLINE tdis_ret P(GPRnopc_Rt_t2am_imm8_offset_offset_S_1_t2STR_POST)(tdis_ctx ctx, struct bitslice offset, struct bitslice Rt) {
    data(r(Rt), r(Rn));
}
static INLINE tdis_ret P(addr_offset_none_addr_4_t2LDC2L_OPTION)(tdis_ctx ctx, struct bitslice addr) {
    data(r(addr));
}
static INLINE tdis_ret P(addr_offset_none_addr_S_4_t2STC2L_OPTION)(tdis_ctx ctx, struct bitslice addr) {
    data(r(addr));
}
static INLINE tdis_ret P(addr_offset_none_addr_postidx_imm8s4_offset_4_t2LDC2L_POST)(tdis_ctx ctx, UNUSED struct bitslice offset, struct bitslice addr) {
    data(r(addr));
}
static INLINE tdis_ret P(addr_offset_none_addr_postidx_imm8s4_offset_S_4_t2STC2L_POST)(tdis_ctx ctx, UNUSED struct bitslice offset, struct bitslice addr) {
    data(r(addr));
}
static INLINE tdis_ret P(addr_offset_none_addr_unk_Rt_11_t2LDA)(tdis_ctx ctx, struct bitslice Rt, struct bitslice addr) {
    data(rout(Rt), r(addr));
}
static INLINE tdis_ret P(addrmode5_addr_8_VLDRD)(tdis_ctx ctx, struct bitslice addr) {
    data(rs(addr, 9, 4));
}
static INLINE tdis_ret P(addrmode5_addr_S_4_t2STC2L_OFFSET)(tdis_ctx ctx, struct bitslice addr) {
    data(rs(addr, 9, 4));
}
static INLINE tdis_ret P(addrmode5_pre_addr_4_t2LDC2L_PRE)(tdis_ctx ctx, struct bitslice addr) {
    data(rs(addr, 9, 4));
}
static INLINE tdis_ret P(addrmode5_pre_addr_S_4_t2STC2L_PRE)(tdis_ctx ctx, struct bitslice addr) {
    data(rs(addr, 9, 4));
}
static INLINE tdis_ret P(brtarget_target_B_1_t2Bcc)(tdis_ctx ctx, struct bitslice target) {
    return P(branch)(ctx->pc + 4 + 2 * sext(bs_get(target, ctx->op), 20);
}
static INLINE tdis_ret P(rGPR_Rt_addr_offset_none_addr_S_11_t2STL)(tdis_ctx ctx, struct bitslice Rt, struct bitslice addr) {
    data(r(Rt), r(addr));
}
static INLINE tdis_ret P(rGPR_Rt_t2addrmode_imm0_1020s4_addr_S_1_t2STREX)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(r(Rt), rs(addr, 8, 4));
}
static INLINE tdis_ret P(rGPR_Rt_t2addrmode_imm12_addr_S_2_t2STRBi12)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(r(Rt), rs(addr, 13, 4));
}
static INLINE tdis_ret P(rGPR_Rt_t2addrmode_imm8_pre_addr_S_2_t2STRB_PRE)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(r(Rt), rs(addr, 9, 4));
}
static INLINE tdis_ret P(rGPR_Rt_t2addrmode_imm8s4_addr_S_1_t2STRDi8)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(r(Rt), rs(addr, 9, 4));
}
static INLINE tdis_ret P(rGPR_Rt_t2addrmode_imm8s4_pre_addr_S_1_t2STRD_PRE)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(r(Rt), rs(addr, 9, 4));
}
static INLINE tdis_ret P(rGPR_Rt_t2addrmode_negimm8_addr_S_2_t2STRBi8)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(r(Rt), rs(addr, 9, 4));
}
static INLINE tdis_ret P(rGPR_Rt_t2addrmode_so_reg_addr_S_2_t2STRBs)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(rs(addr, 6, 4), rs(Rt, 2, 4), r(Rt));
}
static INLINE tdis_ret P(rGPR_Rt_t2am_imm8_offset_offset_S_2_t2STRB_POST)(tdis_ctx ctx, struct bitslice offset, struct bitslice Rt) {
    data(r(Rt), r(Rn));
}
static INLINE tdis_ret P(t2addrmode_imm0_1020s4_addr_unk_Rt_1_t2LDREX)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(rout(Rt), rs(addr, 8, 4));
}
static INLINE tdis_ret P(t2addrmode_imm12_addr_unk_Rt_5_t2LDRBi12)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(rout(Rt), rs(addr, 13, 4));
}
static INLINE tdis_ret P(t2addrmode_imm8_addr_unk_Rt_S_3_t2STRBT)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(r(Rt), rs(addr, 9, 4));
}
static INLINE tdis_ret P(t2addrmode_imm8_pre_addr_unk_Rt_5_t2LDRB_PRE)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(rs(addr, 9, 4));
}
static INLINE tdis_ret P(t2addrmode_imm8s4_addr_unk_Rt_1_t2LDRDi8)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(rs(addr, 9, 4));
}
static INLINE tdis_ret P(t2addrmode_imm8s4_pre_addr_unk_Rt_1_t2LDRD_PRE)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(rs(addr, 9, 4));
}
static INLINE tdis_ret P(t2addrmode_negimm8_addr_unk_Rt_5_t2LDRBi8)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(rout(Rt), rs(addr, 9, 4));
}
static INLINE tdis_ret P(t2addrmode_posimm8_addr_unk_Rt_5_t2LDRBT)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    data(rout(Rt), rs(addr, 9, 4));
}
static INLINE tdis_ret P(t2addrmode_so_reg_addr_unk_Rt_5_t2LDRBs)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
}
static INLINE tdis_ret P(t2adrlabel_addr_unk_Rd_1_t2ADR)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rd) {
    return P(pcrel)(ctx, ((ctx->pc + 4) & ~2) + (bs_get(addr, ctx->op) & ((1 << 12) - 1)), bs_get(Rd, ctx->op), false);
}
static INLINE tdis_ret P(t2ldrlabel_addr_unk_Rt_5_t2LDRBpci)(tdis_ctx ctx, struct bitslice addr, struct bitslice Rt) {
    return P(pcrel)(ctx, ((ctx->pc + 4) & ~2) + (bs_get(addr, ctx->op) & ((1 << 12) - 1)), bs_get(Rd, ctx->op), true);
}
static INLINE tdis_ret P(uncondbrtarget_target_B_1_t2B)(tdis_ctx ctx, struct bitslice target) {
    return P(branch)(ctx->pc + 4 + 2 * sext(bs_get(target, ctx->op), 24);
}
static INLINE tdis_ret P(unk_Rd_3_t2MOVTi16)(tdis_ctx ctx, struct bitslice Rd) {
    data(rout(Rt));
}
static INLINE tdis_ret P(unk_Rm_B_2_t2TBB)(tdis_ctx ctx, struct bitslice Rm) {
    /* Ew.  Don't bother for now - this is hard to make show up in the first 8 bytes... */
    return P(bad)(ctx);
}
static INLINE tdis_ret P(unk_Rt_13_VMOVRRD)(tdis_ctx ctx, struct bitslice Rt) {
    return P(unidentified)(ctx);
}
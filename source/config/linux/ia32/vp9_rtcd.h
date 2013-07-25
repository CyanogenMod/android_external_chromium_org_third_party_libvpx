#ifndef VP9_RTCD_H_
#define VP9_RTCD_H_

#ifdef RTCD_C
#define RTCD_EXTERN
#else
#define RTCD_EXTERN extern
#endif

/*
 * VP9
 */

#include "vpx/vpx_integer.h"
#include "vp9/common/vp9_enums.h"

struct loop_filter_info;
struct macroblockd;
struct loop_filter_info;

/* Encoder forward decls */
struct macroblock;
struct vp9_variance_vtable;

#define DEC_MVCOSTS int *mvjcost, int *mvcost[2]
union int_mv;
struct yv12_buffer_config;

void vp9_idct_add_16x16_c(int16_t *input, uint8_t *dest, int stride, int eob);
#define vp9_idct_add_16x16 vp9_idct_add_16x16_c

void vp9_idct_add_8x8_c(int16_t *input, uint8_t *dest, int stride, int eob);
#define vp9_idct_add_8x8 vp9_idct_add_8x8_c

void vp9_idct_add_c(int16_t *input, uint8_t *dest, int stride, int eob);
#define vp9_idct_add vp9_idct_add_c

void vp9_idct_add_32x32_c(int16_t *q, uint8_t *dst, int stride, int eob);
#define vp9_idct_add_32x32 vp9_idct_add_32x32_c

void vp9_d27_predictor_4x4_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d27_predictor_4x4 vp9_d27_predictor_4x4_c

void vp9_d45_predictor_4x4_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d45_predictor_4x4 vp9_d45_predictor_4x4_c

void vp9_d63_predictor_4x4_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d63_predictor_4x4 vp9_d63_predictor_4x4_c

void vp9_h_predictor_4x4_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_h_predictor_4x4_ssse3(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_h_predictor_4x4)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_d117_predictor_4x4_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d117_predictor_4x4 vp9_d117_predictor_4x4_c

void vp9_d135_predictor_4x4_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d135_predictor_4x4 vp9_d135_predictor_4x4_c

void vp9_d153_predictor_4x4_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d153_predictor_4x4 vp9_d153_predictor_4x4_c

void vp9_v_predictor_4x4_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_v_predictor_4x4_sse(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_v_predictor_4x4)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_tm_predictor_4x4_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_tm_predictor_4x4_sse(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_tm_predictor_4x4)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_dc_predictor_4x4_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_dc_predictor_4x4_sse(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_dc_predictor_4x4)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_dc_top_predictor_4x4_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_dc_top_predictor_4x4 vp9_dc_top_predictor_4x4_c

void vp9_dc_left_predictor_4x4_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_dc_left_predictor_4x4 vp9_dc_left_predictor_4x4_c

void vp9_dc_128_predictor_4x4_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_dc_128_predictor_4x4 vp9_dc_128_predictor_4x4_c

void vp9_d27_predictor_8x8_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d27_predictor_8x8 vp9_d27_predictor_8x8_c

void vp9_d45_predictor_8x8_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d45_predictor_8x8 vp9_d45_predictor_8x8_c

void vp9_d63_predictor_8x8_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d63_predictor_8x8 vp9_d63_predictor_8x8_c

void vp9_h_predictor_8x8_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_h_predictor_8x8_ssse3(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_h_predictor_8x8)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_d117_predictor_8x8_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d117_predictor_8x8 vp9_d117_predictor_8x8_c

void vp9_d135_predictor_8x8_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d135_predictor_8x8 vp9_d135_predictor_8x8_c

void vp9_d153_predictor_8x8_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d153_predictor_8x8 vp9_d153_predictor_8x8_c

void vp9_v_predictor_8x8_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_v_predictor_8x8_sse(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_v_predictor_8x8)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_tm_predictor_8x8_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_tm_predictor_8x8_sse2(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_tm_predictor_8x8)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_dc_predictor_8x8_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_dc_predictor_8x8_sse(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_dc_predictor_8x8)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_dc_top_predictor_8x8_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_dc_top_predictor_8x8 vp9_dc_top_predictor_8x8_c

void vp9_dc_left_predictor_8x8_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_dc_left_predictor_8x8 vp9_dc_left_predictor_8x8_c

void vp9_dc_128_predictor_8x8_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_dc_128_predictor_8x8 vp9_dc_128_predictor_8x8_c

void vp9_d27_predictor_16x16_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d27_predictor_16x16 vp9_d27_predictor_16x16_c

void vp9_d45_predictor_16x16_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d45_predictor_16x16 vp9_d45_predictor_16x16_c

void vp9_d63_predictor_16x16_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d63_predictor_16x16 vp9_d63_predictor_16x16_c

void vp9_h_predictor_16x16_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_h_predictor_16x16_ssse3(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_h_predictor_16x16)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_d117_predictor_16x16_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d117_predictor_16x16 vp9_d117_predictor_16x16_c

void vp9_d135_predictor_16x16_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d135_predictor_16x16 vp9_d135_predictor_16x16_c

void vp9_d153_predictor_16x16_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d153_predictor_16x16 vp9_d153_predictor_16x16_c

void vp9_v_predictor_16x16_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_v_predictor_16x16_sse2(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_v_predictor_16x16)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_tm_predictor_16x16_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_tm_predictor_16x16_sse2(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_tm_predictor_16x16)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_dc_predictor_16x16_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_dc_predictor_16x16_sse2(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_dc_predictor_16x16)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_dc_top_predictor_16x16_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_dc_top_predictor_16x16 vp9_dc_top_predictor_16x16_c

void vp9_dc_left_predictor_16x16_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_dc_left_predictor_16x16 vp9_dc_left_predictor_16x16_c

void vp9_dc_128_predictor_16x16_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_dc_128_predictor_16x16 vp9_dc_128_predictor_16x16_c

void vp9_d27_predictor_32x32_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d27_predictor_32x32 vp9_d27_predictor_32x32_c

void vp9_d45_predictor_32x32_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d45_predictor_32x32 vp9_d45_predictor_32x32_c

void vp9_d63_predictor_32x32_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d63_predictor_32x32 vp9_d63_predictor_32x32_c

void vp9_h_predictor_32x32_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_h_predictor_32x32_ssse3(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_h_predictor_32x32)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_d117_predictor_32x32_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d117_predictor_32x32 vp9_d117_predictor_32x32_c

void vp9_d135_predictor_32x32_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d135_predictor_32x32 vp9_d135_predictor_32x32_c

void vp9_d153_predictor_32x32_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_d153_predictor_32x32 vp9_d153_predictor_32x32_c

void vp9_v_predictor_32x32_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_v_predictor_32x32_sse2(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_v_predictor_32x32)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_tm_predictor_32x32_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_tm_predictor_32x32 vp9_tm_predictor_32x32_c

void vp9_dc_predictor_32x32_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
void vp9_dc_predictor_32x32_sse2(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
RTCD_EXTERN void (*vp9_dc_predictor_32x32)(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);

void vp9_dc_top_predictor_32x32_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_dc_top_predictor_32x32 vp9_dc_top_predictor_32x32_c

void vp9_dc_left_predictor_32x32_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_dc_left_predictor_32x32 vp9_dc_left_predictor_32x32_c

void vp9_dc_128_predictor_32x32_c(uint8_t *ypred_ptr, ptrdiff_t y_stride, uint8_t *yabove_row, uint8_t *yleft_col);
#define vp9_dc_128_predictor_32x32 vp9_dc_128_predictor_32x32_c

void vp9_add_constant_residual_8x8_c(const int16_t diff, uint8_t *dest, int stride);
void vp9_add_constant_residual_8x8_sse2(const int16_t diff, uint8_t *dest, int stride);
RTCD_EXTERN void (*vp9_add_constant_residual_8x8)(const int16_t diff, uint8_t *dest, int stride);

void vp9_add_constant_residual_16x16_c(const int16_t diff, uint8_t *dest, int stride);
void vp9_add_constant_residual_16x16_sse2(const int16_t diff, uint8_t *dest, int stride);
RTCD_EXTERN void (*vp9_add_constant_residual_16x16)(const int16_t diff, uint8_t *dest, int stride);

void vp9_add_constant_residual_32x32_c(const int16_t diff, uint8_t *dest, int stride);
void vp9_add_constant_residual_32x32_sse2(const int16_t diff, uint8_t *dest, int stride);
RTCD_EXTERN void (*vp9_add_constant_residual_32x32)(const int16_t diff, uint8_t *dest, int stride);

void vp9_mb_lpf_vertical_edge_w_c(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh);
void vp9_mb_lpf_vertical_edge_w_sse2(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh);
RTCD_EXTERN void (*vp9_mb_lpf_vertical_edge_w)(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh);

void vp9_mbloop_filter_vertical_edge_c(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);
void vp9_mbloop_filter_vertical_edge_sse2(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);
RTCD_EXTERN void (*vp9_mbloop_filter_vertical_edge)(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);

void vp9_loop_filter_vertical_edge_c(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);
void vp9_loop_filter_vertical_edge_mmx(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);
RTCD_EXTERN void (*vp9_loop_filter_vertical_edge)(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);

void vp9_mb_lpf_horizontal_edge_w_c(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);
void vp9_mb_lpf_horizontal_edge_w_sse2(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);
RTCD_EXTERN void (*vp9_mb_lpf_horizontal_edge_w)(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);

void vp9_mbloop_filter_horizontal_edge_c(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);
void vp9_mbloop_filter_horizontal_edge_sse2(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);
RTCD_EXTERN void (*vp9_mbloop_filter_horizontal_edge)(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);

void vp9_loop_filter_horizontal_edge_c(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);
void vp9_loop_filter_horizontal_edge_mmx(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);
RTCD_EXTERN void (*vp9_loop_filter_horizontal_edge)(uint8_t *s, int pitch, const uint8_t *blimit, const uint8_t *limit, const uint8_t *thresh, int count);

void vp9_mbpost_proc_down_c(uint8_t *dst, int pitch, int rows, int cols, int flimit);
void vp9_mbpost_proc_down_mmx(uint8_t *dst, int pitch, int rows, int cols, int flimit);
void vp9_mbpost_proc_down_xmm(uint8_t *dst, int pitch, int rows, int cols, int flimit);
RTCD_EXTERN void (*vp9_mbpost_proc_down)(uint8_t *dst, int pitch, int rows, int cols, int flimit);

void vp9_mbpost_proc_across_ip_c(uint8_t *src, int pitch, int rows, int cols, int flimit);
void vp9_mbpost_proc_across_ip_xmm(uint8_t *src, int pitch, int rows, int cols, int flimit);
RTCD_EXTERN void (*vp9_mbpost_proc_across_ip)(uint8_t *src, int pitch, int rows, int cols, int flimit);

void vp9_post_proc_down_and_across_c(const uint8_t *src_ptr, uint8_t *dst_ptr, int src_pixels_per_line, int dst_pixels_per_line, int rows, int cols, int flimit);
void vp9_post_proc_down_and_across_mmx(const uint8_t *src_ptr, uint8_t *dst_ptr, int src_pixels_per_line, int dst_pixels_per_line, int rows, int cols, int flimit);
void vp9_post_proc_down_and_across_xmm(const uint8_t *src_ptr, uint8_t *dst_ptr, int src_pixels_per_line, int dst_pixels_per_line, int rows, int cols, int flimit);
RTCD_EXTERN void (*vp9_post_proc_down_and_across)(const uint8_t *src_ptr, uint8_t *dst_ptr, int src_pixels_per_line, int dst_pixels_per_line, int rows, int cols, int flimit);

void vp9_plane_add_noise_c(uint8_t *Start, char *noise, char blackclamp[16], char whiteclamp[16], char bothclamp[16], unsigned int Width, unsigned int Height, int Pitch);
void vp9_plane_add_noise_mmx(uint8_t *Start, char *noise, char blackclamp[16], char whiteclamp[16], char bothclamp[16], unsigned int Width, unsigned int Height, int Pitch);
void vp9_plane_add_noise_wmt(uint8_t *Start, char *noise, char blackclamp[16], char whiteclamp[16], char bothclamp[16], unsigned int Width, unsigned int Height, int Pitch);
RTCD_EXTERN void (*vp9_plane_add_noise)(uint8_t *Start, char *noise, char blackclamp[16], char whiteclamp[16], char bothclamp[16], unsigned int Width, unsigned int Height, int Pitch);

void vp9_blend_mb_inner_c(uint8_t *y, uint8_t *u, uint8_t *v, int y1, int u1, int v1, int alpha, int stride);
#define vp9_blend_mb_inner vp9_blend_mb_inner_c

void vp9_blend_mb_outer_c(uint8_t *y, uint8_t *u, uint8_t *v, int y1, int u1, int v1, int alpha, int stride);
#define vp9_blend_mb_outer vp9_blend_mb_outer_c

void vp9_blend_b_c(uint8_t *y, uint8_t *u, uint8_t *v, int y1, int u1, int v1, int alpha, int stride);
#define vp9_blend_b vp9_blend_b_c

void vp9_convolve_copy_c(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
void vp9_convolve_copy_sse2(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
RTCD_EXTERN void (*vp9_convolve_copy)(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);

void vp9_convolve_avg_c(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
void vp9_convolve_avg_sse2(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
RTCD_EXTERN void (*vp9_convolve_avg)(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);

void vp9_convolve8_c(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
void vp9_convolve8_ssse3(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
RTCD_EXTERN void (*vp9_convolve8)(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);

void vp9_convolve8_horiz_c(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
void vp9_convolve8_horiz_ssse3(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
RTCD_EXTERN void (*vp9_convolve8_horiz)(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);

void vp9_convolve8_vert_c(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
void vp9_convolve8_vert_ssse3(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
RTCD_EXTERN void (*vp9_convolve8_vert)(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);

void vp9_convolve8_avg_c(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
void vp9_convolve8_avg_ssse3(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
RTCD_EXTERN void (*vp9_convolve8_avg)(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);

void vp9_convolve8_avg_horiz_c(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
void vp9_convolve8_avg_horiz_ssse3(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
RTCD_EXTERN void (*vp9_convolve8_avg_horiz)(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);

void vp9_convolve8_avg_vert_c(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
void vp9_convolve8_avg_vert_ssse3(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);
RTCD_EXTERN void (*vp9_convolve8_avg_vert)(const uint8_t *src, ptrdiff_t src_stride, uint8_t *dst, ptrdiff_t dst_stride, const int16_t *filter_x, int x_step_q4, const int16_t *filter_y, int y_step_q4, int w, int h);

void vp9_short_idct4x4_1_add_c(int16_t *input, uint8_t *dest, int dest_stride);
void vp9_short_idct4x4_1_add_sse2(int16_t *input, uint8_t *dest, int dest_stride);
RTCD_EXTERN void (*vp9_short_idct4x4_1_add)(int16_t *input, uint8_t *dest, int dest_stride);

void vp9_short_idct4x4_add_c(int16_t *input, uint8_t *dest, int dest_stride);
void vp9_short_idct4x4_add_sse2(int16_t *input, uint8_t *dest, int dest_stride);
RTCD_EXTERN void (*vp9_short_idct4x4_add)(int16_t *input, uint8_t *dest, int dest_stride);

void vp9_short_idct8x8_add_c(int16_t *input, uint8_t *dest, int dest_stride);
void vp9_short_idct8x8_add_sse2(int16_t *input, uint8_t *dest, int dest_stride);
RTCD_EXTERN void (*vp9_short_idct8x8_add)(int16_t *input, uint8_t *dest, int dest_stride);

void vp9_short_idct10_8x8_add_c(int16_t *input, uint8_t *dest, int dest_stride);
void vp9_short_idct10_8x8_add_sse2(int16_t *input, uint8_t *dest, int dest_stride);
RTCD_EXTERN void (*vp9_short_idct10_8x8_add)(int16_t *input, uint8_t *dest, int dest_stride);

void vp9_short_idct1_8x8_c(int16_t *input, int16_t *output);
#define vp9_short_idct1_8x8 vp9_short_idct1_8x8_c

void vp9_short_idct16x16_add_c(int16_t *input, uint8_t *dest, int dest_stride);
void vp9_short_idct16x16_add_sse2(int16_t *input, uint8_t *dest, int dest_stride);
RTCD_EXTERN void (*vp9_short_idct16x16_add)(int16_t *input, uint8_t *dest, int dest_stride);

void vp9_short_idct10_16x16_add_c(int16_t *input, uint8_t *dest, int dest_stride);
void vp9_short_idct10_16x16_add_sse2(int16_t *input, uint8_t *dest, int dest_stride);
RTCD_EXTERN void (*vp9_short_idct10_16x16_add)(int16_t *input, uint8_t *dest, int dest_stride);

void vp9_short_idct1_16x16_c(int16_t *input, int16_t *output);
#define vp9_short_idct1_16x16 vp9_short_idct1_16x16_c

void vp9_short_idct32x32_add_c(int16_t *input, uint8_t *dest, int dest_stride);
void vp9_short_idct32x32_add_sse2(int16_t *input, uint8_t *dest, int dest_stride);
RTCD_EXTERN void (*vp9_short_idct32x32_add)(int16_t *input, uint8_t *dest, int dest_stride);

void vp9_short_idct1_32x32_c(int16_t *input, int16_t *output);
#define vp9_short_idct1_32x32 vp9_short_idct1_32x32_c

void vp9_short_idct10_32x32_add_c(int16_t *input, uint8_t *dest, int dest_stride);
#define vp9_short_idct10_32x32_add vp9_short_idct10_32x32_add_c

void vp9_short_iht4x4_add_c(int16_t *input, uint8_t *dest, int dest_stride, int tx_type);
void vp9_short_iht4x4_add_sse2(int16_t *input, uint8_t *dest, int dest_stride, int tx_type);
RTCD_EXTERN void (*vp9_short_iht4x4_add)(int16_t *input, uint8_t *dest, int dest_stride, int tx_type);

void vp9_short_iht8x8_add_c(int16_t *input, uint8_t *dest, int dest_stride, int tx_type);
void vp9_short_iht8x8_add_sse2(int16_t *input, uint8_t *dest, int dest_stride, int tx_type);
RTCD_EXTERN void (*vp9_short_iht8x8_add)(int16_t *input, uint8_t *dest, int dest_stride, int tx_type);

void vp9_short_iht16x16_add_c(int16_t *input, uint8_t *output, int pitch, int tx_type);
void vp9_short_iht16x16_add_sse2(int16_t *input, uint8_t *output, int pitch, int tx_type);
RTCD_EXTERN void (*vp9_short_iht16x16_add)(int16_t *input, uint8_t *output, int pitch, int tx_type);

void vp9_idct4_1d_c(int16_t *input, int16_t *output);
void vp9_idct4_1d_sse2(int16_t *input, int16_t *output);
RTCD_EXTERN void (*vp9_idct4_1d)(int16_t *input, int16_t *output);

void vp9_short_iwalsh4x4_1_add_c(int16_t *input, uint8_t *dest, int dest_stride);
#define vp9_short_iwalsh4x4_1_add vp9_short_iwalsh4x4_1_add_c

void vp9_short_iwalsh4x4_add_c(int16_t *input, uint8_t *dest, int dest_stride);
#define vp9_short_iwalsh4x4_add vp9_short_iwalsh4x4_add_c

unsigned int vp9_sad32x3_c(const uint8_t *src_ptr, int  src_stride, const uint8_t *ref_ptr, int ref_stride, int max_sad);
#define vp9_sad32x3 vp9_sad32x3_c

unsigned int vp9_sad3x32_c(const uint8_t *src_ptr, int  src_stride, const uint8_t *ref_ptr, int ref_stride, int max_sad);
#define vp9_sad3x32 vp9_sad3x32_c

void vp9_rtcd(void);

#ifdef RTCD_C
#include "vpx_ports/x86.h"
static void setup_rtcd_internal(void)
{
    int flags = x86_simd_caps();

    (void)flags;








    vp9_h_predictor_4x4 = vp9_h_predictor_4x4_c;
    if (flags & HAS_SSSE3) vp9_h_predictor_4x4 = vp9_h_predictor_4x4_ssse3;




    vp9_v_predictor_4x4 = vp9_v_predictor_4x4_c;
    if (flags & HAS_SSE) vp9_v_predictor_4x4 = vp9_v_predictor_4x4_sse;

    vp9_tm_predictor_4x4 = vp9_tm_predictor_4x4_c;
    if (flags & HAS_SSE) vp9_tm_predictor_4x4 = vp9_tm_predictor_4x4_sse;

    vp9_dc_predictor_4x4 = vp9_dc_predictor_4x4_c;
    if (flags & HAS_SSE) vp9_dc_predictor_4x4 = vp9_dc_predictor_4x4_sse;







    vp9_h_predictor_8x8 = vp9_h_predictor_8x8_c;
    if (flags & HAS_SSSE3) vp9_h_predictor_8x8 = vp9_h_predictor_8x8_ssse3;




    vp9_v_predictor_8x8 = vp9_v_predictor_8x8_c;
    if (flags & HAS_SSE) vp9_v_predictor_8x8 = vp9_v_predictor_8x8_sse;

    vp9_tm_predictor_8x8 = vp9_tm_predictor_8x8_c;
    if (flags & HAS_SSE2) vp9_tm_predictor_8x8 = vp9_tm_predictor_8x8_sse2;

    vp9_dc_predictor_8x8 = vp9_dc_predictor_8x8_c;
    if (flags & HAS_SSE) vp9_dc_predictor_8x8 = vp9_dc_predictor_8x8_sse;







    vp9_h_predictor_16x16 = vp9_h_predictor_16x16_c;
    if (flags & HAS_SSSE3) vp9_h_predictor_16x16 = vp9_h_predictor_16x16_ssse3;




    vp9_v_predictor_16x16 = vp9_v_predictor_16x16_c;
    if (flags & HAS_SSE2) vp9_v_predictor_16x16 = vp9_v_predictor_16x16_sse2;

    vp9_tm_predictor_16x16 = vp9_tm_predictor_16x16_c;
    if (flags & HAS_SSE2) vp9_tm_predictor_16x16 = vp9_tm_predictor_16x16_sse2;

    vp9_dc_predictor_16x16 = vp9_dc_predictor_16x16_c;
    if (flags & HAS_SSE2) vp9_dc_predictor_16x16 = vp9_dc_predictor_16x16_sse2;







    vp9_h_predictor_32x32 = vp9_h_predictor_32x32_c;
    if (flags & HAS_SSSE3) vp9_h_predictor_32x32 = vp9_h_predictor_32x32_ssse3;




    vp9_v_predictor_32x32 = vp9_v_predictor_32x32_c;
    if (flags & HAS_SSE2) vp9_v_predictor_32x32 = vp9_v_predictor_32x32_sse2;


    vp9_dc_predictor_32x32 = vp9_dc_predictor_32x32_c;
    if (flags & HAS_SSE2) vp9_dc_predictor_32x32 = vp9_dc_predictor_32x32_sse2;




    vp9_add_constant_residual_8x8 = vp9_add_constant_residual_8x8_c;
    if (flags & HAS_SSE2) vp9_add_constant_residual_8x8 = vp9_add_constant_residual_8x8_sse2;

    vp9_add_constant_residual_16x16 = vp9_add_constant_residual_16x16_c;
    if (flags & HAS_SSE2) vp9_add_constant_residual_16x16 = vp9_add_constant_residual_16x16_sse2;

    vp9_add_constant_residual_32x32 = vp9_add_constant_residual_32x32_c;
    if (flags & HAS_SSE2) vp9_add_constant_residual_32x32 = vp9_add_constant_residual_32x32_sse2;

    vp9_mb_lpf_vertical_edge_w = vp9_mb_lpf_vertical_edge_w_c;
    if (flags & HAS_SSE2) vp9_mb_lpf_vertical_edge_w = vp9_mb_lpf_vertical_edge_w_sse2;

    vp9_mbloop_filter_vertical_edge = vp9_mbloop_filter_vertical_edge_c;
    if (flags & HAS_SSE2) vp9_mbloop_filter_vertical_edge = vp9_mbloop_filter_vertical_edge_sse2;

    vp9_loop_filter_vertical_edge = vp9_loop_filter_vertical_edge_c;
    if (flags & HAS_MMX) vp9_loop_filter_vertical_edge = vp9_loop_filter_vertical_edge_mmx;

    vp9_mb_lpf_horizontal_edge_w = vp9_mb_lpf_horizontal_edge_w_c;
    if (flags & HAS_SSE2) vp9_mb_lpf_horizontal_edge_w = vp9_mb_lpf_horizontal_edge_w_sse2;

    vp9_mbloop_filter_horizontal_edge = vp9_mbloop_filter_horizontal_edge_c;
    if (flags & HAS_SSE2) vp9_mbloop_filter_horizontal_edge = vp9_mbloop_filter_horizontal_edge_sse2;

    vp9_loop_filter_horizontal_edge = vp9_loop_filter_horizontal_edge_c;
    if (flags & HAS_MMX) vp9_loop_filter_horizontal_edge = vp9_loop_filter_horizontal_edge_mmx;

    vp9_mbpost_proc_down = vp9_mbpost_proc_down_c;
    if (flags & HAS_MMX) vp9_mbpost_proc_down = vp9_mbpost_proc_down_mmx;
    if (flags & HAS_SSE2) vp9_mbpost_proc_down = vp9_mbpost_proc_down_xmm;

    vp9_mbpost_proc_across_ip = vp9_mbpost_proc_across_ip_c;
    if (flags & HAS_SSE2) vp9_mbpost_proc_across_ip = vp9_mbpost_proc_across_ip_xmm;

    vp9_post_proc_down_and_across = vp9_post_proc_down_and_across_c;
    if (flags & HAS_MMX) vp9_post_proc_down_and_across = vp9_post_proc_down_and_across_mmx;
    if (flags & HAS_SSE2) vp9_post_proc_down_and_across = vp9_post_proc_down_and_across_xmm;

    vp9_plane_add_noise = vp9_plane_add_noise_c;
    if (flags & HAS_MMX) vp9_plane_add_noise = vp9_plane_add_noise_mmx;
    if (flags & HAS_SSE2) vp9_plane_add_noise = vp9_plane_add_noise_wmt;




    vp9_convolve_copy = vp9_convolve_copy_c;
    if (flags & HAS_SSE2) vp9_convolve_copy = vp9_convolve_copy_sse2;

    vp9_convolve_avg = vp9_convolve_avg_c;
    if (flags & HAS_SSE2) vp9_convolve_avg = vp9_convolve_avg_sse2;

    vp9_convolve8 = vp9_convolve8_c;
    if (flags & HAS_SSSE3) vp9_convolve8 = vp9_convolve8_ssse3;

    vp9_convolve8_horiz = vp9_convolve8_horiz_c;
    if (flags & HAS_SSSE3) vp9_convolve8_horiz = vp9_convolve8_horiz_ssse3;

    vp9_convolve8_vert = vp9_convolve8_vert_c;
    if (flags & HAS_SSSE3) vp9_convolve8_vert = vp9_convolve8_vert_ssse3;

    vp9_convolve8_avg = vp9_convolve8_avg_c;
    if (flags & HAS_SSSE3) vp9_convolve8_avg = vp9_convolve8_avg_ssse3;

    vp9_convolve8_avg_horiz = vp9_convolve8_avg_horiz_c;
    if (flags & HAS_SSSE3) vp9_convolve8_avg_horiz = vp9_convolve8_avg_horiz_ssse3;

    vp9_convolve8_avg_vert = vp9_convolve8_avg_vert_c;
    if (flags & HAS_SSSE3) vp9_convolve8_avg_vert = vp9_convolve8_avg_vert_ssse3;

    vp9_short_idct4x4_1_add = vp9_short_idct4x4_1_add_c;
    if (flags & HAS_SSE2) vp9_short_idct4x4_1_add = vp9_short_idct4x4_1_add_sse2;

    vp9_short_idct4x4_add = vp9_short_idct4x4_add_c;
    if (flags & HAS_SSE2) vp9_short_idct4x4_add = vp9_short_idct4x4_add_sse2;

    vp9_short_idct8x8_add = vp9_short_idct8x8_add_c;
    if (flags & HAS_SSE2) vp9_short_idct8x8_add = vp9_short_idct8x8_add_sse2;

    vp9_short_idct10_8x8_add = vp9_short_idct10_8x8_add_c;
    if (flags & HAS_SSE2) vp9_short_idct10_8x8_add = vp9_short_idct10_8x8_add_sse2;


    vp9_short_idct16x16_add = vp9_short_idct16x16_add_c;
    if (flags & HAS_SSE2) vp9_short_idct16x16_add = vp9_short_idct16x16_add_sse2;

    vp9_short_idct10_16x16_add = vp9_short_idct10_16x16_add_c;
    if (flags & HAS_SSE2) vp9_short_idct10_16x16_add = vp9_short_idct10_16x16_add_sse2;


    vp9_short_idct32x32_add = vp9_short_idct32x32_add_c;
    if (flags & HAS_SSE2) vp9_short_idct32x32_add = vp9_short_idct32x32_add_sse2;



    vp9_short_iht4x4_add = vp9_short_iht4x4_add_c;
    if (flags & HAS_SSE2) vp9_short_iht4x4_add = vp9_short_iht4x4_add_sse2;

    vp9_short_iht8x8_add = vp9_short_iht8x8_add_c;
    if (flags & HAS_SSE2) vp9_short_iht8x8_add = vp9_short_iht8x8_add_sse2;

    vp9_short_iht16x16_add = vp9_short_iht16x16_add_c;
    if (flags & HAS_SSE2) vp9_short_iht16x16_add = vp9_short_iht16x16_add_sse2;

    vp9_idct4_1d = vp9_idct4_1d_c;
    if (flags & HAS_SSE2) vp9_idct4_1d = vp9_idct4_1d_sse2;
}
#endif
#endif

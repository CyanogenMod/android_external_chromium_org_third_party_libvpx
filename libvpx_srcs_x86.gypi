# This file is generated. Do not edit.
# Copyright (c) 2012 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

{
  'sources': [
    'source/libvpx/third_party/x86inc/x86inc.asm',
    'source/libvpx/vp8/common/alloccommon.c',
    'source/libvpx/vp8/common/alloccommon.h',
    'source/libvpx/vp8/common/blockd.c',
    'source/libvpx/vp8/common/blockd.h',
    'source/libvpx/vp8/common/coefupdateprobs.h',
    'source/libvpx/vp8/common/common.h',
    'source/libvpx/vp8/common/debugmodes.c',
    'source/libvpx/vp8/common/default_coef_probs.h',
    'source/libvpx/vp8/common/dequantize.c',
    'source/libvpx/vp8/common/entropy.c',
    'source/libvpx/vp8/common/entropy.h',
    'source/libvpx/vp8/common/entropymode.c',
    'source/libvpx/vp8/common/entropymode.h',
    'source/libvpx/vp8/common/entropymv.c',
    'source/libvpx/vp8/common/entropymv.h',
    'source/libvpx/vp8/common/extend.c',
    'source/libvpx/vp8/common/extend.h',
    'source/libvpx/vp8/common/filter.c',
    'source/libvpx/vp8/common/filter.h',
    'source/libvpx/vp8/common/findnearmv.c',
    'source/libvpx/vp8/common/findnearmv.h',
    'source/libvpx/vp8/common/generic/systemdependent.c',
    'source/libvpx/vp8/common/header.h',
    'source/libvpx/vp8/common/idct_blk.c',
    'source/libvpx/vp8/common/idctllm.c',
    'source/libvpx/vp8/common/invtrans.h',
    'source/libvpx/vp8/common/loopfilter.c',
    'source/libvpx/vp8/common/loopfilter_filters.c',
    'source/libvpx/vp8/common/loopfilter.h',
    'source/libvpx/vp8/common/mbpitch.c',
    'source/libvpx/vp8/common/mfqe.c',
    'source/libvpx/vp8/common/modecont.c',
    'source/libvpx/vp8/common/modecont.h',
    'source/libvpx/vp8/common/mv.h',
    'source/libvpx/vp8/common/onyxc_int.h',
    'source/libvpx/vp8/common/onyxd.h',
    'source/libvpx/vp8/common/onyx.h',
    'source/libvpx/vp8/common/postproc.c',
    'source/libvpx/vp8/common/postproc.h',
    'source/libvpx/vp8/common/ppflags.h',
    'source/libvpx/vp8/common/pragmas.h',
    'source/libvpx/vp8/common/quant_common.c',
    'source/libvpx/vp8/common/quant_common.h',
    'source/libvpx/vp8/common/reconinter.c',
    'source/libvpx/vp8/common/reconinter.h',
    'source/libvpx/vp8/common/reconintra4x4.c',
    'source/libvpx/vp8/common/reconintra4x4.h',
    'source/libvpx/vp8/common/reconintra.c',
    'source/libvpx/vp8/common/rtcd.c',
    'source/libvpx/vp8/common/sad_c.c',
    'source/libvpx/vp8/common/setupintrarecon.c',
    'source/libvpx/vp8/common/setupintrarecon.h',
    'source/libvpx/vp8/common/swapyv12buffer.c',
    'source/libvpx/vp8/common/swapyv12buffer.h',
    'source/libvpx/vp8/common/systemdependent.h',
    'source/libvpx/vp8/common/threading.h',
    'source/libvpx/vp8/common/treecoder.c',
    'source/libvpx/vp8/common/treecoder.h',
    'source/libvpx/vp8/common/variance_c.c',
    'source/libvpx/vp8/common/variance.h',
    'source/libvpx/vp8/common/vp8_entropymodedata.h',
    'source/libvpx/vp8/common/x86/dequantize_mmx.asm',
    'source/libvpx/vp8/common/x86/filter_x86.c',
    'source/libvpx/vp8/common/x86/filter_x86.h',
    'source/libvpx/vp8/common/x86/idct_blk_mmx.c',
    'source/libvpx/vp8/common/x86/idct_blk_sse2.c',
    'source/libvpx/vp8/common/x86/idctllm_mmx.asm',
    'source/libvpx/vp8/common/x86/idctllm_sse2.asm',
    'source/libvpx/vp8/common/x86/iwalsh_mmx.asm',
    'source/libvpx/vp8/common/x86/iwalsh_sse2.asm',
    'source/libvpx/vp8/common/x86/loopfilter_mmx.asm',
    'source/libvpx/vp8/common/x86/loopfilter_sse2.asm',
    'source/libvpx/vp8/common/x86/loopfilter_x86.c',
    'source/libvpx/vp8/common/x86/mfqe_sse2.asm',
    'source/libvpx/vp8/common/x86/postproc_mmx.asm',
    'source/libvpx/vp8/common/x86/postproc_sse2.asm',
    'source/libvpx/vp8/common/x86/postproc_x86.c',
    'source/libvpx/vp8/common/x86/recon_mmx.asm',
    'source/libvpx/vp8/common/x86/recon_sse2.asm',
    'source/libvpx/vp8/common/x86/recon_wrapper_sse2.c',
    'source/libvpx/vp8/common/x86/sad_mmx.asm',
    'source/libvpx/vp8/common/x86/sad_sse2.asm',
    'source/libvpx/vp8/common/x86/sad_sse3.asm',
    'source/libvpx/vp8/common/x86/sad_sse4.asm',
    'source/libvpx/vp8/common/x86/sad_ssse3.asm',
    'source/libvpx/vp8/common/x86/subpixel_mmx.asm',
    'source/libvpx/vp8/common/x86/subpixel_sse2.asm',
    'source/libvpx/vp8/common/x86/subpixel_ssse3.asm',
    'source/libvpx/vp8/common/x86/variance_impl_mmx.asm',
    'source/libvpx/vp8/common/x86/variance_impl_sse2.asm',
    'source/libvpx/vp8/common/x86/variance_impl_ssse3.asm',
    'source/libvpx/vp8/common/x86/variance_mmx.c',
    'source/libvpx/vp8/common/x86/variance_sse2.c',
    'source/libvpx/vp8/common/x86/variance_ssse3.c',
    'source/libvpx/vp8/common/x86/vp8_asm_stubs.c',
    'source/libvpx/vp8/decoder/dboolhuff.c',
    'source/libvpx/vp8/decoder/dboolhuff.h',
    'source/libvpx/vp8/decoder/decodemv.c',
    'source/libvpx/vp8/decoder/decodemv.h',
    'source/libvpx/vp8/decoder/decoderthreading.h',
    'source/libvpx/vp8/decoder/decodframe.c',
    'source/libvpx/vp8/decoder/detokenize.c',
    'source/libvpx/vp8/decoder/detokenize.h',
    'source/libvpx/vp8/decoder/onyxd_if.c',
    'source/libvpx/vp8/decoder/onyxd_int.h',
    'source/libvpx/vp8/decoder/threading.c',
    'source/libvpx/vp8/decoder/treereader.h',
    'source/libvpx/vp8/encoder/bitstream.c',
    'source/libvpx/vp8/encoder/bitstream.h',
    'source/libvpx/vp8/encoder/block.h',
    'source/libvpx/vp8/encoder/boolhuff.c',
    'source/libvpx/vp8/encoder/boolhuff.h',
    'source/libvpx/vp8/encoder/dct.c',
    'source/libvpx/vp8/encoder/dct_value_cost.h',
    'source/libvpx/vp8/encoder/dct_value_tokens.h',
    'source/libvpx/vp8/encoder/defaultcoefcounts.h',
    'source/libvpx/vp8/encoder/denoising.c',
    'source/libvpx/vp8/encoder/denoising.h',
    'source/libvpx/vp8/encoder/encodeframe.c',
    'source/libvpx/vp8/encoder/encodeframe.h',
    'source/libvpx/vp8/encoder/encodeintra.c',
    'source/libvpx/vp8/encoder/encodeintra.h',
    'source/libvpx/vp8/encoder/encodemb.c',
    'source/libvpx/vp8/encoder/encodemb.h',
    'source/libvpx/vp8/encoder/encodemv.c',
    'source/libvpx/vp8/encoder/encodemv.h',
    'source/libvpx/vp8/encoder/ethreading.c',
    'source/libvpx/vp8/encoder/firstpass.h',
    'source/libvpx/vp8/encoder/lookahead.c',
    'source/libvpx/vp8/encoder/lookahead.h',
    'source/libvpx/vp8/encoder/mcomp.c',
    'source/libvpx/vp8/encoder/mcomp.h',
    'source/libvpx/vp8/encoder/modecosts.c',
    'source/libvpx/vp8/encoder/modecosts.h',
    'source/libvpx/vp8/encoder/mr_dissim.c',
    'source/libvpx/vp8/encoder/mr_dissim.h',
    'source/libvpx/vp8/encoder/onyx_if.c',
    'source/libvpx/vp8/encoder/onyx_int.h',
    'source/libvpx/vp8/encoder/pickinter.c',
    'source/libvpx/vp8/encoder/pickinter.h',
    'source/libvpx/vp8/encoder/picklpf.c',
    'source/libvpx/vp8/encoder/psnr.c',
    'source/libvpx/vp8/encoder/psnr.h',
    'source/libvpx/vp8/encoder/quantize.c',
    'source/libvpx/vp8/encoder/quantize.h',
    'source/libvpx/vp8/encoder/ratectrl.c',
    'source/libvpx/vp8/encoder/ratectrl.h',
    'source/libvpx/vp8/encoder/rdopt.c',
    'source/libvpx/vp8/encoder/rdopt.h',
    'source/libvpx/vp8/encoder/segmentation.c',
    'source/libvpx/vp8/encoder/segmentation.h',
    'source/libvpx/vp8/encoder/tokenize.c',
    'source/libvpx/vp8/encoder/tokenize.h',
    'source/libvpx/vp8/encoder/treewriter.c',
    'source/libvpx/vp8/encoder/treewriter.h',
    'source/libvpx/vp8/encoder/x86/dct_mmx.asm',
    'source/libvpx/vp8/encoder/x86/dct_sse2.asm',
    'source/libvpx/vp8/encoder/x86/encodeopt.asm',
    'source/libvpx/vp8/encoder/x86/fwalsh_sse2.asm',
    'source/libvpx/vp8/encoder/x86/quantize_mmx.asm',
    'source/libvpx/vp8/encoder/x86/quantize_sse2.asm',
    'source/libvpx/vp8/encoder/x86/quantize_sse4.asm',
    'source/libvpx/vp8/encoder/x86/quantize_ssse3.asm',
    'source/libvpx/vp8/encoder/x86/subtract_mmx.asm',
    'source/libvpx/vp8/encoder/x86/subtract_sse2.asm',
    'source/libvpx/vp8/encoder/x86/vp8_enc_stubs_mmx.c',
    'source/libvpx/vp8/encoder/x86/vp8_enc_stubs_sse2.c',
    'source/libvpx/vp8/vp8_cx_iface.c',
    'source/libvpx/vp8/vp8_dx_iface.c',
    'source/libvpx/vp9/common/generic/vp9_systemdependent.c',
    'source/libvpx/vp9/common/vp9_alloccommon.c',
    'source/libvpx/vp9/common/vp9_alloccommon.h',
    'source/libvpx/vp9/common/vp9_blockd.c',
    'source/libvpx/vp9/common/vp9_blockd.h',
    'source/libvpx/vp9/common/vp9_coefupdateprobs.h',
    'source/libvpx/vp9/common/vp9_common.h',
    'source/libvpx/vp9/common/vp9_common_types.h',
    'source/libvpx/vp9/common/vp9_debugmodes.c',
    'source/libvpx/vp9/common/vp9_entropy.c',
    'source/libvpx/vp9/common/vp9_entropy.h',
    'source/libvpx/vp9/common/vp9_entropymode.c',
    'source/libvpx/vp9/common/vp9_entropymode.h',
    'source/libvpx/vp9/common/vp9_entropymv.c',
    'source/libvpx/vp9/common/vp9_entropymv.h',
    'source/libvpx/vp9/common/vp9_extend.c',
    'source/libvpx/vp9/common/vp9_extend.h',
    'source/libvpx/vp9/common/vp9_filter.c',
    'source/libvpx/vp9/common/vp9_filter.h',
    'source/libvpx/vp9/common/vp9_findnearmv.c',
    'source/libvpx/vp9/common/vp9_findnearmv.h',
    'source/libvpx/vp9/common/vp9_header.h',
    'source/libvpx/vp9/common/vp9_idctllm.c',
    'source/libvpx/vp9/common/vp9_invtrans.c',
    'source/libvpx/vp9/common/vp9_invtrans.h',
    'source/libvpx/vp9/common/vp9_loopfilter.c',
    'source/libvpx/vp9/common/vp9_loopfilter_filters.c',
    'source/libvpx/vp9/common/vp9_loopfilter.h',
    'source/libvpx/vp9/common/vp9_mbpitch.c',
    'source/libvpx/vp9/common/vp9_modecont.c',
    'source/libvpx/vp9/common/vp9_modecontext.c',
    'source/libvpx/vp9/common/vp9_modecont.h',
    'source/libvpx/vp9/common/vp9_mv.h',
    'source/libvpx/vp9/common/vp9_mvref_common.c',
    'source/libvpx/vp9/common/vp9_mvref_common.h',
    'source/libvpx/vp9/common/vp9_onyxc_int.h',
    'source/libvpx/vp9/common/vp9_onyxd.h',
    'source/libvpx/vp9/common/vp9_onyx.h',
    'source/libvpx/vp9/common/vp9_postproc.c',
    'source/libvpx/vp9/common/vp9_postproc.h',
    'source/libvpx/vp9/common/vp9_ppflags.h',
    'source/libvpx/vp9/common/vp9_pragmas.h',
    'source/libvpx/vp9/common/vp9_pred_common.c',
    'source/libvpx/vp9/common/vp9_pred_common.h',
    'source/libvpx/vp9/common/vp9_quant_common.c',
    'source/libvpx/vp9/common/vp9_quant_common.h',
    'source/libvpx/vp9/common/vp9_recon.c',
    'source/libvpx/vp9/common/vp9_reconinter.c',
    'source/libvpx/vp9/common/vp9_reconinter.h',
    'source/libvpx/vp9/common/vp9_reconintra4x4.c',
    'source/libvpx/vp9/common/vp9_reconintra4x4.h',
    'source/libvpx/vp9/common/vp9_reconintra.c',
    'source/libvpx/vp9/common/vp9_reconintra.h',
    'source/libvpx/vp9/common/vp9_rtcd.c',
    'source/libvpx/vp9/common/vp9_sadmxn.h',
    'source/libvpx/vp9/common/vp9_seg_common.c',
    'source/libvpx/vp9/common/vp9_seg_common.h',
    'source/libvpx/vp9/common/vp9_setupintrarecon.c',
    'source/libvpx/vp9/common/vp9_setupintrarecon.h',
    'source/libvpx/vp9/common/vp9_subpelvar.h',
    'source/libvpx/vp9/common/vp9_subpixel.h',
    'source/libvpx/vp9/common/vp9_swapyv12buffer.c',
    'source/libvpx/vp9/common/vp9_swapyv12buffer.h',
    'source/libvpx/vp9/common/vp9_systemdependent.h',
    'source/libvpx/vp9/common/vp9_treecoder.c',
    'source/libvpx/vp9/common/vp9_treecoder.h',
    'source/libvpx/vp9/common/vp9_type_aliases.h',
    'source/libvpx/vp9/common/x86/vp9_asm_stubs.c',
    'source/libvpx/vp9/common/x86/vp9_idctllm_mmx.asm',
    'source/libvpx/vp9/common/x86/vp9_idctllm_sse2.asm',
    'source/libvpx/vp9/common/x86/vp9_idct_x86.h',
    'source/libvpx/vp9/common/x86/vp9_iwalsh_mmx.asm',
    'source/libvpx/vp9/common/x86/vp9_iwalsh_sse2.asm',
    'source/libvpx/vp9/common/x86/vp9_loopfilter_mmx.asm',
    'source/libvpx/vp9/common/x86/vp9_loopfilter_sse2.asm',
    'source/libvpx/vp9/common/x86/vp9_loopfilter_x86.h',
    'source/libvpx/vp9/common/x86/vp9_postproc_mmx.asm',
    'source/libvpx/vp9/common/x86/vp9_postproc_sse2.asm',
    'source/libvpx/vp9/common/x86/vp9_postproc_x86.h',
    'source/libvpx/vp9/common/x86/vp9_recon_mmx.asm',
    'source/libvpx/vp9/common/x86/vp9_recon_sse2.asm',
    'source/libvpx/vp9/common/x86/vp9_recon_wrapper_sse2.c',
    'source/libvpx/vp9/common/x86/vp9_subpixel_8t_ssse3.asm',
    'source/libvpx/vp9/common/x86/vp9_subpixel_mmx.asm',
    'source/libvpx/vp9/common/x86/vp9_subpixel_sse2.asm',
    'source/libvpx/vp9/common/x86/vp9_subpixel_ssse3.asm',
    'source/libvpx/vp9/common/x86/vp9_subpixel_x86.h',
    'source/libvpx/vp9/decoder/vp9_dboolhuff.c',
    'source/libvpx/vp9/decoder/vp9_dboolhuff.h',
    'source/libvpx/vp9/decoder/vp9_decodemv.c',
    'source/libvpx/vp9/decoder/vp9_decodemv.h',
    'source/libvpx/vp9/decoder/vp9_decodframe.c',
    'source/libvpx/vp9/decoder/vp9_dequantize.c',
    'source/libvpx/vp9/decoder/vp9_dequantize.h',
    'source/libvpx/vp9/decoder/vp9_detokenize.c',
    'source/libvpx/vp9/decoder/vp9_detokenize.h',
    'source/libvpx/vp9/decoder/vp9_idct_blk.c',
    'source/libvpx/vp9/decoder/vp9_onyxd_if.c',
    'source/libvpx/vp9/decoder/vp9_onyxd_int.h',
    'source/libvpx/vp9/decoder/vp9_treereader.h',
    'source/libvpx/vp9/decoder/x86/vp9_dequantize_mmx.asm',
    'source/libvpx/vp9/decoder/x86/vp9_idct_blk_mmx.c',
    'source/libvpx/vp9/decoder/x86/vp9_idct_blk_sse2.c',
    'source/libvpx/vp9/decoder/x86/vp9_x86_dsystemdependent.c',
    'source/libvpx/vp9/vp9_dx_iface.c',
    'source/libvpx/vpx/internal/vpx_codec_internal.h',
    'source/libvpx/vpx_mem/include/vpx_mem_intrnl.h',
    'source/libvpx/vpx_mem/vpx_mem.c',
    'source/libvpx/vpx_mem/vpx_mem.h',
    'source/libvpx/vpx_ports/asm_offsets.h',
    'source/libvpx/vpx_ports/emms.asm',
    'source/libvpx/vpx_ports/mem.h',
    'source/libvpx/vpx_ports/vpx_timer.h',
    'source/libvpx/vpx_ports/x86_abi_support.asm',
    'source/libvpx/vpx_ports/x86_cpuid.c',
    'source/libvpx/vpx_ports/x86.h',
    'source/libvpx/vpx_scale/generic/gen_scalers.c',
    'source/libvpx/vpx_scale/generic/vpxscale.c',
    'source/libvpx/vpx_scale/generic/yv12config.c',
    'source/libvpx/vpx_scale/generic/yv12extend.c',
    'source/libvpx/vpx_scale/vpxscale.h',
    'source/libvpx/vpx_scale/vpx_scale_rtcd.c',
    'source/libvpx/vpx_scale/yv12config.h',
    'source/libvpx/vpx/src/vpx_codec.c',
    'source/libvpx/vpx/src/vpx_decoder.c',
    'source/libvpx/vpx/src/vpx_encoder.c',
    'source/libvpx/vpx/src/vpx_image.c',
    'source/libvpx/vpx/vp8cx.h',
    'source/libvpx/vpx/vp8dx.h',
    'source/libvpx/vpx/vp8.h',
    'source/libvpx/vpx/vpx_codec.h',
    'source/libvpx/vpx/vpx_codec_impl_bottom.h',
    'source/libvpx/vpx/vpx_codec_impl_top.h',
    'source/libvpx/vpx/vpx_decoder.h',
    'source/libvpx/vpx/vpx_encoder.h',
    'source/libvpx/vpx/vpx_image.h',
    'source/libvpx/vpx/vpx_integer.h',
  ],
}

#define $sn_xtka 13
#define $sn_ord_l 14
#define $sn_e2c_l 14
#define $sn_rms_l 15
#define $sn_rmh_l 15
#define $sn_rim_l 15
#define $sn_prs_l 16
#define $sn_rol_l 16
#define $sn_xtkb 37
#define $sn_ord_r 38
#define $sn_e2c_r 38
#define $sn_rms_r 39
#define $sn_rmh_r 39
#define $sn_rim_r 39
#define $sn_prs_r 40
#define $sn_rol_r 40

<group>
 key=$sn_ord_l
#include "snares/sn10_jungle_stx_snare_off_ord_l.sfz"
<group>
 key=$sn_ord_r
#include "snares/sn10_jungle_stx_snare_off_ord_r.sfz"
<group>
 key=$sn_prs_l
#include "snares/sn10_jungle_stx_snare_off_prs_l.sfz"
<group>
 key=$sn_prs_r
#include "snares/sn10_jungle_stx_snare_off_prs_r.sfz"
<group>
 key=$sn_rim_l
 locc$MOD=127 hicc$MOD=127
#include "snares/sn10_jungle_stx_snare_off_rim.sfz"
<group>
 key=$sn_rim_r
 locc$MOD=127 hicc$MOD=127
#include "snares/sn10_jungle_stx_snare_off_rim.sfz"
<group>
 key=$sn_rmh_l
 locc$MOD=086 hicc$MOD=126
#include "snares/sn10_jungle_stx_snare_off_rmh_l.sfz"
<group>
 key=$sn_rmh_r
 locc$MOD=086 hicc$MOD=126
#include "snares/sn10_jungle_stx_snare_off_rmh_r.sfz"
<group>
 key=$sn_rms_l
 locc$MOD=000 hicc$MOD=085
#include "snares/sn10_jungle_stx_snare_off_rms_l.sfz"
<group>
 key=$sn_rms_r
 locc$MOD=000 hicc$MOD=085
#include "snares/sn10_jungle_stx_snare_off_rms_r.sfz"
<group>
 key=$sn_xtka
#include "snares/sn10_jungle_stx_snare_off_xtk.sfz"
<group>
 key=$sn_xtkb
#include "snares/sn10_jungle_stx_snare_off_xtk.sfz"

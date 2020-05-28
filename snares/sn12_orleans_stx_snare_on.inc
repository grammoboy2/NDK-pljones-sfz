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
#include "snares/sn12_orleans_stx_snare_on_ord_l.sfz"
<group>
 key=$sn_ord_r
#include "snares/sn12_orleans_stx_snare_on_ord_r.sfz"
<group>
 key=$sn_prs_l
 locc$MOD=000 hicc$MOD=085
#include "snares/sn12_orleans_stx_snare_on_prs_l.sfz"
<group>
 key=$sn_prs_r
 locc$MOD=000 hicc$MOD=085
#include "snares/sn12_orleans_stx_snare_on_prs_r.sfz"
<group>
 key=$sn_rmh_l
 locc$MOD=086 hicc$MOD=127
#include "snares/sn12_orleans_stx_snare_on_rmh_l.sfz"
<group>
 key=$sn_rmh_r
 locc$MOD=086 hicc$MOD=127
#include "snares/sn12_orleans_stx_snare_on_rmh_r.sfz"
<group>
 key=$sn_rms_l
 locc$MOD=000 hicc$MOD=085
#include "snares/sn12_orleans_stx_snare_on_rms_l.sfz"
<group>
 key=$sn_rms_r
 locc$MOD=000 hicc$MOD=085
#include "snares/sn12_orleans_stx_snare_on_rms_r.sfz"
<group>
 key=$sn_rol_l
 group=400$sn_rol_l000 off_by=100000000
 locc$MOD=086 hicc$MOD=127
#include "snares/sn12_orleans_stx_snare_on_rol.sfz"
<group>
 key=$sn_rol_r
 group=400$sn_rol_r000 off_by=100000000
 locc$MOD=086 hicc$MOD=127
#include "snares/sn12_orleans_stx_snare_on_rol.sfz"
<group>
 key=$sn_xtka
#include "snares/sn12_orleans_stx_snare_on_xtk.sfz"
<group>
 key=$sn_xtkb
#include "snares/sn12_orleans_stx_snare_on_xtk.sfz"

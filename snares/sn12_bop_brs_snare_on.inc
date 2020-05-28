#define $sn_sws 13
#define $sn_opn_l 14
#define $sn_rms_l 15
#define $sn_cls_l 16
#define $sn_swc 17
#define $sn_swl 37
#define $sn_opn_r 38
#define $sn_rms_r 39
#define $sn_cls_r 40
#define $sn_swu 41

<group> sample=*silence
 group=301000000
<region> lokey=013 hikey=034

<group>
 key=$sn_cls_l
#include "snares/sn12_bop_brs_snare_on_cls_l.sfz"
<group>
 key=$sn_cls_l
 trigger=release
#include "snares/sn12_bop_brs_snare_on_clsrls_l.sfz"
<group>
 key=$sn_cls_r
 trigger=release
#include "snares/sn12_bop_brs_snare_on_clsrls_r.sfz"
<group>
 key=$sn_cls_r
#include "snares/sn12_bop_brs_snare_on_cls_r.sfz"
<group>
 key=$sn_opn_l
#include "snares/sn12_bop_brs_snare_on_opn_l.sfz"
<group>
 key=$sn_opn_r
#include "snares/sn12_bop_brs_snare_on_opn_r.sfz"
<group>
 key=$sn_rms_l
#include "snares/sn12_bop_brs_snare_on_rms_l.sfz"
<group>
 key=$sn_rms_r
#include "snares/sn12_bop_brs_snare_on_rms_r.sfz"
<group>
 key=$sn_swc
 group=401$sn_swc000 off_by=301000000
 loop_mode=loop_sustain
#include "snares/sn12_bop_brs_snare_on_swc.sfz"
<group>
 key=$sn_swl
 group=302$sn_swl000
#include "snares/sn12_bop_brs_snare_on_swlrpt.sfz"
<group>
 key=$sn_swl
 group=402$sn_swl000 off_by=302swl000
 trigger=release ampeg_release=0
 volume=-15
#include "snares/sn12_bop_brs_snare_on_swl.sfz"
<group>
 key=$sn_sws
 group=302$sn_sws000
#include "snares/sn12_bop_brs_snare_on_swsrpt.sfz"
<group>
 key=$sn_sws
 group=402$sn_sws000 off_by=302sws000
 trigger=release ampeg_release=0
 volume=-15
#include "snares/sn12_bop_brs_snare_on_sws.sfz"
<group>
 key=$sn_swu
#include "snares/sn12_bop_brs_snare_on_swu.sfz"

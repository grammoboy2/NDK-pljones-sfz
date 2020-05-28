#define $pn_cowbell_ord 56
#define $pn_cowbell_top 32

<group>
 key=$pn_cowbell_ord
 locc$MOD=086 hicc$MOD=127
#include "percussion/cowbell_pn8_stx_muted_ord.sfz"
<group>
 key=$pn_cowbell_top
 locc$MOD=086 hicc$MOD=127
#include "percussion/cowbell_pn8_stx_muted_top.sfz"
<group>
 key=$pn_cowbell_ord
 locc$MOD=000 hicc$MOD=085
#include "percussion/cowbell_pn8_stx_open_ord.sfz"
<group>
 key=$pn_cowbell_top
 locc$MOD=000 hicc$MOD=085
#include "percussion/cowbell_pn8_stx_open_top.sfz"

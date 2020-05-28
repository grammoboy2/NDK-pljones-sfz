//Steal cy_splash_8_top and cy_splash_12_top keys as not used for hnd
#define $pn_tamborine_hit 30
#define $pn_tamborine_jng 031

// Fix up for normalised samples
<curve> curve_index=99 v1=0.03125 v127=1

<group> amplitude=4.42 amp_veltrack=0 amplitude_oncc131=100 amplitude_curvecc131=99
 key=$pn_tamborine_hit
 locc$MOD=000 hicc$MOD=085
#include "percussion/tambourine_pn9_hnd_hit.sfz"
<group> amplitude=4.42 amp_veltrack=0 amplitude_oncc131=100 amplitude_curvecc131=99
 key=$pn_tamborine_hit
 locc$MOD=086 hicc$MOD=127
#include "percussion/tambourine_pn9_hnd_thm.sfz"
<group> amplitude=4.42 amp_veltrack=0 amplitude_oncc131=100 amplitude_curvecc131=99
 key=$pn_tamborine_jng
 locc$MOD=000 hicc$MOD=045
#include "percussion/tambourine_pn9_hnd_jng_l.sfz"
<group> amplitude=4.42 amp_veltrack=0 amplitude_oncc131=100 amplitude_curvecc131=99
 key=$pn_tamborine_jng
 locc$MOD=046 hicc$MOD=085
#include "percussion/tambourine_pn9_hnd_jng_r.sfz"
<group> amplitude=4.42 amp_veltrack=0 amplitude_oncc131=100 amplitude_curvecc131=99
 key=$pn_tamborine_jng
 group=800$pn_tamborine_jng000 off_by=100000000
 locc$MOD=086 hicc$MOD=127
#include "percussion/tambourine_pn9_hnd_rol.sfz"

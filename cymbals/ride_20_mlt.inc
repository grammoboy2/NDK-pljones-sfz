<group>
 key=$cy_ride_20_ord
 group=500$cy_ride_20_ord000
 locc$MOD=127 hicc$MOD=127
#include "cymbals/ride_cy20_mlt_grb.sfz"
<group>
 key=$cy_ride_20_ord
 group=600$cy_ride_20_ord000 off_by=500$cy_ride_20_ord000
 locc$MOD=000 hicc$MOD=126
#include "cymbals/ride_cy20_mlt_ord.sfz"
<group>
 key=$cy_ride_20_top
 group=600$cy_ride_20_ord000 off_by=500$cy_ride_20_ord000
 locc$MOD=000 hicc$MOD=045
#include "cymbals/ride_cy20_mlt_ord.sfz"
<group>
 key=$cy_ride_20_top
 locc$MOD=046 hicc$MOD=127
 group=601$cy_ride_20_ord000 off_by=100000000
#include "cymbals/ride_cy20_mlt_rol.sfz"

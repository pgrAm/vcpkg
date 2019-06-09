diff --git a/src/pffft.c b/src/pffft.c
index 0686bef..e4cb094 100644
--- a/src/pffft.c
+++ b/src/pffft.c
@@ -157,7 +157,7 @@ typedef __m128 v4sf;
 /*
   ARM NEON support macros
 */
-#elif !defined(PFFFT_SIMD_DISABLE) && defined(__arm__)
+#elif !defined(PFFFT_SIMD_DISABLE) && (defined(__arm__) || defined(_M_ARM))
 #  include <arm_neon.h>
 typedef float32x4_t v4sf;
 #  define SIMD_SZ 4

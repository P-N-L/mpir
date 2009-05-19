/* Generated by tuneup.c, 2009-04-10, gcc 4.2 */

#define MUL_KARATSUBA_THRESHOLD          22
#define MUL_TOOM3_THRESHOLD              61
#define MUL_TOOM4_THRESHOLD             978
#define MUL_TOOM7_THRESHOLD             978

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          26
#define SQR_TOOM3_THRESHOLD              85
#define SQR_TOOM4_THRESHOLD             180
#define SQR_TOOM7_THRESHOLD             194

#define MULLOW_BASECASE_THRESHOLD         0  /* always */
#define MULLOW_DC_THRESHOLD              44
#define MULLOW_MUL_N_THRESHOLD          372

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 76
#define POWM_THRESHOLD                   87

#define GCD_ACCEL_THRESHOLD              24
#define GCDEXT_THRESHOLD                151
#define JACOBI_BASE_METHOD                1

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               0
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */

#define GET_STR_DC_THRESHOLD             10
#define GET_STR_PRECOMPUTE_THRESHOLD     11
#define SET_STR_THRESHOLD              7764

#define MUL_FFT_TABLE  { 464, 1056, 2624, 3840, 11264, 28672, 81920, 327680, 1310720, 5242880, 0 }
#define MUL_FFT_MODF_THRESHOLD          480
#define MUL_FFT_THRESHOLD              7680

#define SQR_FFT_TABLE  { 560, 1184, 2368, 3840, 11264, 28672, 81920, 327680, 1310720, 5242880, 0 }
#define SQR_FFT_MODF_THRESHOLD          520
#define SQR_FFT_THRESHOLD              3456

/* Tuneup completed successfully, took 646 seconds */

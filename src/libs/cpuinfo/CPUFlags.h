/* Symbolic constants for feature flags in CPUID standard feature flags */

#define CPUID_STD_FPU			0x00000001
#define CPUID_STD_VME			0x00000002
#define CPUID_STD_DE			0x00000004
#define CPUID_STD_PSE			0x00000008
#define CPUID_STD_TSC			0x00000010
#define CPUID_STD_MSR			0x00000020
#define CPUID_STD_PAE			0x00000040
#define CPUID_STD_MCE			0x00000080
#define CPUID_STD_CX8			0x00000100
#define CPUID_STD_APIC			0x00000200
#define CPUID_STD_SEP			0x00000800
#define CPUID_STD_MTRR			0x00001000
#define CPUID_STD_PGE			0x00002000
#define CPUID_STD_MCA			0x00004000
#define CPUID_STD_CMOV			0x00008000
#define CPUID_STD_PAT			0x00010000
#define CPUID_STD_PSE36			0x00020000
#define CPUID_STD_PSN			0x00040000
#define CPUID_STD_CLFLSH		0x00080000
#define CPUID_STD_DS			0x00200000
#define CPUID_STD_ACPI			0x00400000
#define CPUID_STD_MMX			0x00800000
#define CPUID_STD_FXSR			0x01000000
#define CPUID_STD_SSE			0x02000000
#define CPUID_STD_SSE2			0x04000000
#define CPUID_STD_SS			0x08000000
#define CPUID_STD_HTT			0x10000000
#define CPUID_STD_TM			0x20000000
#define CPUID_STD_PBE			0x80000000

/* Symbolic constants for feature flags in CPUID extended feature flags */

#define CPUID_EXT_AMD_3DNOW		0x80000000
#define CPUID_EXT_AMD_3DNOWEXT	0x40000000
#define CPUID_EXT_AMD_MMXEXT	0x00400000
#define CPUID_EXT_SSE3			0x00000001
#define CPUID_EXT_SSSE3			0x00000200
#define CPUID_EXT_SSE4_1		0x00080000
#define CPUID_EXT_SSE4_2		0x00100000
#define CPUID_EXT_EM64T			0x20000000
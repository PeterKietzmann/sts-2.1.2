
#if defined(__cplusplus)
extern "C" {
#endif

#ifndef _CONFIG_H_
#define	_CONFIG_H_

#include <stdint.h>

//#define	WINDOWS32
//#define	PROTOTYPES
//#define	LITTLE_ENDIAN
//#define	LOWHI

/*
 * AUTO DEFINES (DON'T TOUCH!)
 */

#ifndef	CSTRTD
typedef char *CSTRTD;
#endif
#ifndef	BSTRTD
typedef unsigned char *BSTRTD;
#endif

#ifndef	BYTE
typedef uint8_t BYTE;
#endif
#ifndef	UINT
typedef uint32_t UINT;
#endif
#ifndef	USHORT
typedef uint16_t USHORT;
#endif
#ifndef	ULONG
typedef uint32_t ULONG;
#endif
#ifndef	DIGIT
typedef USHORT DIGIT;	/* 16-bit word */
#endif
#ifndef	DBLWORD
typedef ULONG DBLWORD;  /* 32-bit word */
#endif

#ifndef	WORD64
typedef ULONG WORD64[2];  /* 64-bit word */
#endif

#endif /* _CONFIG_H_ */

#if defined(__cplusplus)
}
#endif
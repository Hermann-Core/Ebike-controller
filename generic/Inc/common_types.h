/************************************************************************************* 
 * @file 	   common-types.h
 * @date       03, March 2023
 * @author     AWATSA HERMANN
 * @brief	   common C/C++ types redefinition
 * 
 *             Redefinition of the common C/C++ types
 * ***********************************************************************************
 * @attention
 * 
 #   DATE       |  Version  | revision   |
 -----------------------------------------
 # 2023.03.03   |    1      |  0         |

*************************************************************************************/

/* Prevent recursive inclusion */
#ifndef _COMMON_TYPES_
#define _COMMON_TYPES_

/************************************************************************************#
|                                      INCLUDES                                      |
#************************************************************************************/
#include <stdint.h>
#include <stddef.h>



/************************************************************************************#
|                                TYPES DEFINITIONS                                   |
#************************************************************************************/
#define _vol        volatile
#define null        0

typedef int8_t     i8;
typedef uint8_t    u8;
typedef int16_t    i16;
typedef uint16_t   u16;
typedef int32_t    i32;
typedef uint32_t   u32;
typedef int64_t    i64;
typedef uint64_t   u64;


#endif      /* _COMMON_TYPES_ */

/************************************************************************************#
|                                    END OF FILE                                     |
#************************************************************************************/

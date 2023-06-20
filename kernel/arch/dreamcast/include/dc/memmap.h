/* KallistiOS ##version##

   kernel/arch/dreamcast/include/dc/memmap.h
   Copyright (C) 2023 Donald Haase

*/

/** \file   dc/memmap.h
    \brief  Constants for areas of the system memory map.

    Various addresses and masks are not tied to any single subsystem, but 
    instead are generalized to the whole system.

    \author Donald Haase
*/

#ifndef __DC_MEMMAP_H
#define __DC_MEMMAP_H

#include <sys/cdefs.h>
__BEGIN_DECLS

/** \brief Memory region size. */
#define MEM_AREA_SIZE       0x1fffffff

/** \brief Cachable P1 memory region. */
#define MEM_AREA_P1_MASK    0x80000000

/** \brief Non-cacheable memory region offset.

    This is mainly useful for DMA-related purposes.
*/
#define MEM_AREA_P2_MASK    0xa0000000

/** \brief Non-cacheable SH-internal memory region offset. For SQ. */
#define MEM_AREA_P4_MASK    0xe0000000

__END_DECLS

#endif /* __DC_MEMMAP_H */

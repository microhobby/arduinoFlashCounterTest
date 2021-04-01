
#ifndef __BOOTLOADER_HEADER__
#define __BOOTLOADER_HEADER__

int (*flashCounter)(void) = (int(*)()) 0x3d64;

#endif /* __BOOTLOADER_HEADER */

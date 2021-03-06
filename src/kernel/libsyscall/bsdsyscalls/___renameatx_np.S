#define __SYSCALL_32BIT_ARG_BYTES 20
#include "SYS.h"

#ifndef SYS_renameatx_np
#error "SYS_renameatx_np not defined. The header files libsyscall is building against do not match syscalls.master."
#endif

#if defined(__i386__) || defined(__x86_64__)
__SYSCALL2(___renameatx_np, renameatx_np, 5, cerror_nocancel)
#endif


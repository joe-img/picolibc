/**
 *  THIS SOFTWARE IS NOT COPYRIGHTED
 *
 *  This source code is offered for use in the public domain. You may
 *  use, modify or distribute it freely.
 *
 *  This code is distributed in the hope that it will be useful but
 *  WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 *  DISCLAIMED. This includes but is not limited to warranties of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */
void __mingworg_MemoryBarrier(void);
void __mingworg_MemoryBarrier(void)
{
    long Barrier = 0;
    __asm__ __volatile__("xchgl %%eax,%0 "
      :"=r" (Barrier));
}


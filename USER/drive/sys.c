#include "sys.h"

void WFI_SET(void)
{
	__ASM volatile("wfi");		  
}
//�ر������ж�
void INTX_DISABLE(void)
{		  
	__ASM volatile("cpsid i");
}
//���������ж�
void INTX_ENABLE(void)
{
	__ASM volatile("cpsie i");		  
}

void MSR_MSP(uint32 addr)
{
        __ASM volatile("MSR MSP, r0");
        __ASM volatile("BX r14");
}

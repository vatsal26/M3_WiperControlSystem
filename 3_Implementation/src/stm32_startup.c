#include <stdint.h>

#define SRAM_START  0x20000000U
#define SRAM_SIZE   (128U * 1024U) // 128KB
#define SRAM_END    ((SRAM_START) + (SRAM_SIZE))

#define STACK_START   SRAM_END

extern uint32_t _etext;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _la_data;

extern uint32_t _sbss;
extern uint32_t _ebss;

// Prototype of main

int main(void);

void __libc_init_array(void);

/* Function prototypes of STM32F407x system exception and IRQ handlers */

void reset_handler(void);

void nmi_handler 			(void) __attribute__ ((weak, alias("default_handler")));
void hardfault_handler 			(void) __attribute__ ((weak, alias("default_handler")));
void memmanage_handler 			(void) __attribute__ ((weak, alias("default_handler")));
void busfault_handler 			(void) __attribute__ ((weak, alias("default_handler")));
void usagefault_handler 		(void) __attribute__ ((weak, alias("default_handler")));
void svc_handler 			(void) __attribute__ ((weak, alias("default_handler")));
void debugmon_handler 			(void) __attribute__ ((weak, alias("default_handler")));
void pendsv_handler   			(void) __attribute__ ((weak, alias("default_handler")));
void systick_handler  			(void) __attribute__ ((weak, alias("default_handler")));
void wwdg_irqhandler 			(void) __attribute__ ((weak, alias("default_handler")));
void pvd_irqhandler 			(void) __attribute__ ((weak, alias("default_handler")));
void tamp_stamp_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void rtc_wkup_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void rcc_irqhandler 			(void) __attribute__ ((weak, alias("default_handler")));
void exti0_irqhandler 			(void) __attribute__ ((weak, alias("default_handler")));
void exti1_irqhandler 			(void) __attribute__ ((weak, alias("default_handler")));
void exti2_irqhandler 			(void) __attribute__ ((weak, alias("default_handler")));
void exti3_irqhandler 			(void) __attribute__ ((weak, alias("default_handler")));
void exti4_irqhandler 			(void) __attribute__ ((weak, alias("default_handler")));
void dma1_stream0_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void dma1_stream1_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void dma1_stream2_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void dma1_stream3_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void dma1_stream4_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void dma1_stream5_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void dma1_stream6_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void adc_irqhandler 			(void) __attribute__ ((weak, alias("default_handler")));
void can1_tx_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void can1_rx0_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void can1_rx1_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void can1_sce_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void exti9_5_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void tim1_brk_tim9_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void tim1_up_tim10_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void tim1_trg_com_tim11_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));
void tim1_cc_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void tim2_irqhandler 			(void) __attribute__ ((weak, alias("default_handler")));
void tim3_irqhandler 			(void) __attribute__ ((weak, alias("default_handler")));
void tim4_irqhandler 			(void) __attribute__ ((weak, alias("default_handler")));
void i2c1_ev_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void i2c1_er_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void i2c2_ev_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void i2c2_er_irqhandler 		(void) __attribute__ ((weak, alias("default_handler")));
void spi1_irqhandler  			(void) __attribute__ ((weak, alias("default_handler")));
void spi2_irqhandler 			(void) __attribute__ ((weak, alias("default_handler")));
void usart1_irqhandler  		(void) __attribute__ ((weak, alias("default_handler")));
void usart2_irqhandler  		(void) __attribute__ ((weak, alias("default_handler")));
void usart3_irqhandler   		(void) __attribute__ ((weak, alias("default_handler")));
void exti15_10_irqhandler   		(void) __attribute__ ((weak, alias("default_handler")));
void rtc_alarm_irqhandler    		(void) __attribute__ ((weak, alias("default_handler")));
void otg_fs_wkup_irqhandler     	(void) __attribute__ ((weak, alias("default_handler")));
void tim8_brk_tim12_irqhandler   	(void) __attribute__ ((weak, alias("default_handler")));
void tim8_up_tim13_irqhandler    	(void) __attribute__ ((weak, alias("default_handler")));
void tim8_trg_com_tim14_irqhandler 	(void) __attribute__ ((weak, alias("default_handler")));
void tim8_cc_irqhandler          	(void) __attribute__ ((weak, alias("default_handler")));
void dma1_stream7_irqhandler     	(void) __attribute__ ((weak, alias("default_handler")));
void fsmc_irqhandler             	(void) __attribute__ ((weak, alias("default_handler")));
void sdio_irqhandler             	(void) __attribute__ ((weak, alias("default_handler")));
void tim5_irqhandler             	(void) __attribute__ ((weak, alias("default_handler")));
void spi3_irqhandler             	(void) __attribute__ ((weak, alias("default_handler")));
void uart4_irqhandler            	(void) __attribute__ ((weak, alias("default_handler")));
void uart5_irqhandler            	(void) __attribute__ ((weak, alias("default_handler")));
void tim6_dac_irqhandler         	(void) __attribute__ ((weak, alias("default_handler")));
void tim7_irqhandler             	(void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream0_irqhandler     	(void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream1_irqhandler     	(void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream2_irqhandler     	(void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream3_irqhandler     	(void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream4_irqhandler     	(void) __attribute__ ((weak, alias("default_handler")));
void eth_irqhandler              	(void) __attribute__ ((weak, alias("default_handler")));
void eth_wkup_irqhandler         	(void) __attribute__ ((weak, alias("default_handler")));
void can2_tx_irqhandler          	(void) __attribute__ ((weak, alias("default_handler")));
void can2_rx0_irqhandler         	(void) __attribute__ ((weak, alias("default_handler")));
void can2_rx1_irqhandler         	(void) __attribute__ ((weak, alias("default_handler")));
void can2_sce_irqhandler         	(void) __attribute__ ((weak, alias("default_handler")));
void otg_fs_irqhandler           	(void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream5_irqhandler     	(void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream6_irqhandler     	(void) __attribute__ ((weak, alias("default_handler")));
void dma2_stream7_irqhandler     	(void) __attribute__ ((weak, alias("default_handler")));
void usart6_irqhandler           	(void) __attribute__ ((weak, alias("default_handler")));
void i2c3_ev_irqhandler          	(void) __attribute__ ((weak, alias("default_handler")));
void i2c3_er_irqhandler          	(void) __attribute__ ((weak, alias("default_handler")));
void otg_hs_ep1_out_irqhandler   	(void) __attribute__ ((weak, alias("default_handler")));
void otg_hs_ep1_in_irqhandler    	(void) __attribute__ ((weak, alias("default_handler")));
void otg_hs_wkup_irqhandler      	(void) __attribute__ ((weak, alias("default_handler")));
void otg_hs_irqhandler           	(void) __attribute__ ((weak, alias("default_handler")));
void dcmi_irqhandler             	(void) __attribute__ ((weak, alias("default_handler")));
void cryp_irqhandler             	(void) __attribute__ ((weak, alias("default_handler")));
void hash_rng_irqhandler         	(void) __attribute__ ((weak, alias("default_handler")));
void fpu_irqhandler              	(void) __attribute__ ((weak, alias("default_handler")));


uint32_t vectors[] __attribute__((section(".interrupt_vector"))) = {
	STACK_START,
	(uint32_t) reset_handler,
	(uint32_t) nmi_handler,
	(uint32_t) hardfault_handler,
	(uint32_t) memmanage_handler,
	(uint32_t) busfault_handler,
	(uint32_t) usagefault_handler,
	0,
	0,
	0,
	0,
	(uint32_t) svc_handler,
	(uint32_t) debugmon_handler,
	0,
	(uint32_t) pendsv_handler,
	(uint32_t) systick_handler,
	(uint32_t) wwdg_irqhandler,
	(uint32_t) pvd_irqhandler,
	(uint32_t) tamp_stamp_irqhandler,
	(uint32_t) rtc_wkup_irqhandler,
	0,
	(uint32_t) rcc_irqhandler,
	(uint32_t) exti0_irqhandler,
	(uint32_t) exti1_irqhandler,
	(uint32_t) exti2_irqhandler,
	(uint32_t) exti3_irqhandler,
	(uint32_t) exti4_irqhandler,
	(uint32_t) dma1_stream0_irqhandler,
	(uint32_t) dma1_stream1_irqhandler,
	(uint32_t) dma1_stream2_irqhandler,
	(uint32_t) dma1_stream3_irqhandler,
	(uint32_t) dma1_stream4_irqhandler,
	(uint32_t) dma1_stream5_irqhandler,
	(uint32_t) dma1_stream6_irqhandler,
	(uint32_t) adc_irqhandler,
	(uint32_t) can1_tx_irqhandler,
	(uint32_t) can1_rx0_irqhandler,
	(uint32_t) can1_rx1_irqhandler,
	(uint32_t) can1_sce_irqhandler,
	(uint32_t) exti9_5_irqhandler,
	(uint32_t) tim1_brk_tim9_irqhandler,
	(uint32_t) tim1_up_tim10_irqhandler,
	(uint32_t) tim1_trg_com_tim11_irqhandler,
	(uint32_t) tim1_cc_irqhandler,
	(uint32_t) tim2_irqhandler,
	(uint32_t) tim3_irqhandler,
	(uint32_t) tim4_irqhandler,
	(uint32_t) i2c1_ev_irqhandler,
	(uint32_t) i2c1_er_irqhandler,
	(uint32_t) i2c2_ev_irqhandler,
	(uint32_t) i2c2_er_irqhandler,
	(uint32_t) spi1_irqhandler,
	(uint32_t) spi2_irqhandler,
	(uint32_t) usart1_irqhandler,
	(uint32_t) usart2_irqhandler,
	(uint32_t) usart3_irqhandler,
	(uint32_t) exti15_10_irqhandler,
	(uint32_t) rtc_alarm_irqhandler,
	(uint32_t) otg_fs_wkup_irqhandler,
	(uint32_t) tim8_brk_tim12_irqhandler,
	(uint32_t) tim8_up_tim13_irqhandler,
	(uint32_t) tim8_trg_com_tim14_irqhandler,
	(uint32_t) tim8_cc_irqhandler,
	(uint32_t) dma1_stream7_irqhandler,
	(uint32_t) fsmc_irqhandler,
	(uint32_t) sdio_irqhandler,
	(uint32_t) tim5_irqhandler,
	(uint32_t) spi3_irqhandler,
	(uint32_t) uart4_irqhandler,
	(uint32_t) uart5_irqhandler,
	(uint32_t) tim6_dac_irqhandler,
	(uint32_t) tim7_irqhandler,
	(uint32_t) dma2_stream0_irqhandler,
	(uint32_t) dma2_stream1_irqhandler,
	(uint32_t) dma2_stream2_irqhandler,
	(uint32_t) dma2_stream3_irqhandler,
	(uint32_t) dma2_stream4_irqhandler,
	(uint32_t) eth_irqhandler,
	(uint32_t) eth_wkup_irqhandler,
	(uint32_t) can2_tx_irqhandler,
	(uint32_t) can2_rx0_irqhandler,
	(uint32_t) can2_rx1_irqhandler,
	(uint32_t) can2_sce_irqhandler,
	(uint32_t) otg_fs_irqhandler,
	(uint32_t) dma2_stream5_irqhandler,
	(uint32_t) dma2_stream6_irqhandler,
	(uint32_t) dma2_stream7_irqhandler,
	(uint32_t) usart6_irqhandler,
	(uint32_t) i2c3_ev_irqhandler,
	(uint32_t) i2c3_er_irqhandler,
	(uint32_t) otg_hs_ep1_out_irqhandler,
	(uint32_t) otg_hs_ep1_in_irqhandler,
	(uint32_t) otg_hs_wkup_irqhandler,
	(uint32_t) otg_hs_irqhandler,
	(uint32_t) dcmi_irqhandler,
	(uint32_t) cryp_irqhandler,
	(uint32_t) hash_rng_irqhandler,
	(uint32_t) fpu_irqhandler,
};

void default_handler(void)
{
	while(1);
}

void reset_handler(void)
{
	// Copy .data section to SRAM
	uint32_t size = (uint32_t) &_edata - (uint32_t) &_sdata;

	uint8_t *dest = (uint8_t *) &_sdata; // SRAM
	uint8_t *src = (uint8_t *) &_la_data; // Flash

	for(uint32_t i =0 ; i < size ; i++)
	{
		*dest++ = *src++;
	}

	// Init. the .bss section to zero in SRAM
	size = (uint32_t) &_ebss - (uint32_t) &_sbss;
	dest = (uint8_t *) &_sbss;
	for(uint32_t i = 0 ; i < size ; i++)
	{
		*dest++ = 0;
	}

	__libc_init_array();

	main();
}

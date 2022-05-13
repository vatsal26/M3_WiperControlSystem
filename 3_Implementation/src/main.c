
/**
 * @brief Main file of the project
 * 
 */
#define GPIOD_BASE_ADDR 0x40020C00
#define GPIOD_ODR_OFFSET 0x14
#define GPIOD_ODR *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_ODR_OFFSET)



#define RCC_BASE_ADDR 0x40023800
#define RCC_AHB1ENR_OFFSET 0x30
#define RCC_AHB1ENR *(volatile long *)(RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)



#define GPIOA_BASE_ADDR 0x40020000
#define GPIOA_IDR_OFFSET 0x10
#define GPIOA_IDR *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_IDR_OFFSET)



#define GPIOD_MODE_OFFSET 0x00
#define GPIOD_MODE *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_MODE_OFFSET)



#define GPIOA_MODE_OFFSET 0x00
#define GPIOA_MODE *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_MODE_OFFSET)


int main()
{
	int p,u=0,l=0;  //Variable iniatilize
	RCC_AHB1ENR |= (1<<3)|(1<<0); //led enable and switch
	GPIOD_MODE = 0; 
	GPIOA_MODE = 0; 
	GPIOA_IDR |= 1<<3;
	GPIOD_MODE |= (0<<25)|(1<<24);  //output = led12
	GPIOD_MODE |= (0<<27)|(1<<26);  //output = led13
	GPIOD_MODE |= (0<<29)|(1<<28);  //output = led14
	GPIOD_MODE |= (0<<31)|(1<<30);  //output = led14
	GPIOA_MODE |= (0<<1)|(0<<0);    //input = switch
	GPIOD_ODR = 0X00;
	while(1)
	{
					while((GPIOA_IDR & 0x01) == 1) //Status On
					{
						u++; //Switch Increment
					}
					if(u>30000)
				    {
					u=0;//Led red on
					GPIOD_ODR |= 1<<14;
					for(p=0;p<100000;p++);
					}
					else if(u>0 && u<30000)
					{
					l=1;
                    }
					else
					{

					}
						if(l==1)
						{

					    //delays

				        for(l=0;l<5;l++) //green led
						{
						GPIOD_ODR |= 1<<12;
						for(p=0;p<10000;p++);
						GPIOD_ODR &= ~(1<<12);
						for(p=0;p>=10000;p++);
						}
						for(l=0;l<5;l++)  //orange led
						{
						GPIOD_ODR |= 1<<13;
						for(p=0;p<10000;p++);
						GPIOD_ODR &= ~(1<<13);
					    for(p=0;p>=10000;p++);
						}
						for(l=0;l<5;l++)   //blue led
						{
						GPIOD_ODR |= 1<<15;
						for(p=0;p<10000;p++);
						GPIOD_ODR &= ~(1<<15);
						for(p=0;p>=10000;p++);
						}

						//speed increment

						for(l=0;l<5;l++)  //green led
						{
						GPIOD_ODR |= 1<<12;
						for(p=0;p<50000;p++);
						GPIOD_ODR &= ~(1<<12);
						for(p=0;p>=50000;p++);
						}
						for(l=0;l<5;l++)  //orange led
						{
						GPIOD_ODR |= 1<<13;
						for(p=0;p<50000;p++);
						GPIOD_ODR &= ~(1<<13);
						for(p=0;p>=50000;p++);
						}
						for(l=0;l<5;l++)  //blue led
						{
						GPIOD_ODR |= 1<<15;
						for(p=0;p<50000;p++);
					    GPIOD_ODR &= ~(1<<15);
						for(p=0;p>=50000;p++);
						}
						//speed increase

						for(l=0;l<5;l++)  //green led
					    {
						GPIOD_ODR |= 1<<12;
						for(p=0;p<90000;p++);
						GPIOD_ODR &= ~(1<<12);
						for(p=0;p>=90000;p++);
						}
						for(l=0;l<5;l++)  //orance led
						{
						GPIOD_ODR |= 1<<13;
						for(p=0;p<90000;p++);
						GPIOD_ODR &= ~(1<<13);
						for(p=0;p>=90000;p++);
						}
						for(l=0;l<5;l++)  //blue led
						{
						GPIOD_ODR |= 1<<15;
						for(p=0;p<90000;p++);
						GPIOD_ODR &= ~(1<<15);
						for(p=0;p>=90000;p++);
						}

						}


	}
	return 0;
}

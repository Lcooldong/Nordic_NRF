#include "RTOS.h"
#include "BSP.h"
#include "Button.h"


#define BUTTON1               (0u)
#define BUTTON2               (1u)
#define BUTTON3               (2u)
#define BUTTON4               (3u)

#define MAX_BUTTONS           (4u)

#define BUTTON1_PIN           (11u)  // LED1 P0.11
#define BUTTON2_PIN           (12u)  // LED1 P0.12
#define BUTTON3_PIN           (24u)  // LED1 P0.24
#define BUTTON4_PIN           (25u)  // LED1 P0.25

#define GPIO0_BASE_ADDR    (0x50000000u)
#define GPIO0_PIN_CNF(x)   (*((volatile unsigned int*)(GPIO0_BASE_ADDR + 0x700u) + (x)))


static OS_STACKPTR int StackBTN[128];  // Task stacks
static OS_TASK         TCBTN;    

void BUTTON_Init(void)
{
  GPIO0_PIN_CNF(BUTTON1_PIN) = 0
                          | (0x0u << 0u) // Input 0u
                          | (0x1u << 1u) // input buffer : Disconnect 1u
                          | (0x2u << 2u) // PULL_UP 2u
                          | (0x0u << 8u) // standard '0'
                          | (0x1u << 16u) // Input Voltage Level
                          ;
}

static void BTN1_Task(void)
{
  while(1)
  {
    if(0 = )
    {
      BSP_SetLED(3);
      OS_TASK_Delay(100);
    }
    else
    {
      BSP_ClrLED(3);
      OS_TASK_Delay(200);
    }
  }
}


#ifdef __cplusplus
extern "C" {     // Make sure we have C-declarations in C++ programs
#endif
void ButtonTask(void);
#ifdef __cplusplus
}
#endif

void ButtonTask(void)
{
  OS_TASK_EnterRegion();
  OS_TASK_CREATE(&TCBTN, "BUTTON", 20, BTN1_Task, StackBTN);
  OS_TASK_Terminate(NULL);
}
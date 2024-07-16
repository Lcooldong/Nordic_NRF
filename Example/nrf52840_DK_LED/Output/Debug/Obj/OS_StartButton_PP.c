#define ARM_MATH_CM4 1
#define BSP_H 
#define BSP_USE_PARA(para) (void) (para)
#define BUTTON1 (0u)
#define BUTTON1_PIN (11u)
#define BUTTON2 (1u)
#define BUTTON2_PIN (12u)
#define BUTTON3 (2u)
#define BUTTON3_PIN (24u)
#define BUTTON4 (3u)
#define BUTTON4_PIN (25u)
#define BUTTON_H 
#define DEBUG 1
#define FLASH_PLACEMENT 1
#define FS_MMC_SUPPORT_UHS 1
#define FS_NOR_SUPPORT_CRC 1
#define FS_OS_LOCKING 1
#define FS_SUPPORT_SECTOR_BUFFER_CACHE 1
#define GPIO0_BASE_ADDR (0x50000000u)
#define GPIO0_PIN_CNF(x) (*((volatile unsigned int*)(GPIO0_BASE_ADDR + 0x700u) + (x)))
#define GUI_SUPPORT_SPY 1
#define GUI_USE_ARGB 1
#define INCLUDE_PRESENTATION_SAMPLE 1
#define INCLUDE_SHARE_SAMPLE 1
#define INTERWORK 
#define IOT_OS_DO_NOT_INLINE_CALLS 1
#define IP_OS_DO_NOT_INLINE_CALLS 1
#define IP_SUPPORT_IPV6 1
#define IP_SUPPORT_PACKET_TIMESTAMP 1
#define MAX_BUTTONS (4u)
#define MB_OS_DO_NOT_INLINE_CALLS 1
#define NRF52840_XXAA 1
#define NULL 0
#define OS_ALIGN_INT (1)
#define OS_ALIGN_PTR (1)
#define OS_ASSERT(Exp,ErrCode) { if (!(Exp)) { OS_Error(ErrCode); } }
#define OS_ASSERT_CPU_IN_ISR_MODE() OS_AssertCPUInISRMode()
#define OS_ASSERT_DICNT() OS_ASSERT((OS_Global.Counters.Cnt.DI < 16u), OS_ERR_DICNT_OVERFLOW)
#define OS_ASSERT_INIT_CALLED() OS_ASSERT((OS_Global.InitCalled != 0u), OS_ERR_INIT_NOT_CALLED)
#define OS_AddExtendTaskContext OS_TASK_AddContextExtension
#define OS_AddLoadMeasurement OS_STAT_AddLoadMeasurement
#define OS_AddOnTerminateHook OS_TASK_AddTerminateHook
#define OS_AddTerminateHook OS_TASK_AddTerminateHook
#define OS_AddTickHook OS_TICK_AddHook
#define OS_AdjustTime OS_TICKLESS_AdjustTime
#define OS_BOOL OS_U8
#define OS_BSS_SECTION_ATTRIBUTE(name) 
#define OS_CHECKSTACK OS_SUPPORT_STACKCHECK
#define OS_CONST_PTR const
#define OS_COPYSTRING OS_MEMCPY
#define OS_CPU_HAS_VFP (1)
#define OS_CREATECSEMA OS_SEMAPHORE_CREATE
#define OS_CREATEMB OS_MAILBOX_Create
#define OS_CREATERSEMA OS_MUTEX_Create
#define OS_CREATETASK(a,b,c,d,e) OS_TASK_CREATE(a,b,d,c,e)
#define OS_CREATETASK_EX(a,b,c,d,e,f) OS_TASK_CREATEEX(a,b,d,c,e,f)
#define OS_CREATETIMER OS_TIMER_CREATE
#define OS_CREATETIMER_EX OS_TIMER_CREATEEX
#define OS_CSEMA OS_SEMAPHORE
#define OS_CSemaRequest OS_SEMAPHORE_Take
#define OS_CallISR OS_INT_Call
#define OS_CallNestableISR OS_INT_CallNestable
#define OS_ChangeTask OS_ChangeTask_VFP
#define OS_ClearEvents OS_TASKEVENT_Clear
#define OS_ClearEventsEx OS_TASKEVENT_ClearEx
#define OS_ClearMB OS_MAILBOX_Clear
#define OS_ClearTxActive OS_COM_ClearTxActive
#define OS_Config_Stop OS_ConfigStop
#define OS_Config_SysTimer OS_TIME_ConfigSysTimer
#define OS_Counters OS_Global.Counters
#define OS_CreateCSema OS_SEMAPHORE_Create
#define OS_CreateMB OS_MAILBOX_Create
#define OS_CreateRSema OS_MUTEX_Create
#define OS_CreateTask OS_TASK_Create
#define OS_CreateTaskEx OS_TASK_CreateEx
#define OS_CreateTimer OS_TIMER_Create
#define OS_CreateTimerEx OS_TIMER_CreateEx
#define OS_DATA_SECTION_ATTRIBUTE(name) 
#define OS_DEBUG OS_DEBUG_DEFAULT
#define OS_DEBUG_DEFAULT (1)
#define OS_DI OS_INT_Disable
#define OS_DICnt OS_Global.Counters.Cnt.DI
#define OS_DISALLOW_EI_IN_CHANGETASK (0)
#define OS_DI_ON_ENTRY() OS_INT_Disable()
#define OS_DI_ON_LEAVE_NESTABLE() OS_INT_Disable()
#define OS_DecRI OS_INT_DecRI
#define OS_Delay OS_TASK_Delay
#define OS_DelayUntil OS_TASK_DelayUntil
#define OS_Delayus OS_TASK_Delay_us
#define OS_DeleteCSema OS_SEMAPHORE_Delete
#define OS_DeleteMB OS_MAILBOX_Delete
#define OS_DeleteRSema OS_MUTEX_Delete
#define OS_DeleteTimer OS_TIMER_Delete
#define OS_DeleteTimerEx OS_TIMER_DeleteEx
#define OS_EI OS_INT_Enable
#define OS_EI_HP_ON_ENTRY() 
#define OS_EI_ON_LEAVE() OS_INT_Enable()
#define OS_EI_ON_LEAVE_NESTABLE() OS_EI_ON_LEAVE()
#define OS_ENABLE_INTS_SAVE_IPL() 
#define OS_ERR_CPU_STATE_ISR_ILLEGAL OS_ERR_ISR_PRIORITY_INVALID
#define OS_EVENT_Wait OS_EVENT_GetBlocked
#define OS_EVENT_WaitMask OS_EVENT_GetMaskBlocked
#define OS_EVENT_WaitMaskTimed OS_EVENT_GetMaskTimed
#define OS_EVENT_WaitTimed OS_EVENT_GetTimed
#define OS_EXTERN extern
#define OS_EnterIntStack OS_INT_EnterIntStack
#define OS_EnterInterrupt OS_INT_Enter
#define OS_EnterNestableInterrupt OS_INT_EnterNestable
#define OS_EnterRegion OS_TASK_EnterRegion
#define OS_ExtendTaskContext OS_TASK_SetContextExtension
#define OS_ExtendTaskContext_TLS OS_TLS_SetTaskContextExtension
#define OS_ExtendTaskContext_VFP() 
#define OS_GetCPU OS_INFO_GetCPU
#define OS_GetCSemaValue OS_SEMAPHORE_GetValue
#define OS_GetEventsOccured OS_TASKEVENT_Get
#define OS_GetEventsOccurred OS_TASKEVENT_Get
#define OS_GetIntStackBase OS_STACK_GetIntStackBase
#define OS_GetIntStackSize OS_STACK_GetIntStackSize
#define OS_GetIntStackSpace OS_STACK_GetIntStackSpace
#define OS_GetIntStackUsed OS_STACK_GetIntStackUsed
#define OS_GetLibMode OS_INFO_GetLibMode
#define OS_GetLibName OS_INFO_GetLibName
#define OS_GetLoadMeasurement OS_STAT_GetLoadMeasurement
#define OS_GetMail OS_MAILBOX_GetBlocked
#define OS_GetMail1 OS_MAILBOX_GetBlocked1
#define OS_GetMailCond OS_MAILBOX_Get
#define OS_GetMailCond1 OS_MAILBOX_Get1
#define OS_GetMailTimed OS_MAILBOX_GetTimed
#define OS_GetMailTimed1 OS_MAILBOX_GetTimed1
#define OS_GetMessageCnt OS_MAILBOX_GetMessageCnt
#define OS_GetModel OS_INFO_GetModel
#define OS_GetNextChar OS_COM_GetNextChar
#define OS_GetNumIdleTicks OS_TICKLESS_GetNumIdleTicks
#define OS_GetNumTasks OS_TASK_GetNumTasks
#define OS_GetObjName OS_DEBUG_GetObjName
#define OS_GetPriority OS_TASK_GetPriority
#define OS_GetResourceOwner OS_MUTEX_GetOwner
#define OS_GetSemaValue OS_MUTEX_GetValue
#define OS_GetStackBase OS_STACK_GetTaskStackBase
#define OS_GetStackCheckLimit OS_STACK_GetCheckLimit
#define OS_GetStackSize OS_STACK_GetTaskStackSize
#define OS_GetStackSpace OS_STACK_GetTaskStackSpace
#define OS_GetStackUsed OS_STACK_GetTaskStackUsed
#define OS_GetSuspendCnt OS_TASK_GetSuspendCnt
#define OS_GetSysStackBase OS_STACK_GetSysStackBase
#define OS_GetSysStackSize OS_STACK_GetSysStackSize
#define OS_GetSysStackSpace OS_STACK_GetSysStackSpace
#define OS_GetSysStackUsed OS_STACK_GetSysStackUsed
#define OS_GetTaskID OS_TASK_GetID
#define OS_GetTaskName OS_TASK_GetName
#define OS_GetTime OS_TIME_GetTicks
#define OS_GetTime32 OS_TIME_GetTicks32
#define OS_GetTimeSliceRem OS_TASK_GetTimeSliceRem
#define OS_GetTime_us OS_TIME_Get_us
#define OS_GetTime_us64 OS_TIME_Get_us64
#define OS_GetTimerPeriod OS_TIMER_GetPeriod
#define OS_GetTimerPeriodEx OS_TIMER_GetPeriodEx
#define OS_GetTimerStatus OS_TIMER_GetStatus
#define OS_GetTimerStatusEx OS_TIMER_GetStatusEx
#define OS_GetTimerValue OS_TIMER_GetRemainingPeriod
#define OS_GetTimerValueEx OS_TIMER_GetRemainingPeriodEx
#define OS_GetType() OS_GetLibMode()
#define OS_GetUseCnt OS_MUTEX_GetValue
#define OS_GetVersion OS_INFO_GetVersion
#define OS_GetpCurrentTask() OS_Global.pCurrentTask
#define OS_GetpCurrentTimer OS_TIMER_GetCurrent
#define OS_GetpCurrentTimerEx OS_TIMER_GetCurrentEx
#define OS_HANDLE_REGION_CNT_ON_LI() } OS_Global.Counters.Cnt.Region = (OS_U8)(OS_Global.Counters.Cnt.Region - 1u);
#define OS_HandleTick OS_TICK_Handle
#define OS_HandleTickEx OS_TICK_HandleEx
#define OS_I16 signed short
#define OS_I32 long
#define OS_I64 long long
#define OS_I8 signed char
#define OS_IDLE() 
#define OS_INC_IDLE_CNT() (OS_IdleCnt++)
#define OS_INIT_EXPLICITLY OS_INIT_EXPLICITLY_DEFAULT
#define OS_INIT_EXPLICITLY_DEFAULT (0)
#define OS_INT int
#define OS_INTERRUPTS_ARE_NESTABLE_ON_ENTRY (1)
#define OS_INTERRUPT_MaskGlobal OS_INT_DisableAll
#define OS_INTERRUPT_PreserveAndMaskGlobal OS_INT_PreserveAndDisableAll
#define OS_INTERRUPT_PreserveGlobal OS_INT_PreserveAll
#define OS_INTERRUPT_RestoreGlobal OS_INT_RestoreAll
#define OS_INTERRUPT_UnmaskGlobal OS_INT_EnableAll
#define OS_INTERWORK 
#define OS_INT_DecRI() { OS_ASSERT_DICNT(); OS_Global.Counters.Cnt.DI = (OS_U8)(OS_Global.Counters.Cnt.DI - 1u); if (OS_Global.Counters.Cnt.DI == 0u) { OS_INT_Enable(); } }
#define OS_INT_Disable() { __asm volatile ("msr  basepri, %[IPL] \n\t" : : [IPL] "r" (OS_IPL_THRESHOLD) : "memory" ); }
#define OS_INT_DisableAll() { __asm volatile ("cpsid i" : : : "memory"); }
#define OS_INT_Enable() { __asm volatile ("msr  basepri, %[IPL] \n\t" : : [IPL] "r" (0) : "memory" ); }
#define OS_INT_EnableAll() { __asm volatile ("cpsie i" : : : "memory"); }
#define OS_INT_EnableConditional() { OS_ASSERT_DICNT(); if (OS_Global.Counters.Cnt.DI == 0u) { OS_INT_Enable(); } }
#define OS_INT_Enter() { OS_ASSERT_INIT_CALLED(); OS_MARK_IN_ISR(); OS_ASSERT_CPU_IN_ISR_MODE(); OS_DI_ON_ENTRY(); OS_EI_HP_ON_ENTRY(); OS_Global.Counters.Cnt.Region = (OS_U8)(OS_Global.Counters.Cnt.Region + 1u); OS_Global.Counters.Cnt.DI = (OS_U8)(OS_Global.Counters.Cnt.DI + 1u); TRACE_ON_ISR_ENTER(); }
#define OS_INT_EnterIntStack() 
#define OS_INT_EnterNestable() { OS_ASSERT_INIT_CALLED(); OS_MARK_IN_ISR(); OS_IntEnterRegion(); OS_ENABLE_INTS_SAVE_IPL(); OS_ASSERT_CPU_IN_ISR_MODE(); TRACE_ON_ISR_ENTER(); }
#define OS_INT_IncDI() { OS_ASSERT_DICNT(); OS_INT_Disable(); OS_Global.Counters.Cnt.DI = (OS_U8)(OS_Global.Counters.Cnt.DI + 1u); }
#define OS_INT_Leave() { OS_TRACE_ISR_EXIT(); OS_Global.Counters.Cnt.DI = (OS_U8)(OS_Global.Counters.Cnt.DI - 1u); OS_SWITCH_FROM_INT_IF_REQUIRED() OS_HANDLE_REGION_CNT_ON_LI(); OS_EI_ON_LEAVE(); }
#define OS_INT_LeaveIntStack() 
#define OS_INT_LeaveNestable() { OS_TRACE_ISR_EXIT(); OS_DI_ON_LEAVE_NESTABLE(); OS_SWITCH_FROM_INT_IF_REQUIRED() OS_HANDLE_REGION_CNT_ON_LI(); OS_RESTORE_IPL(); OS_EI_ON_LEAVE_NESTABLE(); }
#define OS_INT_OP_IS_ATOMIC (1)
#define OS_INT_PRIO_PRESERVE OS_INT_Preserve
#define OS_INT_PRIO_RESTORE OS_INT_Restore
#define OS_INT_Preserve(p) { __asm volatile ("mrs  %[Para], basepri \n\t" : [Para] "=r" (*(p)) : : "memory" ); }
#define OS_INT_PreserveAll(p) { __asm volatile ("mrs  %[Para], primask \n\t" : [Para] "=r" (*(p)) : : "memory" ); }
#define OS_INT_PreserveAndDisable(p) { OS_INT_Preserve(p); OS_INT_Disable(); }
#define OS_INT_PreserveAndDisableAll(p) { OS_INT_PreserveAll(p); OS_INT_DisableAll(); }
#define OS_INT_Restore(p) { __asm volatile ("msr  basepri, %[Para]  \n\t" : : [Para] "r" (*(p)) : "memory" ); }
#define OS_INT_RestoreAll(p) { __asm volatile ("msr  primask, %[Para] \n\t" : : [Para] "r" (*(p)) : "memory" ); }
#define OS_IPL_DI_TYPE unsigned int
#define OS_IPL_EI_TYPE unsigned int
#define OS_IPL_THRESHOLD 128
#define OS_InInterrupt OS_INT_InInterrupt
#define OS_IncDI OS_INT_IncDI
#define OS_Init OS_Init_VFP
#define OS_InitCalled OS_Global.InitCalled
#define OS_InitKern OS_Init
#define OS_InitialSuspendCnt OS_Global.InitialSuspendCnt
#define OS_IntEnterRegion() { OS_ASSERT((OS_Global.Counters.Cnt.Region != 0xFFu), OS_ERR_REGIONCNT); OS_Global.Counters.Cnt.Region = (OS_U8)(OS_Global.Counters.Cnt.Region + 1u); }
#define OS_Ipl_DI OS_Global.Ipl_DI
#define OS_Ipl_EI OS_Global.Ipl_EI
#define OS_IsTask OS_TASK_IsTask
#define OS_LIBMODE "DP"
#define OS_LIBMODE_DP 1
#define OS_LeaveIntStack OS_INT_LeaveIntStack
#define OS_LeaveInterrupt OS_INT_Leave
#define OS_LeaveInterruptNoSwitch() { OS_MARK_OUTOF_ISR(); OS_Global.Counters.Cnt.DI--; OS_Global.Counters.Cnt.Region--; OS_EI_ON_LEAVE(); }
#define OS_LeaveNestableInterrupt OS_INT_LeaveNestable
#define OS_LeaveNestableInterruptNoSwitch() { OS_INT_Disable(); OS_MARK_OUTOF_ISR(); OS_Global.Counters.Cnt.Region--; OS_RESTORE_IPL(); OS_EI_ON_LEAVE_NESTABLE(); }
#define OS_LeaveRegion OS_TASK_LeaveRegion
#define OS_MARK_IN_ISR() { OS_Global.InInt++; }
#define OS_MARK_OUTOF_ISR() { if (OS_Global.InInt == 0u) {OS_Error(OS_ERR_LEAVEINT);} OS_Global.InInt--; }
#define OS_MARK_OUTOF_ISR_SWITCH() { if (OS_Global.InInt == 0u) {OS_Error(OS_ERR_LEAVEINT);} OS_Global.InInt--; }
#define OS_MEMCPY(dest,src,cnt) memcpy((dest),(src),(size_t)(cnt))
#define OS_MEMF OS_MEMPOOL
#define OS_MEMF_Alloc(a,b) OS_MEMPOOL_AllocBlocked(a)
#define OS_MEMF_AllocTimed(a,b,c) OS_MEMPOOL_AllocTimed(a,b)
#define OS_MEMF_Create OS_MEMPOOL_Create
#define OS_MEMF_Delete OS_MEMPOOL_Delete
#define OS_MEMF_FreeBlock OS_MEMPOOL_Free
#define OS_MEMF_GetBlockSize OS_MEMPOOL_GetBlockSize
#define OS_MEMF_GetMaxUsed OS_MEMPOOL_GetMaxUsed
#define OS_MEMF_GetNumBlocks OS_MEMPOOL_GetNumBlocks
#define OS_MEMF_GetNumFreeBlocks OS_MEMPOOL_GetNumFreeBlocks
#define OS_MEMF_IsInPool OS_MEMPOOL_IsInPool
#define OS_MEMF_Release OS_MEMPOOL_FreeEx
#define OS_MEMF_Request(a,b) OS_MEMPOOL_Alloc(a)
#define OS_MEMF_SIZEOF_BLOCKCONTROL (0)
#define OS_MEMPOOL_SIZEOF_BLOCKCONTROL (0)
#define OS_MEMSET(a,v,s) memset((a),((int) (v)),(size_t)(s))
#define OS_MPU_ASSERT_PRIVSTATE() 
#define OS_MPU_AddSanityCheckBuffer OS_MPU_SetSanityCheckBuffer
#define OS_MPU_Enable() OS_MPU_Init(&OS_MPU_DEFAULT_APILIST)
#define OS_MPU_EnableEx OS_MPU_Init
#define OS_MPU_PRIVSTATE_ENTER() 
#define OS_MPU_PRIVSTATE_LEAVE() 
#define OS_Mail_GetPtr OS_MAILBOX_GetPtrBlocked
#define OS_Mail_GetPtrCond OS_MAILBOX_GetPtr
#define OS_Mail_Purge OS_MAILBOX_Purge
#define OS_ON_TERMINATE_FUNC OS_ROUTINE_TASK_PTR
#define OS_OnRx OS_COM_OnRx
#define OS_OnTx OS_COM_OnTx
#define OS_PORT_REVISION (0u)
#define OS_POWER_NUM_COUNTERS (5u)
#define OS_PRIO OS_U32
#define OS_PROFILE OS_SUPPORT_PROFILE
#define OS_PTR_OP_IS_ATOMIC (1)
#define OS_PeekMail OS_MAILBOX_Peek
#define OS_Pending OS_Global.Pending
#define OS_PutMail OS_MAILBOX_PutBlocked
#define OS_PutMail1 OS_MAILBOX_PutBlocked1
#define OS_PutMailCond OS_MAILBOX_Put
#define OS_PutMailCond1 OS_MAILBOX_Put1
#define OS_PutMailFront OS_MAILBOX_PutFrontBlocked
#define OS_PutMailFront1 OS_MAILBOX_PutFrontBlocked1
#define OS_PutMailFrontCond OS_MAILBOX_PutFront
#define OS_PutMailFrontCond1 OS_MAILBOX_PutFront1
#define OS_PutMailTimed OS_MAILBOX_PutTimed
#define OS_PutMailTimed1 OS_MAILBOX_PutTimed1
#define OS_Q OS_QUEUE
#define OS_Q_Clear OS_QUEUE_Clear
#define OS_Q_Create OS_QUEUE_Create
#define OS_Q_Delete OS_QUEUE_Delete
#define OS_Q_GetMessageCnt OS_QUEUE_GetMessageCnt
#define OS_Q_GetMessageSize OS_QUEUE_GetMessageSize
#define OS_Q_GetPtr OS_QUEUE_GetPtrBlocked
#define OS_Q_GetPtrCond OS_QUEUE_GetPtr
#define OS_Q_GetPtrTimed OS_QUEUE_GetPtrTimed
#define OS_Q_IsInUse OS_QUEUE_IsInUse
#define OS_Q_PeekPtr OS_QUEUE_PeekPtr
#define OS_Q_Purge OS_QUEUE_Purge
#define OS_Q_Put OS_QUEUE_Put
#define OS_Q_PutBlocked OS_QUEUE_PutBlocked
#define OS_Q_PutBlockedEx OS_QUEUE_PutBlockedEx
#define OS_Q_PutEx OS_QUEUE_PutEx
#define OS_Q_PutTimed OS_QUEUE_PutTimed
#define OS_Q_PutTimedEx OS_QUEUE_PutTimedEx
#define OS_Q_SIZEOF_HEADER (sizeof(OS_INT))
#define OS_Q_SRCLIST OS_QUEUE_SRCLIST
#define OS_RESTORE_IPL() 
#define OS_RODATA_SECTION_ATTRIBUTE(name) 
#define OS_ROM_DATA 
#define OS_RR_SUPPORTED OS_SUPPORT_RR
#define OS_RSEMA OS_MUTEX
#define OS_RX_CALLBACK OS_ROUTINE_CHAR
#define OS_RegionCnt OS_Global.Counters.Cnt.Region
#define OS_RemoveAllTerminateHooks OS_TASK_RemoveAllTerminateHooks
#define OS_RemoveOnTerminateHooks OS_TASK_RemoveAllTerminateHooks
#define OS_RemoveTerminateHook OS_TASK_RemoveTerminateHook
#define OS_RemoveTickHook OS_TICK_RemoveHook
#define OS_Request OS_MUTEX_Lock
#define OS_RestoreI OS_INT_EnableConditional
#define OS_Resume OS_TASK_Resume
#define OS_ResumeAllSuspendedTasks OS_TASK_ResumeAll
#define OS_ResumeAllTasks OS_TASK_ResumeAll
#define OS_RetriggerTimer OS_TIMER_Restart
#define OS_RetriggerTimerEx OS_TIMER_RestartEx
#define OS_Running OS_Global.IsRunning
#define OS_SADDR 
#define OS_SCHEDULER_ACTIVATED_BY_EXCEPTION (1)
#define OS_SEMAPHORE_CREATE(ps) OS_SEMAPHORE_Create((ps), 0)
#define OS_SIZEOF_INT (4u)
#define OS_SPINLOCK volatile OS_UINT
#define OS_SPINLOCK_MAX_CORES (4u)
#define OS_STACKCHECK_LIMIT OS_STACKCHECK_LIMIT_DEFAULT
#define OS_STACKCHECK_LIMIT_DEFAULT (100u)
#define OS_STACKPTR 
#define OS_STACK_ADR OS_U32
#define OS_STACK_GROWS_TOWARD_HIGHER_ADDR (0)
#define OS_STACK_GetIntStackBase() (0)
#define OS_STACK_GetIntStackSize() (0u)
#define OS_STAT OS_U8
#define OS_STAT_GetTaskExecTime OS_STAT_GetExecTime
#define OS_STRLEN(s) strlen(s)
#define OS_SUPPORT_CALL_ISR (1)
#define OS_SUPPORT_ENTER_INTERRUPT (1)
#define OS_SUPPORT_INTSTACK_INFO (0)
#define OS_SUPPORT_INT_PRIORITY (0)
#define OS_SUPPORT_MPU (0)
#define OS_SUPPORT_OS_ALLOC (1)
#define OS_SUPPORT_PERIPHERAL_POWER_CTRL (1)
#define OS_SUPPORT_PROFILE OS_SUPPORT_PROFILE_DEFAULT
#define OS_SUPPORT_PROFILE_DEFAULT (1)
#define OS_SUPPORT_PTLS OS_SUPPORT_TLS
#define OS_SUPPORT_RR OS_SUPPORT_RR_DEFAULT
#define OS_SUPPORT_RR_DEFAULT (1)
#define OS_SUPPORT_SAVE_RESTORE_HOOK OS_SUPPORT_SAVE_RESTORE_HOOK_DEFAULT
#define OS_SUPPORT_SAVE_RESTORE_HOOK_DEFAULT (1)
#define OS_SUPPORT_STACKCHECK OS_SUPPORT_STACKCHECK_DEFAULT
#define OS_SUPPORT_STACKCHECK_DEFAULT (1)
#define OS_SUPPORT_STAT OS_SUPPORT_STAT_DEFAULT
#define OS_SUPPORT_STAT_DEFAULT (1)
#define OS_SUPPORT_SYSSTACK_INFO (1)
#define OS_SUPPORT_TICKLESS (1)
#define OS_SUPPORT_TICKSTEP OS_SUPPORT_TICKSTEP_DEFAULT
#define OS_SUPPORT_TICKSTEP_DEFAULT (0)
#define OS_SUPPORT_TIMER (1)
#define OS_SUPPORT_TLS (1)
#define OS_SUPPORT_TRACE OS_SUPPORT_TRACE_DEFAULT
#define OS_SUPPORT_TRACE_API OS_SUPPORT_TRACE_API_DEFAULT
#define OS_SUPPORT_TRACE_API_DEFAULT (1)
#define OS_SUPPORT_TRACE_API_END OS_SUPPORT_TRACE_API_DEFAULT
#define OS_SUPPORT_TRACE_DEFAULT (0)
#define OS_SUPPORT_TRACKNAME OS_SUPPORT_TRACKNAME_DEFAULT
#define OS_SUPPORT_TRACKNAME_DEFAULT (1)
#define OS_SWITCH_FROM_INT_IF_REQUIRED() if ((OS_Global.Counters.Cnt.Region == (OS_U8)1u) && (OS_Global.Pending.All != 0u)) { OS_MARK_OUTOF_ISR_SWITCH(); OS_SwitchFromInt(); } else { OS_MARK_OUTOF_ISR();
#define OS_SWITCH_FROM_INT_MODIFIES_STACK (0)
#define OS_SendString OS_COM_SendString
#define OS_SetCSemaValue OS_SEMAPHORE_SetValue
#define OS_SetDefaultTaskContextExtension OS_TASK_SetDefaultContextExtension
#define OS_SetDefaultTaskStartHook OS_TASK_SetDefaultStartHook
#define OS_SetInitialSuspendCnt OS_TASK_SetInitialSuspendCnt
#define OS_SetObjName OS_DEBUG_SetObjName
#define OS_SetPriority OS_TASK_SetPriority
#define OS_SetRxCallback OS_COM_SetRxCallback
#define OS_SetStackCheckLimit OS_STACK_SetCheckLimit
#define OS_SetTaskName OS_TASK_SetName
#define OS_SetTimeSlice OS_TASK_SetTimeSlice
#define OS_SetTimerPeriod OS_TIMER_SetPeriod
#define OS_SetTimerPeriodEx OS_TIMER_SetPeriodEx
#define OS_SetTraceAPI OS_TRACE_SetAPI
#define OS_SignalCSema OS_SEMAPHORE_Give
#define OS_SignalCSemaMax OS_SEMAPHORE_GiveMax
#define OS_SignalEvent(a,b) OS_TASKEVENT_Set(b,a)
#define OS_StackCheckLimit OS_Global.StackCheckLimit
#define OS_Start() OS_ASSERT((OS_INFO_GetVersion() == OS_VERSION), OS_ERR_VERSION_MISMATCH); OS__Start();
#define OS_StartTicklessMode OS_TICKLESS_Start
#define OS_StartTimer OS_TIMER_Start
#define OS_StartTimerEx OS_TIMER_StartEx
#define OS_Status OS_Global.Status
#define OS_StopTicklessMode OS_TICKLESS_Stop
#define OS_StopTimer OS_TIMER_Stop
#define OS_StopTimerEx OS_TIMER_StopEx
#define OS_Suspend OS_TASK_Suspend
#define OS_SuspendAllTasks OS_TASK_SuspendAll
#define OS_TASKEVENT OS_U32
#define OS_TASKID OS_TASK*
#define OS_TASK_CREATE(pTask,sName,Priority,pfRoutine,pStack) OS_TASK_Create ((pTask), (sName), (OS_PRIO)(Priority), (pfRoutine), (void OS_STACKPTR*)(pStack), sizeof(pStack), 2u )
#define OS_TASK_CREATEEX(pTask,sName,Priority,pfRoutine,pStack,pContext) OS_TASK_CreateEx ((pTask), (sName), (OS_PRIO)(Priority), (pfRoutine), (void OS_STACKPTR*)(pStack), sizeof(pStack), 2u, (pContext) )
#define OS_TASK_Create OS_TASK_Create_DP
#define OS_TASK_CreateEx OS_TASK_CreateEx_DP
#define OS_TASK_Delayus OS_TASK_Delay_us
#define OS_TASK_EVENT OS_TASKEVENT
#define OS_TASK_EnterRegion OS_EnterRegionFunc
#define OS_TASK_SetContextExtensionTLS OS_TLS_SetTaskContextExtension
#define OS_TEXT_SECTION_ATTRIBUTE(name) 
#define OS_TICK_HOOK_ROUTINE OS_ROUTINE_VOID
#define OS_TIME int
#define OS_TIMERROUTINE OS_ROUTINE_VOID
#define OS_TIMER_CREATE(pTimer,c,d) { OS_TIMER_Create((pTimer), (c), (d)); OS_TIMER_Start(pTimer); }
#define OS_TIMER_CREATEEX(pTimerEx,cb,Period,pData) { OS_TIMER_CreateEx((pTimerEx), (cb), (Period), (pData)); OS_TIMER_StartEx(pTimerEx); }
#define OS_TIMER_DOWNCOUNTING (0u)
#define OS_TIMER_DeleteEx(pTimerEx) OS_TIMER_Delete(&(pTimerEx)->Timer)
#define OS_TIMER_EX_ROUTINE OS_ROUTINE_VOID_PTR
#define OS_TIMER_GetCurrentEx() ((OS_TIMER_EX*)OS_TIMER_GetCurrent())
#define OS_TIMER_GetPeriodEx(pTimerEx) OS_TIMER_GetPeriod(&(pTimerEx)->Timer)
#define OS_TIMER_GetRemainingPeriodEx(pTimerEx) OS_TIMER_GetRemainingPeriod(&(pTimerEx)->Timer)
#define OS_TIMER_GetStatusEx(pTimerEx) OS_TIMER_GetStatus(&(pTimerEx)->Timer)
#define OS_TIMER_HANDLER OS_ROUTINE_OSGLOBAL_PTR
#define OS_TIMER_MAX_TIME (0x7FFFFF00)
#define OS_TIMER_RestartEx(pTimerEx) OS_TIMER_Restart(&(pTimerEx)->Timer)
#define OS_TIMER_SetPeriodEx(pTimerEx,Period) OS_TIMER_SetPeriod(&(pTimerEx)->Timer, (Period))
#define OS_TIMER_StartEx(pTimerEx) OS_TIMER_Start(&(pTimerEx)->Timer)
#define OS_TIMER_StopEx(pTimerEx) OS_TIMER_Stop(&(pTimerEx)->Timer)
#define OS_TIMER_TriggerEx(pTimerEx) OS_TIMER_Trigger(&(pTimerEx)->Timer)
#define OS_TIMER_UPCOUNTING (1u)
#define OS_TIME_GetCycles OS_TIME_Get_Cycles
#define OS_TIME_GetResultus OS_TIME_GetResult_us
#define OS_TIME_Getus OS_TIME_Get_us
#define OS_TIME_Getus64 OS_TIME_Get_us64
#define OS_TIMING OS_U32
#define OS_TLS_ExtendContext OS_TLS_ContextExtension;
#define OS_TLS_PTR void*
#define OS_TRACE OS_SUPPORT_TRACE
#define OS_TRACE_API_OFFSET (32u)
#define OS_TRACE_Data(id,v) 
#define OS_TRACE_DataPtr(id,v,p) 
#define OS_TRACE_Disable() 
#define OS_TRACE_DisableAll() 
#define OS_TRACE_DisableFilterId(FilterIndex,id) 
#define OS_TRACE_DisableId(id) 
#define OS_TRACE_Enable() 
#define OS_TRACE_EnableAll() 
#define OS_TRACE_EnableFilterId(FilterIndex,id) 
#define OS_TRACE_EnableId(id) 
#define OS_TRACE_ID_ACTIVATE (2u)
#define OS_TRACE_ID_CONFIGSTOP (230u)
#define OS_TRACE_ID_DEACTIVATE (1u)
#define OS_TRACE_ID_DEBUG_GETERROR (319u)
#define OS_TRACE_ID_DEBUG_GETOBJNAME (235u)
#define OS_TRACE_ID_DEBUG_REMOVEOBJNAME (238u)
#define OS_TRACE_ID_DEBUG_SETOBJNAME (234u)
#define OS_TRACE_ID_DEINIT (237u)
#define OS_TRACE_ID_EVENT_CREATE (141u)
#define OS_TRACE_ID_EVENT_CREATEEX (142u)
#define OS_TRACE_ID_EVENT_DELETE (143u)
#define OS_TRACE_ID_EVENT_GET (169u)
#define OS_TRACE_ID_EVENT_GETBLOCKED (139u)
#define OS_TRACE_ID_EVENT_GETMASK (219u)
#define OS_TRACE_ID_EVENT_GETMASKBLOCKED (221u)
#define OS_TRACE_ID_EVENT_GETMASKMODE (229u)
#define OS_TRACE_ID_EVENT_GETMASKTIMED (222u)
#define OS_TRACE_ID_EVENT_GETRESETMODE (170u)
#define OS_TRACE_ID_EVENT_GETTIMED (140u)
#define OS_TRACE_ID_EVENT_PULSE (136u)
#define OS_TRACE_ID_EVENT_RESET (137u)
#define OS_TRACE_ID_EVENT_RESETMASK (298u)
#define OS_TRACE_ID_EVENT_SET (138u)
#define OS_TRACE_ID_EVENT_SETMASK (220u)
#define OS_TRACE_ID_EVENT_SETMASKMODE (228u)
#define OS_TRACE_ID_EVENT_SETRESETMODE (171u)
#define OS_TRACE_ID_GETID (313u)
#define OS_TRACE_ID_HEAP_FREE (81u)
#define OS_TRACE_ID_HEAP_MALLOC (80u)
#define OS_TRACE_ID_HEAP_REALLOC (82u)
#define OS_TRACE_ID_INFO_GETCPU (283u)
#define OS_TRACE_ID_INFO_GETFREQ (318u)
#define OS_TRACE_ID_INFO_GETLIBMODE (284u)
#define OS_TRACE_ID_INFO_GETLIBNAME (285u)
#define OS_TRACE_ID_INFO_GETMODEL (286u)
#define OS_TRACE_ID_INFO_GETVERSION (287u)
#define OS_TRACE_ID_ISRUNNING (312u)
#define OS_TRACE_ID_MAILBOX_CLEAR (31u)
#define OS_TRACE_ID_MAILBOX_CREATE (30u)
#define OS_TRACE_ID_MAILBOX_DELETE (32u)
#define OS_TRACE_ID_MAILBOX_GET (36u)
#define OS_TRACE_ID_MAILBOX_GET1 (43u)
#define OS_TRACE_ID_MAILBOX_GETBLOCKED (34u)
#define OS_TRACE_ID_MAILBOX_GETBLOCKED1 (41u)
#define OS_TRACE_ID_MAILBOX_GETMESSAGECNT (250u)
#define OS_TRACE_ID_MAILBOX_GETPTR (203u)
#define OS_TRACE_ID_MAILBOX_GETPTRBLOCKED (176u)
#define OS_TRACE_ID_MAILBOX_GETTIMED (38u)
#define OS_TRACE_ID_MAILBOX_GETTIMED1 (45u)
#define OS_TRACE_ID_MAILBOX_ISINUSE (311u)
#define OS_TRACE_ID_MAILBOX_PEEK (144u)
#define OS_TRACE_ID_MAILBOX_PURGE (204u)
#define OS_TRACE_ID_MAILBOX_PUT (35u)
#define OS_TRACE_ID_MAILBOX_PUT1 (42u)
#define OS_TRACE_ID_MAILBOX_PUTBLOCKED (33u)
#define OS_TRACE_ID_MAILBOX_PUTBLOCKED1 (40u)
#define OS_TRACE_ID_MAILBOX_PUTFB (46u)
#define OS_TRACE_ID_MAILBOX_PUTFB1 (47u)
#define OS_TRACE_ID_MAILBOX_PUTFRONT (48u)
#define OS_TRACE_ID_MAILBOX_PUTFRONT1 (49u)
#define OS_TRACE_ID_MAILBOX_PUTTIMED (37u)
#define OS_TRACE_ID_MAILBOX_PUTTIMED1 (44u)
#define OS_TRACE_ID_MAILBOX_WAITBLOCKED (39u)
#define OS_TRACE_ID_MAILBOX_WAITTIMED (59u)
#define OS_TRACE_ID_MEMPOOL_ALLOC (159u)
#define OS_TRACE_ID_MEMPOOL_ALLOCBLOCKED (92u)
#define OS_TRACE_ID_MEMPOOL_ALLOCTIMED (156u)
#define OS_TRACE_ID_MEMPOOL_CREATE (90u)
#define OS_TRACE_ID_MEMPOOL_DELETE (91u)
#define OS_TRACE_ID_MEMPOOL_FREE (157u)
#define OS_TRACE_ID_MEMPOOL_FREEEX (158u)
#define OS_TRACE_ID_MEMPOOL_GETBLOCKSIZE (252u)
#define OS_TRACE_ID_MEMPOOL_GETMAXUSED (253u)
#define OS_TRACE_ID_MEMPOOL_GETNUMBLOCKS (254u)
#define OS_TRACE_ID_MEMPOOL_GETNUMFREEBLOCKS (255u)
#define OS_TRACE_ID_MEMPOOL_ISINPOOOL (256u)
#define OS_TRACE_ID_MPU_ADDREGION (276u)
#define OS_TRACE_ID_MPU_CONFIGMEM (275u)
#define OS_TRACE_ID_MPU_EXTENDTASKCONTEXT (279u)
#define OS_TRACE_ID_MPU_GETTHREADSTATE (273u)
#define OS_TRACE_ID_MPU_INIT (277u)
#define OS_TRACE_ID_MPU_SANITYCHECK (282u)
#define OS_TRACE_ID_MPU_SETALLOWEDOBJECTS (274u)
#define OS_TRACE_ID_MPU_SETDEVICEDRIVERLIST (278u)
#define OS_TRACE_ID_MPU_SETERRORCALLBACK (280u)
#define OS_TRACE_ID_MPU_SETSANITYCHECKBUFFER (281u)
#define OS_TRACE_ID_MPU_SWITCHTOUNPRIV (271u)
#define OS_TRACE_ID_MPU_SWITCHTOUNPRIVEX (272u)
#define OS_TRACE_ID_MUTEX_CREATE (50u)
#define OS_TRACE_ID_MUTEX_DELETE (55u)
#define OS_TRACE_ID_MUTEX_GETOWNER (196u)
#define OS_TRACE_ID_MUTEX_GETVALUE (54u)
#define OS_TRACE_ID_MUTEX_ISMUTEX (56u)
#define OS_TRACE_ID_MUTEX_LOCK (53u)
#define OS_TRACE_ID_MUTEX_LOCKBLOCKED (51u)
#define OS_TRACE_ID_MUTEX_LOCKTIMED (163u)
#define OS_TRACE_ID_MUTEX_UNLOCK (52u)
#define OS_TRACE_ID_POWER_GETMASK (179u)
#define OS_TRACE_ID_POWER_USAGEDEC (178u)
#define OS_TRACE_ID_POWER_USAGEINC (177u)
#define OS_TRACE_ID_QUEUE_CLEAR (147u)
#define OS_TRACE_ID_QUEUE_CREATE (145u)
#define OS_TRACE_ID_QUEUE_DELETE (146u)
#define OS_TRACE_ID_QUEUE_GETMSGCNT (192u)
#define OS_TRACE_ID_QUEUE_GETMSGSIZE (193u)
#define OS_TRACE_ID_QUEUE_GETPTR (152u)
#define OS_TRACE_ID_QUEUE_GETPTRBLOCKED (151u)
#define OS_TRACE_ID_QUEUE_GETPTRTIMED (153u)
#define OS_TRACE_ID_QUEUE_ISINUSE (194u)
#define OS_TRACE_ID_QUEUE_PEEKPTR (154u)
#define OS_TRACE_ID_QUEUE_PURGE (155u)
#define OS_TRACE_ID_QUEUE_PUT (149u)
#define OS_TRACE_ID_QUEUE_PUTBLOCKED (148u)
#define OS_TRACE_ID_QUEUE_PUTBLOCKEDEX (205u)
#define OS_TRACE_ID_QUEUE_PUTEX (206u)
#define OS_TRACE_ID_QUEUE_PUTTIMED (150u)
#define OS_TRACE_ID_QUEUE_PUTTIMEDEX (207u)
#define OS_TRACE_ID_RWLOCK_CREATE (299u)
#define OS_TRACE_ID_RWLOCK_DELETE (300u)
#define OS_TRACE_ID_RWLOCK_RDLOCK (301u)
#define OS_TRACE_ID_RWLOCK_RDLOCKBLOCKED (302u)
#define OS_TRACE_ID_RWLOCK_RDLOCKTIMED (303u)
#define OS_TRACE_ID_RWLOCK_RDUNLOCK (304u)
#define OS_TRACE_ID_RWLOCK_WRLOCK (305u)
#define OS_TRACE_ID_RWLOCK_WRLOCKBLOCKED (306u)
#define OS_TRACE_ID_RWLOCK_WRLOCKTIMED (307u)
#define OS_TRACE_ID_RWLOCK_WRUNLOCK (308u)
#define OS_TRACE_ID_SEMAPHORE_CREATE (60u)
#define OS_TRACE_ID_SEMAPHORE_DELETE (61u)
#define OS_TRACE_ID_SEMAPHORE_GETVALUE (189u)
#define OS_TRACE_ID_SEMAPHORE_GIVE (62u)
#define OS_TRACE_ID_SEMAPHORE_GIVEMAX (65u)
#define OS_TRACE_ID_SEMAPHORE_SETVALUE (66u)
#define OS_TRACE_ID_SEMAPHORE_TAKE (67u)
#define OS_TRACE_ID_SEMAPHORE_TAKEBLOCKED (63u)
#define OS_TRACE_ID_SEMAPHORE_TAKETIMED (64u)
#define OS_TRACE_ID_SPINLOCK_CREATE (208u)
#define OS_TRACE_ID_SPINLOCK_LOCK (210u)
#define OS_TRACE_ID_SPINLOCK_SW_CREATE (209u)
#define OS_TRACE_ID_SPINLOCK_SW_LOCK (211u)
#define OS_TRACE_ID_SPINLOCK_SW_UNLOCK (213u)
#define OS_TRACE_ID_SPINLOCK_UNLOCK (212u)
#define OS_TRACE_ID_STACK_GETCHECKLIMIT (233u)
#define OS_TRACE_ID_STACK_GETINTSPACE (288u)
#define OS_TRACE_ID_STACK_GETINTUSED (289u)
#define OS_TRACE_ID_STACK_GETSYSSPACE (294u)
#define OS_TRACE_ID_STACK_GETSYSUSED (295u)
#define OS_TRACE_ID_STACK_GETTASKBASE (290u)
#define OS_TRACE_ID_STACK_GETTASKSIZE (291u)
#define OS_TRACE_ID_STACK_GETTASKSPACE (292u)
#define OS_TRACE_ID_STACK_GETTASKUSED (293u)
#define OS_TRACE_ID_STACK_SETCHECKLIMIT (232u)
#define OS_TRACE_ID_START (321u)
#define OS_TRACE_ID_STAT_ADDLOADME (261u)
#define OS_TRACE_ID_STAT_ADDLOADMEEX (262u)
#define OS_TRACE_ID_STAT_DISABLE (270u)
#define OS_TRACE_ID_STAT_ENABLE (269u)
#define OS_TRACE_ID_STAT_GETEXECTIME (263u)
#define OS_TRACE_ID_STAT_GETLOAD (264u)
#define OS_TRACE_ID_STAT_GETLOADMEASUREMENT (265u)
#define OS_TRACE_ID_STAT_GETNUMACTIVATIONS (266u)
#define OS_TRACE_ID_STAT_GETNUMPREEMPTIONS (267u)
#define OS_TRACE_ID_STAT_SAMPLE (268u)
#define OS_TRACE_ID_STOP (231u)
#define OS_TRACE_ID_TASKEVENT_CLEAR (23u)
#define OS_TRACE_ID_TASKEVENT_CLEAREX (218u)
#define OS_TRACE_ID_TASKEVENT_GET (190u)
#define OS_TRACE_ID_TASKEVENT_GETBLOCKED (20u)
#define OS_TRACE_ID_TASKEVENT_GETSIBLOCKED (134u)
#define OS_TRACE_ID_TASKEVENT_GETSITIMED (135u)
#define OS_TRACE_ID_TASKEVENT_GETTIMED (21u)
#define OS_TRACE_ID_TASKEVENT_SET (22u)
#define OS_TRACE_ID_TASK_ADDCONTEXTEXTENSION (244u)
#define OS_TRACE_ID_TASK_ADDTERMINATEHOOK (215u)
#define OS_TRACE_ID_TASK_CREATE (14u)
#define OS_TRACE_ID_TASK_CREATEEX (18u)
#define OS_TRACE_ID_TASK_DELAY (10u)
#define OS_TRACE_ID_TASK_DELAYUNTIL (11u)
#define OS_TRACE_ID_TASK_DELAYUS (131u)
#define OS_TRACE_ID_TASK_GETNAME (245u)
#define OS_TRACE_ID_TASK_GETNUMTASKS (173u)
#define OS_TRACE_ID_TASK_GETPRIORITY (174u)
#define OS_TRACE_ID_TASK_GETSTATUS (320u)
#define OS_TRACE_ID_TASK_GETSUSPENDCNT (175u)
#define OS_TRACE_ID_TASK_GETTIMESLICEREM (246u)
#define OS_TRACE_ID_TASK_INDEX2PTR (247u)
#define OS_TRACE_ID_TASK_ISTASK (191u)
#define OS_TRACE_ID_TASK_REMOVEALLTERMINATEHOOKS (216u)
#define OS_TRACE_ID_TASK_REMOVETERMINATEHOOK (217u)
#define OS_TRACE_ID_TASK_RESUME (17u)
#define OS_TRACE_ID_TASK_RESUMEALL (133u)
#define OS_TRACE_ID_TASK_SETCONTEXTEXTENSION (248u)
#define OS_TRACE_ID_TASK_SETDEFAULTCONTEXTEXTENSION (249u)
#define OS_TRACE_ID_TASK_SETDEFAULTSTARTHOOK (236u)
#define OS_TRACE_ID_TASK_SETINITIALSUSPENDCNT (180u)
#define OS_TRACE_ID_TASK_SETNAME (167u)
#define OS_TRACE_ID_TASK_SETPRIORITY (12u)
#define OS_TRACE_ID_TASK_SETTIMESLICE (195u)
#define OS_TRACE_ID_TASK_SUSPEND (16u)
#define OS_TRACE_ID_TASK_SUSPENDALL (132u)
#define OS_TRACE_ID_TASK_TERMINATE (15u)
#define OS_TRACE_ID_TASK_WAKE (13u)
#define OS_TRACE_ID_TASK_YIELD (19u)
#define OS_TRACE_ID_TICKLESS_ADJUSTTIME (168u)
#define OS_TRACE_ID_TICKLESS_GETNUMIDLETICKS (172u)
#define OS_TRACE_ID_TICKLESS_GETPERIOD (316u)
#define OS_TRACE_ID_TICKLESS_ISEXPIRED (317u)
#define OS_TRACE_ID_TICKLESS_START (187u)
#define OS_TRACE_ID_TICKLESS_STOP (188u)
#define OS_TRACE_ID_TICK_ADDHOOK (185u)
#define OS_TRACE_ID_TICK_CONFIG (257u)
#define OS_TRACE_ID_TICK_HANDLE (258u)
#define OS_TRACE_ID_TICK_HANDLEEX (259u)
#define OS_TRACE_ID_TICK_HANDLENOHOOK (260u)
#define OS_TRACE_ID_TICK_REMOVEHOOK (186u)
#define OS_TRACE_ID_TIMERCALLBACK (3u)
#define OS_TRACE_ID_TIMER_CREATE (70u)
#define OS_TRACE_ID_TIMER_CREATEEX (76u)
#define OS_TRACE_ID_TIMER_DELETE (71u)
#define OS_TRACE_ID_TIMER_GETCURRENT (314u)
#define OS_TRACE_ID_TIMER_GETPERIOD (197u)
#define OS_TRACE_ID_TIMER_GETREMAININGPERIOD (199u)
#define OS_TRACE_ID_TIMER_GETSTATUS (198u)
#define OS_TRACE_ID_TIMER_RESTART (74u)
#define OS_TRACE_ID_TIMER_SETPERIOD (75u)
#define OS_TRACE_ID_TIMER_START (72u)
#define OS_TRACE_ID_TIMER_STOP (73u)
#define OS_TRACE_ID_TIMER_TRIGGER (214u)
#define OS_TRACE_ID_TIME_CONFIGSYSTIMER (251u)
#define OS_TRACE_ID_TIME_CVT_CYCL_TO_MSEC (309u)
#define OS_TRACE_ID_TIME_CVT_CYCL_TO_NSEC (242u)
#define OS_TRACE_ID_TIME_CVT_CYCL_TO_USEC (240u)
#define OS_TRACE_ID_TIME_CVT_MSEC_TO_CYCL (310u)
#define OS_TRACE_ID_TIME_CVT_MSEC_TO_TICKS (296u)
#define OS_TRACE_ID_TIME_CVT_NSEC_TO_CYCLES (243u)
#define OS_TRACE_ID_TIME_CVT_TICKS_TO_MSEC (297u)
#define OS_TRACE_ID_TIME_CVT_USEC_TO_CYCLES (241u)
#define OS_TRACE_ID_TIME_GETCYCLES (239u)
#define OS_TRACE_ID_TIME_GETINTS (315u)
#define OS_TRACE_ID_TIME_GETRESULT (322u)
#define OS_TRACE_ID_TIME_GETRESULTUS (202u)
#define OS_TRACE_ID_TIME_GETUS (181u)
#define OS_TRACE_ID_TIME_GETUS64 (182u)
#define OS_TRACE_ID_TIME_STARTMEASUREMENT (200u)
#define OS_TRACE_ID_TIME_STOPMEASUREMENT (201u)
#define OS_TRACE_ID_WD_ADD (223u)
#define OS_TRACE_ID_WD_CHECK (224u)
#define OS_TRACE_ID_WD_CONFIG (225u)
#define OS_TRACE_ID_WD_REMOVE (226u)
#define OS_TRACE_ID_WD_TRIGGER (227u)
#define OS_TRACE_ISR_EXIT() if ((OS_Global.Counters.Cnt.Region == (OS_U8)1u) && (OS_Global.Pending.All != 0u)) { TRACE_ON_ISR_EXIT_TO_SCHEDULER(); } else { TRACE_ON_ISR_EXIT(); }
#define OS_TRACE_Ptr(id,p) 
#define OS_TRACE_PtrU32(id,p0,p1) 
#define OS_TRACE_RECORD_API_END OS_SUPPORT_TRACE_API_END
#define OS_TRACE_U32Ptr(id,p0,p1) 
#define OS_TRACE_Void(id) 
#define OS_TRACKNAME OS_SUPPORT_TRACKNAME
#define OS_TS_ExecStart OS_Global.ExecStart
#define OS_TaskIndex2Ptr OS_TASK_Index2Ptr
#define OS_Terminate OS_TASK_Terminate
#define OS_TerminateTask OS_TASK_Terminate
#define OS_TickStepTime OS_Global.TickStepTime
#define OS_Time OS_Global.Time
#define OS_TimeDex OS_Global.TimeDex
#define OS_Timing_End OS_TIME_StopMeasurement
#define OS_Timing_GetCycles OS_TIME_GetResult
#define OS_Timing_Getus OS_TIME_GetResult_us
#define OS_Timing_Start OS_TIME_StartMeasurement
#define OS_TraceData OS_TRACE_Data
#define OS_TraceDataPtr OS_TRACE_DataPtr
#define OS_TraceDisable OS_TRACE_Disable
#define OS_TraceDisableAll OS_TRACE_DisableAll
#define OS_TraceDisableFilterId OS_TRACE_DisableFilterId
#define OS_TraceDisableId OS_TRACE_DisableId
#define OS_TraceEnable OS_TRACE_Enable
#define OS_TraceEnableAll OS_TRACE_EnableAll
#define OS_TraceEnableFilterId OS_TRACE_EnableFilterId
#define OS_TraceEnableId OS_TRACE_EnableId
#define OS_TracePtr OS_TRACE_Ptr
#define OS_TraceU32Ptr OS_TRACE_U32Ptr
#define OS_TraceVoid OS_TRACE_Void
#define OS_TriggerTimer OS_TIMER_Trigger
#define OS_TriggerTimerEx OS_TIMER_TriggerEx
#define OS_U16 unsigned short
#define OS_U32 unsigned long
#define OS_U32_OP_IS_ATOMIC (1)
#define OS_U64 unsigned OS_I64
#define OS_U64_OP_IS_ATOMIC (0)
#define OS_U8 unsigned char
#define OS_UINT unsigned OS_INT
#define OS_USEPARA OS_USE_PARA
#define OS_USE_PARA(para) (void)(para)
#define OS_USE_REGIONCNT_API (0)
#define OS_Unuse OS_MUTEX_Unlock
#define OS_Use OS_MUTEX_LockBlocked
#define OS_UseTimed OS_MUTEX_LockTimed
#define OS_VERSION (OS_VERSION_GENERIC + (OS_PORT_REVISION * 25u))
#define OS_VERSION_GENERIC 51800u
#define OS_VFP_Restore() 
#define OS_VFP_Save() 
#define OS_VIEW_DISABLED (0u)
#define OS_VIEW_IF_ETHERNET (3u)
#define OS_VIEW_IF_JLINK (2u)
#define OS_VIEW_IF_UART (1u)
#define OS_WD_RESET_CALLBACK OS_ROUTINE_WD_PTR
#define OS_WaitCSema OS_SEMAPHORE_TakeBlocked
#define OS_WaitCSemaTimed OS_SEMAPHORE_TakeTimed
#define OS_WaitCSema_Timed OS_SEMAPHORE_TakeTimed
#define OS_WaitEvent OS_TASKEVENT_GetBlocked
#define OS_WaitEventTimed OS_TASKEVENT_GetTimed
#define OS_WaitEvent_Timed OS_TASKEVENT_GetTimed
#define OS_WaitMail OS_MAILBOX_WaitBlocked
#define OS_WaitMailTimed OS_MAILBOX_WaitTimed
#define OS_WaitSingleEvent OS_TASKEVENT_GetSingleBlocked
#define OS_WaitSingleEventTimed OS_TASKEVENT_GetSingleTimed
#define OS_WakeTask OS_TASK_Wake
#define OS_Yield OS_TASK_Yield
#define OS_free OS_HEAP_free
#define OS_malloc OS_HEAP_malloc
#define OS_pActiveTask OS_Global.pActiveTask
#define OS_pCurrentTask OS_Global.pCurrentTask
#define OS_pCurrentTimer OS_Global.pCurrentTimer
#define OS_pDefaultTaskContextExtension OS_Global.pDefaultTaskContextExtension
#define OS_pEventRoot OS_Global.pEventRoot
#define OS_pMEMFRoot OS_Global.pMEMFRoot
#define OS_pMailboxRoot OS_Global.pMailboxRoot
#define OS_pMainContext OS_Global.pMainContext
#define OS_pMutexRoot OS_Global.pMutexRoot
#define OS_pObjNameRoot OS_Global.pObjNameRoot
#define OS_pRWLockRoot OS_Global.pRWLockRoot
#define OS_pSemaRoot OS_Global.pSemaRoot
#define OS_pTask OS_Global.pTask
#define OS_pTickHookRoot OS_Global.pTickHookRoot
#define OS_pTimer OS_Global.pTimer
#define OS_pWDRoot OS_Global.pWDRoot
#define OS_pfTaskStartHook OS_Global.pfTaskStartHook
#define OS_realloc OS_HEAP_realloc
#define RTOS_H_INCLUDED 
#define RTT_USE_ASM 1
#define SEGGER_SYSVIEW_DWT_IS_ENABLED() ((*(volatile OS_U32*)(0xE0001000u)) & 0x01u)
#define SSH_OS_DO_NOT_INLINE_CALLS 1
#define SSL_OS_DO_NOT_INLINE_CALLS 1
#define SSL_SESSION_CACHE_SIZE 5
#define TRACE_ON_IDLE() if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordIdle(); }
#define TRACE_ON_ISR_ENTER() if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordEnterISR(); }
#define TRACE_ON_ISR_EXIT() if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordExitISR(); }
#define TRACE_ON_ISR_EXIT_TO_SCHEDULER() if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordExitISRToScheduler(); }
#define TRACE_ON_TASK_CREATE(TaskId) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordTaskCreate((OS_U32)(OS_PTR_TO_VALUE(TaskId))); }
#define TRACE_ON_TASK_START_EXEC(TaskId) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordTaskStartExec((OS_U32)OS_PTR_TO_VALUE((TaskId))); }; OS_TRACE_Void(OS_TRACE_ID_ACTIVATE)
#define TRACE_ON_TASK_START_READY(TaskId) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordTaskStartReady((OS_U32)OS_PTR_TO_VALUE((TaskId))); }
#define TRACE_ON_TASK_STOP_EXEC() if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordTaskStopExec(); }
#define TRACE_ON_TASK_STOP_READY(TaskId,Para0) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordTaskStopReady((OS_U32)(OS_PTR_TO_VALUE(TaskId)), (unsigned int)(Para0)); }
#define TRACE_ON_TASK_TERMINATED(TaskId) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordTaskTerminate((OS_U32)(TaskId)); }
#define TRACE_ON_TIMER_ENTER(TimerId) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordEnterTimer((OS_U32)(OS_PTR_TO_VALUE(TimerId))); }; OS_TRACE_Ptr(OS_TRACE_ID_TIMERCALLBACK, TimerId)
#define TRACE_ON_TIMER_EXIT() if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordExitTimer(); }
#define TRACE_RECORD_API_END(Id) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordEndCall((Id) + OS_TRACE_API_OFFSET); }
#define TRACE_RECORD_API_END_U32(Id,Para0) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordEndCallU32((Id) + OS_TRACE_API_OFFSET, (OS_U32)(Para0)); }
#define TRACE_RECORD_API_PTR(Id,Para0) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordU32 ((Id) + OS_TRACE_API_OFFSET, OS_Global.pTraceAPI->pfPtrToId((OS_U32)(OS_PTR_TO_VALUE(Para0))));} if ((Id) <= 255u) { OS_TRACE_Ptr ((OS_U8)(Id), (Para0)); }
#define TRACE_RECORD_API_PTR_U32(Id,Para0,Para1) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordU32x2((Id) + OS_TRACE_API_OFFSET, OS_Global.pTraceAPI->pfPtrToId((OS_U32)(OS_PTR_TO_VALUE(Para0))), (OS_U32)(Para1));} if ((Id) <= 255u) { OS_TRACE_PtrU32((OS_U8)(Id), (Para0), (OS_U32)(Para1)); }
#define TRACE_RECORD_API_PTR_U32X2(Id,Para0,Para1,Para2) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordU32x3((Id) + OS_TRACE_API_OFFSET, OS_Global.pTraceAPI->pfPtrToId((OS_U32)(OS_PTR_TO_VALUE(Para0))), (OS_U32)(Para1), (OS_U32)(Para2));} if ((Id) <= 255u) { OS_TRACE_PtrU32((OS_U8)(Id), (Para0), (OS_U32)(Para1)); }
#define TRACE_RECORD_API_PTR_U32X3(Id,Para0,Para1,Para2,Para3) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordU32x4((Id) + OS_TRACE_API_OFFSET, OS_Global.pTraceAPI->pfPtrToId((OS_U32)(OS_PTR_TO_VALUE(Para0))), (OS_U32)(Para1), (OS_U32)(Para2), (OS_U32)(Para3)); } if ((Id) <= 255u) { OS_TRACE_PtrU32((OS_U8)(Id), (Para0), (OS_U32)(Para1)); }
#define TRACE_RECORD_API_PTR_U32X4(Id,Para0,Para1,Para2,Para3,Para4) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordU32x5((Id) + OS_TRACE_API_OFFSET, OS_Global.pTraceAPI->pfPtrToId((OS_U32)(OS_PTR_TO_VALUE(Para0))), (OS_U32)(Para1), (OS_U32)(Para2), (OS_U32)(Para3), (OS_U32)(Para4)); } if ((Id) <= 255u) { OS_TRACE_PtrU32((OS_U8)(Id), (Para0), (OS_U32)(Para1)); }
#define TRACE_RECORD_API_U32(Id,Para0) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordU32 ((Id) + OS_TRACE_API_OFFSET, (OS_U32)(Para0));} if ((Id) <= 255u) { OS_TRACE_Data ((OS_U8)(Id), (int)(Para0)); }
#define TRACE_RECORD_API_U32X2(Id,Para0,Para1) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordU32x2((Id) + OS_TRACE_API_OFFSET, (OS_U32)(Para0), (OS_U32)(Para1));} if ((Id) <= 255u) { OS_TRACE_Data ((OS_U8)(Id), (int)(Para0)); }
#define TRACE_RECORD_API_U32X3(Id,Para0,Para1,Para2) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordU32x3((Id) + OS_TRACE_API_OFFSET, (OS_U32)(Para0), (OS_U32)(Para1), (OS_U32)(Para2));} if ((Id) <= 255u) { OS_TRACE_Data ((OS_U8)(Id), (int)(Para0)); }
#define TRACE_RECORD_API_U32X4(Id,Para0,Para1,Para2,Para3) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordU32x4((Id) + OS_TRACE_API_OFFSET, (OS_U32)(Para0), (OS_U32)(Para1), (OS_U32)(Para2), (OS_U32)(Para3));} if ((Id) <= 255u) { OS_TRACE_Data ((OS_U8)(Id), (int)(Para0)); }
#define TRACE_RECORD_API_VOID(Id) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordVoid ((Id) + OS_TRACE_API_OFFSET);} if ((Id) <= 255u) { OS_TRACE_Void ((OS_U8)(Id)); }
#define TRACE_RECORD_OBJNAME(Id,Para0) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordObjName((OS_U32)(Id), (Para0)); }
#define TRACE_RECORD_TASK_INFO(pTask) if (OS_Global.pTraceAPI != NULL) {OS_Global.pTraceAPI->pfRecordTaskInfo((pTask)); }
#define TicklessFactor TicklessPeriod
#define USB_DESC_BUFFER_SIZE 768
#define USB_MAX_NUM_ALT_IF 12
#define USB_NUM_EPS 16
#define USB_SUPPORT_TRANSFER_ISO 1
#define USE_CRYPTO 1
#define USE_EMBOS 1
#define USE_EMBOSIP 1
#define USE_EMCOMPRESS 1
#define USE_EMFILE 1
#define USE_EMMODBUS 1
#define USE_EMUSBD 1
#define USE_ERRATUM_837070 (0)
#define USE_IOTLIB 1
#define USE_RTT 1
#define USE_SECURE 1
#define USE_SEGGERLIB 1
#define USE_SSH 1
#define WEBS_SUPPORT_UPLOAD 1
#define WEBS_USE_SAMPLE_2018 1
#define _ILP32 1
#define __APCS_32__ 1
#define __ARMEL__ 1
#define __ARM_32BIT_STATE 1
#define __ARM_ACLE 200
#define __ARM_ARCH 7
#define __ARM_ARCH_7EM__ 1
#define __ARM_ARCH_EXT_IDIV__ 1
#define __ARM_ARCH_FPV4_SP_D16__ 1
#define __ARM_ARCH_ISA_THUMB 2
#define __ARM_ARCH_PROFILE 'M'
#define __ARM_EABI__ 1
#define __ARM_FEATURE_CLZ 1
#define __ARM_FEATURE_COPROC 0xf
#define __ARM_FEATURE_DSP 1
#define __ARM_FEATURE_FMA 1
#define __ARM_FEATURE_IDIV 1
#define __ARM_FEATURE_LDREX 0x7
#define __ARM_FEATURE_QBIT 1
#define __ARM_FEATURE_SAT 1
#define __ARM_FEATURE_SIMD32 1
#define __ARM_FEATURE_UNALIGNED 1
#define __ARM_FP 0x6
#define __ARM_FP16_ARGS 1
#define __ARM_FP16_FORMAT_IEEE 1
#define __ARM_PCS 1
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define __ARM_SIZEOF_WCHAR_T 4
#define __ARM_VFPV2__ 1
#define __ARM_VFPV3__ 1
#define __ARM_VFPV4__ 1
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_CONSUME 1
#define __ATOMIC_RELAXED 0
#define __ATOMIC_RELEASE 3
#define __ATOMIC_SEQ_CST 5
#define __BIGGEST_ALIGNMENT__ 8
#define __BITINT_MAXWIDTH__ 128
#define __BOOL_WIDTH__ 8
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __CHAR16_TYPE__ unsigned short
#define __CHAR32_TYPE__ unsigned int
#define __CHAR_BIT__ 8
#define __CHAR_UNSIGNED__ 1
#define __CLANG_ATOMIC_BOOL_LOCK_FREE 2
#define __CLANG_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __CLANG_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __CLANG_ATOMIC_CHAR_LOCK_FREE 2
#define __CLANG_ATOMIC_INT_LOCK_FREE 2
#define __CLANG_ATOMIC_LLONG_LOCK_FREE 1
#define __CLANG_ATOMIC_LONG_LOCK_FREE 2
#define __CLANG_ATOMIC_POINTER_LOCK_FREE 2
#define __CLANG_ATOMIC_SHORT_LOCK_FREE 2
#define __CLANG_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __CONCAT(X,S) X ## S
#define __CONCAT1(X,S) __CONCAT(X, S)
#define __CONSTANT_CFSTRINGS__ 1
#define __DBL_DECIMAL_DIG__ 17
#define __DBL_DENORM_MIN__ 4.9406564584124654e-324
#define __DBL_DIG__ 15
#define __DBL_EPSILON__ 2.2204460492503131e-16
#define __DBL_HAS_DENORM__ 1
#define __DBL_HAS_INFINITY__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __DBL_MANT_DIG__ 53
#define __DBL_MAX_10_EXP__ 308
#define __DBL_MAX_EXP__ 1024
#define __DBL_MAX__ 1.7976931348623157e+308
#define __DBL_MIN_10_EXP__ (-307)
#define __DBL_MIN_EXP__ (-1021)
#define __DBL_MIN__ 2.2250738585072014e-308
#define __DECIMAL_DIG__ __LDBL_DECIMAL_DIG__
#define __ELF__ 1
#define __FINITE_MATH_ONLY__ 0
#define __FLT16_DECIMAL_DIG__ 5
#define __FLT16_DENORM_MIN__ 5.9604644775390625e-8F16
#define __FLT16_DIG__ 3
#define __FLT16_EPSILON__ 9.765625e-4F16
#define __FLT16_HAS_DENORM__ 1
#define __FLT16_HAS_INFINITY__ 1
#define __FLT16_HAS_QUIET_NAN__ 1
#define __FLT16_MANT_DIG__ 11
#define __FLT16_MAX_10_EXP__ 4
#define __FLT16_MAX_EXP__ 16
#define __FLT16_MAX__ 6.5504e+4F16
#define __FLT16_MIN_10_EXP__ (-4)
#define __FLT16_MIN_EXP__ (-13)
#define __FLT16_MIN__ 6.103515625e-5F16
#define __FLT_DECIMAL_DIG__ 9
#define __FLT_DENORM_MIN__ 1.40129846e-45F
#define __FLT_DIG__ 6
#define __FLT_EPSILON__ 1.19209290e-7F
#define __FLT_HAS_DENORM__ 1
#define __FLT_HAS_INFINITY__ 1
#define __FLT_HAS_QUIET_NAN__ 1
#define __FLT_MANT_DIG__ 24
#define __FLT_MAX_10_EXP__ 38
#define __FLT_MAX_EXP__ 128
#define __FLT_MAX__ 3.40282347e+38F
#define __FLT_MIN_10_EXP__ (-37)
#define __FLT_MIN_EXP__ (-125)
#define __FLT_MIN__ 1.17549435e-38F
#define __FLT_RADIX__ 2
#define __FPCLASS_NEGINF 0x0004
#define __FPCLASS_NEGNORMAL 0x0008
#define __FPCLASS_NEGSUBNORMAL 0x0010
#define __FPCLASS_NEGZERO 0x0020
#define __FPCLASS_POSINF 0x0200
#define __FPCLASS_POSNORMAL 0x0100
#define __FPCLASS_POSSUBNORMAL 0x0080
#define __FPCLASS_POSZERO 0x0040
#define __FPCLASS_QNAN 0x0002
#define __FPCLASS_SNAN 0x0001
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 1
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __GNUC_MINOR__ 2
#define __GNUC_PATCHLEVEL__ 1
#define __GNUC_STDC_INLINE__ 1
#define __GNUC__ 4
#define __GXX_ABI_VERSION 1002
#define __HEAP_SIZE__ 1280
#define __ILP32__ 1
#define __INT16_C_SUFFIX__ 
#define __INT16_FMTd__ "hd"
#define __INT16_FMTi__ "hi"
#define __INT16_MAX__ 32767
#define __INT16_TYPE__ short
#define __INT32_C_SUFFIX__ 
#define __INT32_FMTd__ "d"
#define __INT32_FMTi__ "i"
#define __INT32_MAX__ 2147483647
#define __INT32_TYPE__ int
#define __INT64_C_SUFFIX__ LL
#define __INT64_FMTd__ "lld"
#define __INT64_FMTi__ "lli"
#define __INT64_MAX__ 9223372036854775807LL
#define __INT64_TYPE__ long long int
#define __INT8_C_SUFFIX__ 
#define __INT8_FMTd__ "hhd"
#define __INT8_FMTi__ "hhi"
#define __INT8_MAX__ 127
#define __INT8_TYPE__ signed char
#define __INTMAX_C_SUFFIX__ LL
#define __INTMAX_FMTd__ "lld"
#define __INTMAX_FMTi__ "lli"
#define __INTMAX_MAX__ 9223372036854775807LL
#define __INTMAX_TYPE__ long long int
#define __INTMAX_WIDTH__ 64
#define __INTPTR_FMTd__ "d"
#define __INTPTR_FMTi__ "i"
#define __INTPTR_MAX__ 2147483647
#define __INTPTR_TYPE__ int
#define __INTPTR_WIDTH__ 32
#define __INT_FAST16_FMTd__ "hd"
#define __INT_FAST16_FMTi__ "hi"
#define __INT_FAST16_MAX__ 32767
#define __INT_FAST16_TYPE__ short
#define __INT_FAST16_WIDTH__ 16
#define __INT_FAST32_FMTd__ "d"
#define __INT_FAST32_FMTi__ "i"
#define __INT_FAST32_MAX__ 2147483647
#define __INT_FAST32_TYPE__ int
#define __INT_FAST32_WIDTH__ 32
#define __INT_FAST64_FMTd__ "lld"
#define __INT_FAST64_FMTi__ "lli"
#define __INT_FAST64_MAX__ 9223372036854775807LL
#define __INT_FAST64_TYPE__ long long int
#define __INT_FAST64_WIDTH__ 64
#define __INT_FAST8_FMTd__ "hhd"
#define __INT_FAST8_FMTi__ "hhi"
#define __INT_FAST8_MAX__ 127
#define __INT_FAST8_TYPE__ signed char
#define __INT_FAST8_WIDTH__ 8
#define __INT_LEAST16_FMTd__ "hd"
#define __INT_LEAST16_FMTi__ "hi"
#define __INT_LEAST16_MAX__ 32767
#define __INT_LEAST16_TYPE__ short
#define __INT_LEAST16_WIDTH__ 16
#define __INT_LEAST32_FMTd__ "d"
#define __INT_LEAST32_FMTi__ "i"
#define __INT_LEAST32_MAX__ 2147483647
#define __INT_LEAST32_TYPE__ int
#define __INT_LEAST32_WIDTH__ 32
#define __INT_LEAST64_FMTd__ "lld"
#define __INT_LEAST64_FMTi__ "lli"
#define __INT_LEAST64_MAX__ 9223372036854775807LL
#define __INT_LEAST64_TYPE__ long long int
#define __INT_LEAST64_WIDTH__ 64
#define __INT_LEAST8_FMTd__ "hhd"
#define __INT_LEAST8_FMTi__ "hhi"
#define __INT_LEAST8_MAX__ 127
#define __INT_LEAST8_TYPE__ signed char
#define __INT_LEAST8_WIDTH__ 8
#define __INT_MAX__ 2147483647
#define __INT_WIDTH__ 32
#define __LDBL_DECIMAL_DIG__ 17
#define __LDBL_DENORM_MIN__ 4.9406564584124654e-324L
#define __LDBL_DIG__ 15
#define __LDBL_EPSILON__ 2.2204460492503131e-16L
#define __LDBL_HAS_DENORM__ 1
#define __LDBL_HAS_INFINITY__ 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define __LDBL_MANT_DIG__ 53
#define __LDBL_MAX_10_EXP__ 308
#define __LDBL_MAX_EXP__ 1024
#define __LDBL_MAX__ 1.7976931348623157e+308L
#define __LDBL_MIN_10_EXP__ (-307)
#define __LDBL_MIN_EXP__ (-1021)
#define __LDBL_MIN__ 2.2250738585072014e-308L
#define __LITTLE_ENDIAN__ 1
#define __LLONG_WIDTH__ 64
#define __LONG_LONG_MAX__ 9223372036854775807LL
#define __LONG_MAX__ 2147483647L
#define __LONG_WIDTH__ 32
#define __MEMORY_SCOPE_DEVICE 1
#define __MEMORY_SCOPE_SINGLE 4
#define __MEMORY_SCOPE_SYSTEM 0
#define __MEMORY_SCOPE_WRKGRP 2
#define __MEMORY_SCOPE_WVFRNT 3
#define __NO_INLINE__ 1
#define __NO_MATH_ERRNO__ 1
#define __OBJC_BOOL_IS_BOOL 0
#define __OPENCL_MEMORY_SCOPE_ALL_SVM_DEVICES 3
#define __OPENCL_MEMORY_SCOPE_DEVICE 2
#define __OPENCL_MEMORY_SCOPE_SUB_GROUP 4
#define __OPENCL_MEMORY_SCOPE_WORK_GROUP 1
#define __OPENCL_MEMORY_SCOPE_WORK_ITEM 0
#define __ORDER_BIG_ENDIAN__ 4321
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __ORDER_PDP_ENDIAN__ 3412
#define __POINTER_WIDTH__ 32
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __PTRDIFF_FMTd__ "d"
#define __PTRDIFF_FMTi__ "i"
#define __PTRDIFF_MAX__ 2147483647
#define __PTRDIFF_TYPE__ int
#define __PTRDIFF_WIDTH__ 32
#define __REGISTER_PREFIX__ 
#define __SCHAR_MAX__ 127
#define __SEGGER_CC_MINOR__ 1
#define __SEGGER_CC_PATCHLEVEL__ 2
#define __SEGGER_CC_VERSION__ "18.1.2"
#define __SEGGER_CC__ 18
#define __SEGGER_LINKER 1
#define __SEGGER_RTL_ADDRSIZE 32
#define __SEGGER_RTL_ALIGN_PTR(X) (void *)(X)
#define __SEGGER_RTL_ALIGN_REM(X) 0
#define __SEGGER_RTL_ALWAYS_INLINE __inline__ __attribute__((__always_inline__))
#define __SEGGER_RTL_ARM_CONF_H 
#define __SEGGER_RTL_ATEXIT_COUNT 1
#define __SEGGER_RTL_ATOMIC_IS_LOCK_FREE(S,P) __SEGGER_RTL_atomic_is_lock_free(S, P)
#define __SEGGER_RTL_ATOMIC_LOCK() __SEGGER_RTL_X_atomic_lock()
#define __SEGGER_RTL_ATOMIC_SYNCHRONIZE() __SEGGER_RTL_X_atomic_synchronize()
#define __SEGGER_RTL_ATOMIC_U16 __SEGGER_RTL_U16
#define __SEGGER_RTL_ATOMIC_U32 unsigned
#define __SEGGER_RTL_ATOMIC_U64 __SEGGER_RTL_U64
#define __SEGGER_RTL_ATOMIC_U8 __SEGGER_RTL_U8
#define __SEGGER_RTL_ATOMIC_UNLOCK(X) __SEGGER_RTL_X_atomic_unlock(X)
#define __SEGGER_RTL_BITREV_U32(X) __builtin_arm_rbit(X)
#define __SEGGER_RTL_BOOL _Bool
#define __SEGGER_RTL_BYTE_ORDER (-1)
#define __SEGGER_RTL_BYTE_PATTERN(X) __SEGGER_RTL_BYTE_PATTERN_func(X)
#define __SEGGER_RTL_BitcastToF32(X) __SEGGER_RTL_BitcastToF32_inline(X)
#define __SEGGER_RTL_BitcastToF64(X) __SEGGER_RTL_BitcastToF64_inline(X)
#define __SEGGER_RTL_BitcastToU32(X) __SEGGER_RTL_BitcastToU32_inline(X)
#define __SEGGER_RTL_BitcastToU64(X) __SEGGER_RTL_BitcastToU64_inline(X)
#define __SEGGER_RTL_CLZ_U32(X) __SEGGER_RTL_CLZ_U32_safe_inline(X)
#define __SEGGER_RTL_CLZ_U64(X) __SEGGER_RTL_CLZ_U64_inline(X)
#define __SEGGER_RTL_CLZ_U64_SYNTHESIZED 
#define __SEGGER_RTL_CONF_H 
#define __SEGGER_RTL_CORE_HAS_ADDW_SUBW 1
#define __SEGGER_RTL_CORE_HAS_BFC_BFI_BFX 1
#define __SEGGER_RTL_CORE_HAS_BLX_REG 1
#define __SEGGER_RTL_CORE_HAS_CBZ_CBNZ 1
#define __SEGGER_RTL_CORE_HAS_CLRM 0
#define __SEGGER_RTL_CORE_HAS_CLZ 1
#define __SEGGER_RTL_CORE_HAS_CSINC_CSNEG_CSINV 0
#define __SEGGER_RTL_CORE_HAS_EXT_MUL 1
#define __SEGGER_RTL_CORE_HAS_IDIV 1
#define __SEGGER_RTL_CORE_HAS_IDIVM_X 0
#define __SEGGER_RTL_CORE_HAS_IDIV_X 0
#define __SEGGER_RTL_CORE_HAS_ISA_SIMD32 1
#define __SEGGER_RTL_CORE_HAS_LONG_SHIFT 1
#define __SEGGER_RTL_CORE_HAS_LSLL_LSRL_ASRL 0
#define __SEGGER_RTL_CORE_HAS_MLA 1
#define __SEGGER_RTL_CORE_HAS_MLS 1
#define __SEGGER_RTL_CORE_HAS_MOVW_MOVT 1
#define __SEGGER_RTL_CORE_HAS_PKHTB_PKHBT 1
#define __SEGGER_RTL_CORE_HAS_REV 1
#define __SEGGER_RTL_CORE_HAS_TBB_TBH 1
#define __SEGGER_RTL_CORE_HAS_UDIVM_X 0
#define __SEGGER_RTL_CORE_HAS_UDIV_X 0
#define __SEGGER_RTL_CORE_HAS_UQADD_UQSUB 1
#define __SEGGER_RTL_CORE_HAS_UXT_SXT 1
#define __SEGGER_RTL_DBL_MAX __DBL_MAX__
#define __SEGGER_RTL_DBL_MIN __DBL_MIN__
#define __SEGGER_RTL_DIFF_BYTE(X,N) __SEGGER_RTL_DIFF_BYTE_func(X, N)
#define __SEGGER_RTL_DIFF_INDEX(X,Y) __SEGGER_RTL_DIFF_INDEX_func(X, Y)
#define __SEGGER_RTL_DIVMOD_U32(Q,R,N,D) do { Q = (N) / (D); R = (N) - (Q)*(D); } while (0)
#define __SEGGER_RTL_DIVMOD_U64(Q,R,N,D) do { Q = (N) / (D); R = (N) - (Q)*(D); } while (0)
#define __SEGGER_RTL_FAST_CODE_SECTION(X) __attribute__((__section__(".fast." X)))
#define __SEGGER_RTL_FILE_IMPL __SEGGER_RTL_FILE_impl
#define __SEGGER_RTL_FILE_IMPL_DEFINED 
#define __SEGGER_RTL_FILL_HEAD(A,W,C) __SEGGER_RTL_FILL_HEAD_func(A, W, C)
#define __SEGGER_RTL_FILL_TAIL(N,W,C) __SEGGER_RTL_FILL_TAIL_func(N, W, C)
#define __SEGGER_RTL_FLOAT16 _Float16
#define __SEGGER_RTL_FLOAT32_ABS(__m) ({ float __d; __asm__ __volatile__("vabs.f32 %[d], %[m]" : [d] "=t"(__d) : [m] "t"(__m)); __d; })
#define __SEGGER_RTL_FLOAT32_C_COMPLEX float _Complex
#define __SEGGER_RTL_FLOAT32_SQRT(__m) ({ float __d; __asm__ __volatile__("vsqrt.f32 %[d], %[m]" : [d] "=t"(__d) : [m] "t"(__m)); __d; })
#define __SEGGER_RTL_FLOAT64_C_COMPLEX double _Complex
#define __SEGGER_RTL_FLT_MAX __FLT_MAX__
#define __SEGGER_RTL_FLT_MIN __FLT_MIN__
#define __SEGGER_RTL_FLT_SELECT(HEX,DEC) HEX
#define __SEGGER_RTL_FORCE_SOFT_FLOAT 0
#define __SEGGER_RTL_FORMAT_CHAR_CLASS 1
#define __SEGGER_RTL_FORMAT_FLOAT_WIDTH __WIDTH_DOUBLE
#define __SEGGER_RTL_FORMAT_INT_WIDTH __WIDTH_LONG_LONG
#define __SEGGER_RTL_FORMAT_WCHAR 1
#define __SEGGER_RTL_FORMAT_WIDTH_PRECISION 1
#define __SEGGER_RTL_FP_ABI 0
#define __SEGGER_RTL_FP_HW 1
#define __SEGGER_RTL_H 
#define __SEGGER_RTL_HIDE(X) __c_##X
#define __SEGGER_RTL_HUGE_VAL __builtin_huge_val()
#define __SEGGER_RTL_HUGE_VALF __builtin_huge_valf()
#define __SEGGER_RTL_HUGE_VALL __builtin_huge_vall()
#define __SEGGER_RTL_I16 __SEGGER_RTL_INT16_T
#define __SEGGER_RTL_I2P(X) ((void *)(X))
#define __SEGGER_RTL_I32 __SEGGER_RTL_INT32_T
#define __SEGGER_RTL_I32_C(X) __SEGGER_RTL_INT32_C(X)
#define __SEGGER_RTL_I64 __SEGGER_RTL_INT64_T
#define __SEGGER_RTL_I64_C(X) __SEGGER_RTL_INT64_C(X)
#define __SEGGER_RTL_I64_H(X) ((__SEGGER_RTL_I32)((__SEGGER_RTL_I64)(X) >> 32))
#define __SEGGER_RTL_I64_L(X) ((__SEGGER_RTL_U32)(__SEGGER_RTL_U64)(X))
#define __SEGGER_RTL_I8 __SEGGER_RTL_INT8_T
#define __SEGGER_RTL_INCLUDE_AEABI_API 2
#define __SEGGER_RTL_INCLUDE_BENCHMARKING 0
#define __SEGGER_RTL_INCLUDE_C_API 1
#define __SEGGER_RTL_INCLUDE_GNU_API 1
#define __SEGGER_RTL_INCLUDE_GNU_FP16_API 1
#define __SEGGER_RTL_INCLUDE_SEGGER_API 0
#define __SEGGER_RTL_INFINITY __builtin_inff()
#define __SEGGER_RTL_INT128_WIDTH 128
#define __SEGGER_RTL_INT16_C(X) __XINTX_C(X,__INT16_C_SUFFIX__)
#define __SEGGER_RTL_INT16_MAX __INT16_MAX__
#define __SEGGER_RTL_INT16_MIN (-__SEGGER_RTL_INT16_MAX - 1)
#define __SEGGER_RTL_INT16_T __INT16_TYPE__
#define __SEGGER_RTL_INT16_WIDTH 16
#define __SEGGER_RTL_INT32_C(X) __XINTX_C(X,__INT32_C_SUFFIX__)
#define __SEGGER_RTL_INT32_MAX __INT32_MAX__
#define __SEGGER_RTL_INT32_MIN (-__SEGGER_RTL_INT32_MAX - 1)
#define __SEGGER_RTL_INT32_T __INT32_TYPE__
#define __SEGGER_RTL_INT32_WIDTH 32
#define __SEGGER_RTL_INT64_C(X) __XINTX_C(X,__INT64_C_SUFFIX__)
#define __SEGGER_RTL_INT64_MAX __INT64_MAX__
#define __SEGGER_RTL_INT64_MIN (-__SEGGER_RTL_INT64_MAX - 1)
#define __SEGGER_RTL_INT64_T __INT64_TYPE__
#define __SEGGER_RTL_INT64_WIDTH 64
#define __SEGGER_RTL_INT8_C(X) __XINTX_C(X,__INT8_C_SUFFIX__)
#define __SEGGER_RTL_INT8_MAX __INT8_MAX__
#define __SEGGER_RTL_INT8_MIN (-__SEGGER_RTL_INT8_MAX - 1)
#define __SEGGER_RTL_INT8_T __INT8_TYPE__
#define __SEGGER_RTL_INT8_WIDTH 8
#define __SEGGER_RTL_INTMAX_C(X) __XINTX_C(X,__INTMAX_C_SUFFIX__)
#define __SEGGER_RTL_INTMAX_MAX __INTMAX_MAX__
#define __SEGGER_RTL_INTMAX_MIN (-__SEGGER_RTL_INTMAX_MAX - 1)
#define __SEGGER_RTL_INTMAX_T __INTMAX_TYPE__
#define __SEGGER_RTL_INTMAX_WIDTH __INTMAX_WIDTH__
#define __SEGGER_RTL_INTPTR_MAX __INTPTR_MAX__
#define __SEGGER_RTL_INTPTR_MIN (-__SEGGER_RTL_INTPTR_MAX - 1)
#define __SEGGER_RTL_INTPTR_T __INTPTR_TYPE__
#define __SEGGER_RTL_INTPTR_WIDTH __INTPTR_WIDTH__
#define __SEGGER_RTL_INT_FAST128_WIDTH __SEGGER_RTL_INT128_WIDTH
#define __SEGGER_RTL_INT_FAST16_MAX __INT_FAST16_MAX__
#define __SEGGER_RTL_INT_FAST16_MIN (-__SEGGER_RTL_INT_FAST16_MAX - 1)
#define __SEGGER_RTL_INT_FAST16_T __INT_FAST16_TYPE__
#define __SEGGER_RTL_INT_FAST16_WIDTH __INT_FAST16_WIDTH__
#define __SEGGER_RTL_INT_FAST32_MAX __INT_FAST32_MAX__
#define __SEGGER_RTL_INT_FAST32_MIN (-__SEGGER_RTL_INT_FAST32_MAX - 1)
#define __SEGGER_RTL_INT_FAST32_T __INT_FAST32_TYPE__
#define __SEGGER_RTL_INT_FAST32_WIDTH __INT_FAST32_WIDTH__
#define __SEGGER_RTL_INT_FAST64_MAX __INT_FAST64_MAX__
#define __SEGGER_RTL_INT_FAST64_MIN (-__SEGGER_RTL_INT_FAST64_MAX - 1)
#define __SEGGER_RTL_INT_FAST64_T __INT_FAST64_TYPE__
#define __SEGGER_RTL_INT_FAST64_WIDTH __INT_FAST64_WIDTH__
#define __SEGGER_RTL_INT_FAST8_MAX __INT_FAST8_MAX__
#define __SEGGER_RTL_INT_FAST8_MIN (-__SEGGER_RTL_INT_FAST8_MAX - 1)
#define __SEGGER_RTL_INT_FAST8_T __INT_FAST8_TYPE__
#define __SEGGER_RTL_INT_FAST8_WIDTH __INT_FAST8_WIDTH__
#define __SEGGER_RTL_INT_LEAST128_WIDTH __SEGGER_RTL_INT128_WIDTH
#define __SEGGER_RTL_INT_LEAST16_MAX __INT_LEAST16_MAX__
#define __SEGGER_RTL_INT_LEAST16_MIN (-__SEGGER_RTL_INT_LEAST16_MAX - 1)
#define __SEGGER_RTL_INT_LEAST16_T __INT_LEAST16_TYPE__
#define __SEGGER_RTL_INT_LEAST16_WIDTH __INT_LEAST16_WIDTH__
#define __SEGGER_RTL_INT_LEAST32_MAX __INT_LEAST32_MAX__
#define __SEGGER_RTL_INT_LEAST32_MIN (-__SEGGER_RTL_INT_LEAST32_MAX - 1)
#define __SEGGER_RTL_INT_LEAST32_T __INT_LEAST32_TYPE__
#define __SEGGER_RTL_INT_LEAST32_WIDTH __INT_LEAST32_WIDTH__
#define __SEGGER_RTL_INT_LEAST64_MAX __INT_LEAST64_MAX__
#define __SEGGER_RTL_INT_LEAST64_MIN (-__SEGGER_RTL_INT_LEAST64_MAX - 1)
#define __SEGGER_RTL_INT_LEAST64_T __INT_LEAST64_TYPE__
#define __SEGGER_RTL_INT_LEAST64_WIDTH __INT_LEAST64_WIDTH__
#define __SEGGER_RTL_INT_LEAST8_MAX __INT_LEAST8_MAX__
#define __SEGGER_RTL_INT_LEAST8_MIN (-__SEGGER_RTL_INT_LEAST8_MAX - 1)
#define __SEGGER_RTL_INT_LEAST8_T __INT_LEAST8_TYPE__
#define __SEGGER_RTL_INT_LEAST8_WIDTH __INT_LEAST8_WIDTH__
#define __SEGGER_RTL_ISA_ARM 2
#define __SEGGER_RTL_ISA_T16 0
#define __SEGGER_RTL_ISA_T32 1
#define __SEGGER_RTL_LDBL_MAX __LDBL_MAX__
#define __SEGGER_RTL_LDBL_MIN __LDBL_MIN__
#define __SEGGER_RTL_LDOUBLE_C_COMPLEX long double _Complex
#define __SEGGER_RTL_LIBC_CONF_DEFAULTS_H 
#define __SEGGER_RTL_LIKELY(X) __builtin_expect((X), 1)
#define __SEGGER_RTL_LOCALE_THREAD 
#define __SEGGER_RTL_MAX_ALIGN 8
#define __SEGGER_RTL_MAX_CATEGORY 5
#define __SEGGER_RTL_MAX_HEAP_SIZE (8*1024*1024u)
#define __SEGGER_RTL_MINIMAL_LOCALE 0
#define __SEGGER_RTL_NAN __builtin_nanf("0x7fc00000")
#define __SEGGER_RTL_NAN_FORMAT __SEGGER_RTL_NAN_FORMAT_IEEE
#define __SEGGER_RTL_NAN_FORMAT_COMPACT 2
#define __SEGGER_RTL_NAN_FORMAT_FAST 1
#define __SEGGER_RTL_NAN_FORMAT_IEEE 0
#define __SEGGER_RTL_NEVER_INLINE __attribute__((__noinline__))
#define __SEGGER_RTL_NO_BUILTIN 
#define __SEGGER_RTL_NO_RETURN 
#define __SEGGER_RTL_OFFSETOF(s,m) __builtin_offsetof(s, m)
#define __SEGGER_RTL_OPTIMIZE 0
#define __SEGGER_RTL_P2I(X) ((unsigned)(X))
#define __SEGGER_RTL_PREFER_BRANCH_FREE_CODE 1
#define __SEGGER_RTL_PTRDIFF_MAX __PTRDIFF_MAX__
#define __SEGGER_RTL_PTRDIFF_MIN (-__SEGGER_RTL_PTRDIFF_MAX - 1)
#define __SEGGER_RTL_PTRDIFF_T __PTRDIFF_TYPE__
#define __SEGGER_RTL_PTRDIFF_WIDTH __PTRDIFF_WIDTH__
#define __SEGGER_RTL_PUBLIC_API __attribute__((__weak__))
#define __SEGGER_RTL_RD_WORD(A) __SEGGER_RTL_RD_WORD_func(A)
#define __SEGGER_RTL_REQUEST_INLINE __inline__
#define __SEGGER_RTL_RODATA const
#define __SEGGER_RTL_RODATA_IS_RW 0
#define __SEGGER_RTL_SCALED_INTEGER 0
#define __SEGGER_RTL_SELECT_TYPESET(T16,T32,T64) T32
#define __SEGGER_RTL_SIDE_BY_SIDE 0
#define __SEGGER_RTL_SIDE_BY_SIZE 0
#define __SEGGER_RTL_SIGNAL_MAX 6
#define __SEGGER_RTL_SIGNAL_SIGABRT __aeabi_SIGABRT
#define __SEGGER_RTL_SIGNAL_SIGFPE __aeabi_SIGFPE
#define __SEGGER_RTL_SIGNAL_SIGILL __aeabi_SIGILL
#define __SEGGER_RTL_SIGNAL_SIGINT __aeabi_SIGINT
#define __SEGGER_RTL_SIGNAL_SIGSEGV __aeabi_SIGSEGV
#define __SEGGER_RTL_SIGNAL_SIGTERM __aeabi_SIGTERM
#define __SEGGER_RTL_SIGNAL_SIG_DFL __aeabi_SIG_DFL
#define __SEGGER_RTL_SIGNAL_SIG_ERR __aeabi_SIG_ERR
#define __SEGGER_RTL_SIGNAL_SIG_IGN __aeabi_SIG_IGN
#define __SEGGER_RTL_SIG_ATOMIC_MAX __SIG_ATOMIC_MAX__
#define __SEGGER_RTL_SIG_ATOMIC_MIN 0
#define __SEGGER_RTL_SIG_ATOMIC_T __SEGGER_RTL_SELECT_TYPESET(__SEGGER_RTL_INT16_T, __SEGGER_RTL_INT32_T, __SEGGER_RTL_INT64_T)
#define __SEGGER_RTL_SIZEOF_INT __SIZEOF_INT__
#define __SEGGER_RTL_SIZEOF_LDOUBLE 8
#define __SEGGER_RTL_SIZEOF_LONG __SIZEOF_LONG__
#define __SEGGER_RTL_SIZEOF_PTR __SIZEOF_POINTER__
#define __SEGGER_RTL_SIZEOF_WCHAR_T __SIZEOF_WCHAR_T__
#define __SEGGER_RTL_SIZE_MAX __SIZE_MAX__
#define __SEGGER_RTL_SIZE_T __SIZE_TYPE__
#define __SEGGER_RTL_SIZE_T_DEFINED 
#define __SEGGER_RTL_SIZE_WIDTH __SIZE_WIDTH__
#define __SEGGER_RTL_SMLAL(lo,hi,x0,x1) do { __asm__( "smlal %0, %1, %2, %3" : "+r"(lo), "+r"(hi) : "r"((unsigned)(x0)), "r"((unsigned)(x1)) ); } while (0)
#define __SEGGER_RTL_SMULL(lo,hi,x0,x1) do { __asm__( "smull %0, %1, %2, %3" : "=r"(lo), "=r"(hi) : "r"((unsigned)(x0)), "r"((unsigned)(x1)) ); } while (0)
#define __SEGGER_RTL_SMULL_HI(x0,x1) ({ long __trash, __hi; __asm__( "smull %0, %1, %2, %3" : "=r"(__trash), "=r"(__hi) : "r"((unsigned)(x0)), "r"((unsigned)(x1)) ); __hi; })
#define __SEGGER_RTL_SMULL_X(X,Y) __SEGGER_RTL_SMULL_X_func((X), (Y))
#define __SEGGER_RTL_SMULL_X_SYNTHESIZED 
#define __SEGGER_RTL_SPECIALIZE_COMPARES 1
#define __SEGGER_RTL_STATE_THREAD __SEGGER_RTL_THREAD
#define __SEGGER_RTL_STDC_VERSION __STDC_VERSION__
#define __SEGGER_RTL_STDC_VERSION_C11 201112L
#define __SEGGER_RTL_STDC_VERSION_C18 201710L
#define __SEGGER_RTL_STDC_VERSION_C90 199000L
#define __SEGGER_RTL_STDC_VERSION_C94 199409L
#define __SEGGER_RTL_STDC_VERSION_C99 199901L
#define __SEGGER_RTL_STDC_VERSION_CPP11 201103L
#define __SEGGER_RTL_STDC_VERSION_CPP14 201402L
#define __SEGGER_RTL_STDC_VERSION_CPP17 201703L
#define __SEGGER_RTL_STDC_VERSION_CPP98 199711L
#define __SEGGER_RTL_STDOUT_BUFFER_LEN 64
#define __SEGGER_RTL_STRING_ASM 1
#define __SEGGER_RTL_STRING_H 
#define __SEGGER_RTL_SUBNORMALS_FLUSH_TO_ZERO 1
#define __SEGGER_RTL_SUBNORMALS_READ_AS_ZERO 1
#define __SEGGER_RTL_TARGET_ISA __SEGGER_RTL_ISA_T32
#define __SEGGER_RTL_THREAD __thread
#define __SEGGER_RTL_TYPESET 32
#define __SEGGER_RTL_U16 __SEGGER_RTL_UINT16_T
#define __SEGGER_RTL_U32 __SEGGER_RTL_UINT32_T
#define __SEGGER_RTL_U32_C(X) __SEGGER_RTL_UINT32_C(X)
#define __SEGGER_RTL_U64 __SEGGER_RTL_UINT64_T
#define __SEGGER_RTL_U64_C(X) __SEGGER_RTL_UINT64_C(X)
#define __SEGGER_RTL_U64_H(X) ((__SEGGER_RTL_U32)((__SEGGER_RTL_U64)(X) >> 32))
#define __SEGGER_RTL_U64_L(X) ((__SEGGER_RTL_U32)(__SEGGER_RTL_U64)(X))
#define __SEGGER_RTL_U64_MK(H,L) (((__SEGGER_RTL_U64)(__SEGGER_RTL_U32)(H) << 32) + (__SEGGER_RTL_U32)(L))
#define __SEGGER_RTL_U8 __SEGGER_RTL_UINT8_T
#define __SEGGER_RTL_UINT128_WIDTH 128
#define __SEGGER_RTL_UINT16_C(X) __XINTX_C(X,__UINT16_C_SUFFIX__)
#define __SEGGER_RTL_UINT16_MAX __UINT16_MAX__
#define __SEGGER_RTL_UINT16_T __UINT16_TYPE__
#define __SEGGER_RTL_UINT16_WIDTH 16
#define __SEGGER_RTL_UINT32_C(X) __XINTX_C(X, __UINT32_C_SUFFIX__)
#define __SEGGER_RTL_UINT32_MAX __UINT32_MAX__
#define __SEGGER_RTL_UINT32_T __UINT32_TYPE__
#define __SEGGER_RTL_UINT32_WIDTH 32
#define __SEGGER_RTL_UINT64_C(X) __XINTX_C(X,__UINT64_C_SUFFIX__)
#define __SEGGER_RTL_UINT64_MAX __UINT64_MAX__
#define __SEGGER_RTL_UINT64_T __UINT64_TYPE__
#define __SEGGER_RTL_UINT64_WIDTH 64
#define __SEGGER_RTL_UINT8_C(X) __XINTX_C(X,__UINT8_C_SUFFIX__)
#define __SEGGER_RTL_UINT8_MAX __UINT8_MAX__
#define __SEGGER_RTL_UINT8_T __UINT8_TYPE__
#define __SEGGER_RTL_UINT8_WIDTH 8
#define __SEGGER_RTL_UINTMAX_C(X) __XINTX_C(X,__UINTMAX_C_SUFFIX__)
#define __SEGGER_RTL_UINTMAX_MAX __UINTMAX_MAX__
#define __SEGGER_RTL_UINTMAX_T __UINTMAX_TYPE__
#define __SEGGER_RTL_UINTMAX_WIDTH __INTMAX_WIDTH__
#define __SEGGER_RTL_UINTPTR_MAX __UINTPTR_MAX__
#define __SEGGER_RTL_UINTPTR_T __UINTPTR_TYPE__
#define __SEGGER_RTL_UINTPTR_WIDTH __INTPTR_WIDTH__
#define __SEGGER_RTL_UINT_FAST128_WIDTH __SEGGER_RTL_UINT128_WIDTH
#define __SEGGER_RTL_UINT_FAST16_MAX __UINT_FAST16_MAX__
#define __SEGGER_RTL_UINT_FAST16_T __UINT_FAST16_TYPE__
#define __SEGGER_RTL_UINT_FAST16_WIDTH __INT_FAST16_WIDTH__
#define __SEGGER_RTL_UINT_FAST32_MAX __UINT_FAST32_MAX__
#define __SEGGER_RTL_UINT_FAST32_T __UINT_FAST32_TYPE__
#define __SEGGER_RTL_UINT_FAST32_WIDTH __INT_FAST32_WIDTH__
#define __SEGGER_RTL_UINT_FAST64_MAX __UINT_FAST64_MAX__
#define __SEGGER_RTL_UINT_FAST64_T __UINT_FAST64_TYPE__
#define __SEGGER_RTL_UINT_FAST64_WIDTH __INT_FAST64_WIDTH__
#define __SEGGER_RTL_UINT_FAST8_MAX __UINT_FAST8_MAX__
#define __SEGGER_RTL_UINT_FAST8_T __UINT_FAST8_TYPE__
#define __SEGGER_RTL_UINT_FAST8_WIDTH __INT_FAST8_WIDTH__
#define __SEGGER_RTL_UINT_LEAST128_WIDTH __SEGGER_RTL_UINT128_WIDTH
#define __SEGGER_RTL_UINT_LEAST16_MAX __UINT_LEAST16_MAX__
#define __SEGGER_RTL_UINT_LEAST16_T __UINT_LEAST16_TYPE__
#define __SEGGER_RTL_UINT_LEAST16_WIDTH __INT_LEAST16_WIDTH__
#define __SEGGER_RTL_UINT_LEAST32_MAX __UINT_LEAST32_MAX__
#define __SEGGER_RTL_UINT_LEAST32_T __UINT_LEAST32_TYPE__
#define __SEGGER_RTL_UINT_LEAST32_WIDTH __INT_LEAST32_WIDTH__
#define __SEGGER_RTL_UINT_LEAST64_MAX __UINT_LEAST64_MAX__
#define __SEGGER_RTL_UINT_LEAST64_T __UINT_LEAST64_TYPE__
#define __SEGGER_RTL_UINT_LEAST64_WIDTH __INT_LEAST64_WIDTH__
#define __SEGGER_RTL_UINT_LEAST8_MAX __UINT_LEAST8_MAX__
#define __SEGGER_RTL_UINT_LEAST8_T __UINT_LEAST8_TYPE__
#define __SEGGER_RTL_UINT_LEAST8_WIDTH __INT_LEAST8_WIDTH__
#define __SEGGER_RTL_UMLAL(lo,hi,x0,x1) do { __asm__("umlal %0, %1, %2, %3" : "+r"(lo), "+r"(hi) : "r"((unsigned)(x0)), "r"((unsigned)(x1)) ); } while (0)
#define __SEGGER_RTL_UMULL(lo,hi,x0,x1) do { __asm__( "umull %0, %1, %2, %3" : "=r"(lo), "=r"(hi) : "r"((unsigned)(x0)), "r"((unsigned)(x1)) ); } while (0)
#define __SEGGER_RTL_UMULL_HI(x0,x1) ({ unsigned long __trash, __hi; __asm__( "umull %0, %1, %2, %3" : "=r"(__trash), "=r"(__hi) : "r"((unsigned)(x0)), "r"((unsigned)(x1)) ); __hi; })
#define __SEGGER_RTL_UMULL_X(x,y) ((__SEGGER_RTL_U64)(__SEGGER_RTL_U32)(x) * (__SEGGER_RTL_U32)(y))
#define __SEGGER_RTL_UNALIGNED_ATTR __attribute__((__aligned__(1)))
#define __SEGGER_RTL_UNALIGNED_RW_FAULTS 0
#define __SEGGER_RTL_UNLIKELY(X) __builtin_expect((X), 0)
#define __SEGGER_RTL_UNREACHABLE() __builtin_unreachable()
#define __SEGGER_RTL_USE_FPU_FOR_IDIV 0
#define __SEGGER_RTL_USE_PARA(Para) (void)Para
#define __SEGGER_RTL_VA_LIST __builtin_va_list
#define __SEGGER_RTL_VERSION 42601
#define __SEGGER_RTL_WCHAR_MAX __WCHAR_MAX__
#define __SEGGER_RTL_WCHAR_MIN (-2147483647L - 1)
#define __SEGGER_RTL_WCHAR_T __WCHAR_TYPE__
#define __SEGGER_RTL_WCHAR_WIDTH __WCHAR_WIDTH__
#define __SEGGER_RTL_WINT_MAX __WINT_MAX__
#define __SEGGER_RTL_WINT_MIN (-__SEGGER_RTL_WINT_MAX - 1)
#define __SEGGER_RTL_WINT_T __WINT_TYPE__
#define __SEGGER_RTL_WINT_WIDTH __WINT_WIDTH__
#define __SEGGER_RTL_WORD unsigned
#define __SEGGER_RTL_WR_PARTIAL_WORD(A,W,N) __SEGGER_RTL_WR_PARTIAL_WORD_func(A, W, N)
#define __SEGGER_RTL_WR_WORD(A,W) __SEGGER_RTL_WR_WORD_func(A, W)
#define __SEGGER_RTL_X_assert __aeabi_assert
#define __SEGGER_RTL_X_errno_addr __aeabi_errno_addr
#define __SEGGER_RTL_ZBYTE_CHECK(X) __SEGGER_RTL_ZBYTE_CHECK_func(X)
#define __SEGGER_RTL_ZBYTE_INDEX(X) __SEGGER_RTL_ZBYTE_INDEX_func(X)
#define __SES_ARM 1
#define __SES_VERSION 81400
#define __SHRT_MAX__ 32767
#define __SHRT_WIDTH__ 16
#define __SIG_ATOMIC_MAX__ 2147483647
#define __SIG_ATOMIC_WIDTH__ 32
#define __SIZEOF_DOUBLE__ 8
#define __SIZEOF_FLOAT__ 4
#define __SIZEOF_INT__ 4
#define __SIZEOF_LONG_DOUBLE__ 8
#define __SIZEOF_LONG_LONG__ 8
#define __SIZEOF_LONG__ 4
#define __SIZEOF_POINTER__ 4
#define __SIZEOF_PTRDIFF_T__ 4
#define __SIZEOF_SHORT__ 2
#define __SIZEOF_SIZE_T__ 4
#define __SIZEOF_WCHAR_T__ 4
#define __SIZEOF_WINT_T__ 4
#define __SIZE_FMTX__ "X"
#define __SIZE_FMTo__ "o"
#define __SIZE_FMTu__ "u"
#define __SIZE_FMTx__ "x"
#define __SIZE_MAX__ 4294967295U
#define __SIZE_TYPE__ unsigned int
#define __SIZE_WIDTH__ 32
#define __STDC_HOSTED__ 1
#define __STDC_UTF_16__ 1
#define __STDC_UTF_32__ 1
#define __STDC_VERSION__ 199901L
#define __STDC__ 1
#define __THUMBEL__ 1
#define __THUMB_INTERWORK__ 1
#define __UINT16_C_SUFFIX__ 
#define __UINT16_FMTX__ "hX"
#define __UINT16_FMTo__ "ho"
#define __UINT16_FMTu__ "hu"
#define __UINT16_FMTx__ "hx"
#define __UINT16_MAX__ 65535
#define __UINT16_TYPE__ unsigned short
#define __UINT32_C_SUFFIX__ U
#define __UINT32_FMTX__ "X"
#define __UINT32_FMTo__ "o"
#define __UINT32_FMTu__ "u"
#define __UINT32_FMTx__ "x"
#define __UINT32_MAX__ 4294967295U
#define __UINT32_TYPE__ unsigned int
#define __UINT64_C_SUFFIX__ ULL
#define __UINT64_FMTX__ "llX"
#define __UINT64_FMTo__ "llo"
#define __UINT64_FMTu__ "llu"
#define __UINT64_FMTx__ "llx"
#define __UINT64_MAX__ 18446744073709551615ULL
#define __UINT64_TYPE__ long long unsigned int
#define __UINT8_C_SUFFIX__ 
#define __UINT8_FMTX__ "hhX"
#define __UINT8_FMTo__ "hho"
#define __UINT8_FMTu__ "hhu"
#define __UINT8_FMTx__ "hhx"
#define __UINT8_MAX__ 255
#define __UINT8_TYPE__ unsigned char
#define __UINTMAX_C_SUFFIX__ ULL
#define __UINTMAX_FMTX__ "llX"
#define __UINTMAX_FMTo__ "llo"
#define __UINTMAX_FMTu__ "llu"
#define __UINTMAX_FMTx__ "llx"
#define __UINTMAX_MAX__ 18446744073709551615ULL
#define __UINTMAX_TYPE__ long long unsigned int
#define __UINTMAX_WIDTH__ 64
#define __UINTPTR_FMTX__ "X"
#define __UINTPTR_FMTo__ "o"
#define __UINTPTR_FMTu__ "u"
#define __UINTPTR_FMTx__ "x"
#define __UINTPTR_MAX__ 4294967295U
#define __UINTPTR_TYPE__ unsigned int
#define __UINTPTR_WIDTH__ 32
#define __UINT_FAST16_FMTX__ "hX"
#define __UINT_FAST16_FMTo__ "ho"
#define __UINT_FAST16_FMTu__ "hu"
#define __UINT_FAST16_FMTx__ "hx"
#define __UINT_FAST16_MAX__ 65535
#define __UINT_FAST16_TYPE__ unsigned short
#define __UINT_FAST32_FMTX__ "X"
#define __UINT_FAST32_FMTo__ "o"
#define __UINT_FAST32_FMTu__ "u"
#define __UINT_FAST32_FMTx__ "x"
#define __UINT_FAST32_MAX__ 4294967295U
#define __UINT_FAST32_TYPE__ unsigned int
#define __UINT_FAST64_FMTX__ "llX"
#define __UINT_FAST64_FMTo__ "llo"
#define __UINT_FAST64_FMTu__ "llu"
#define __UINT_FAST64_FMTx__ "llx"
#define __UINT_FAST64_MAX__ 18446744073709551615ULL
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __UINT_FAST8_FMTX__ "hhX"
#define __UINT_FAST8_FMTo__ "hho"
#define __UINT_FAST8_FMTu__ "hhu"
#define __UINT_FAST8_FMTx__ "hhx"
#define __UINT_FAST8_MAX__ 255
#define __UINT_FAST8_TYPE__ unsigned char
#define __UINT_LEAST16_FMTX__ "hX"
#define __UINT_LEAST16_FMTo__ "ho"
#define __UINT_LEAST16_FMTu__ "hu"
#define __UINT_LEAST16_FMTx__ "hx"
#define __UINT_LEAST16_MAX__ 65535
#define __UINT_LEAST16_TYPE__ unsigned short
#define __UINT_LEAST32_FMTX__ "X"
#define __UINT_LEAST32_FMTo__ "o"
#define __UINT_LEAST32_FMTu__ "u"
#define __UINT_LEAST32_FMTx__ "x"
#define __UINT_LEAST32_MAX__ 4294967295U
#define __UINT_LEAST32_TYPE__ unsigned int
#define __UINT_LEAST64_FMTX__ "llX"
#define __UINT_LEAST64_FMTo__ "llo"
#define __UINT_LEAST64_FMTu__ "llu"
#define __UINT_LEAST64_FMTx__ "llx"
#define __UINT_LEAST64_MAX__ 18446744073709551615ULL
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __UINT_LEAST8_FMTX__ "hhX"
#define __UINT_LEAST8_FMTo__ "hho"
#define __UINT_LEAST8_FMTu__ "hhu"
#define __UINT_LEAST8_FMTx__ "hhx"
#define __UINT_LEAST8_MAX__ 255
#define __UINT_LEAST8_TYPE__ unsigned char
#define __USER_LABEL_PREFIX__ 
#define __VERSION__ "SEGGER C/C++ compiler version 18.1.2"
#define __VFP_FP__ 1
#define __Vectors _vectors
#define __WCHAR_MAX__ 4294967295U
#define __WCHAR_TYPE__ unsigned int
#define __WCHAR_UNSIGNED__ 1
#define __WCHAR_WIDTH__ 32
#define __WIDTH_DOUBLE 2
#define __WIDTH_FLOAT 1
#define __WIDTH_INT 0
#define __WIDTH_LONG 1
#define __WIDTH_LONG_LONG 2
#define __WIDTH_NONE 0
#define __WINT_MAX__ 2147483647
#define __WINT_TYPE__ int
#define __WINT_WIDTH__ 32
#define __XINTX_C(X,S) __CONCAT1(X, S)
#define __arm 1
#define __arm__ 1
#define __clang__ 1
#define __clang_literal_encoding__ "UTF-8"
#define __clang_major__ 18
#define __clang_minor__ 1
#define __clang_patchlevel__ 6
#define __clang_version__ "18.1.2 (svn://svnserver.segger.local/Toolchain/tags/Compiler/scc-18.1.2)"
#define __clang_wide_literal_encoding__ "UTF-32"
#define __llvm__ 1
#define __thumb2__ 1
#define __thumb__ 1
#define voidRoutine OS_ROUTINE_VOID

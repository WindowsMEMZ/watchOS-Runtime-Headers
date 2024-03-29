//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 250.60.2.0.0
//
#ifndef MXMResourceProbe_h
#define MXMResourceProbe_h
@import Foundation;

#include "MXMProbe.h"

@class NSThread;

@interface MXMResourceProbe : MXMProbe

@property (retain) NSThread *pollingThread;

/* class methods */
+ (int)_processIdentifierWithProcessName:(const char *)name error:(id *)error;
+ (id)probe;

/* instance methods */
- (id)init;
- (void)_buildData:(id)data timestamp:(unsigned long long)timestamp rusage:(struct rusage_info_v6 { unsigned char x0[16] unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned long long x39; unsigned long long x40; unsigned long long x41; unsigned long long x42; unsigned long long x43[14] } *)rusage;
- (void)_buildData:(id)data timestamp:(unsigned long long)timestamp taskinfo:(struct proc_taskinfo { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; } *)taskinfo;
- (void)_buildData:(id)data timestamp:(unsigned long long)timestamp mach_space_basicinfo:(struct ipc_info_space_basic { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[2] } *)mach_space_basicinfo;
- (void)_beginUpdates;
- (void)_stopUpdates;
- (id)sampleWithTimeout:(double)timeout stopReason:(unsigned long long *)reason;
- (BOOL)performPreIterationActions;
- (id)_pollMainBody;
- (void)_pollAllProcesses:(id)processes;
- (void)_pollProcessWithData:(id)data pid:(int)pid;
- (void)_pollProcessNetworkingStatsWithData:(id)data pid:(int)pid task:(unsigned int)task;
- (void)_pollProcessResourceUsageWithData:(id)data pid:(int)pid;
- (void)_pollTaskMachPortInformation:(id)information task:(unsigned int)task;
- (void)_pollBasicTaskInformation:(id)information pid:(int)pid;
@end

#endif /* MXMResourceProbe_h */

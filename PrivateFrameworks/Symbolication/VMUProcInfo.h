//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef VMUProcInfo_h
#define VMUProcInfo_h
@import Foundation;

#include "VMUTask.h"

@class NSArray, NSString;

@interface VMUProcInfo : NSObject {
  /* instance variables */
  unsigned int _task;
  VMUTask *_vmuTask;
  NSString *_name;
  NSArray *_arguments;
  NSArray *_envVars;
  NSString *_procTableName;
  NSString *_realAppName;
  NSString *_requestedAppName;
  NSString *_firstArg;
  int _pid;
  int _ppid;
  struct timeval { long long tv_sec; int tv_usec; } _startTime;
  BOOL _isZombie;
}

@property (readonly, nonatomic) BOOL shouldAnalyzeWithCorpse;
@property (readonly, nonatomic) BOOL isSemiCriticalProcess;
@property (readonly, nonatomic) BOOL isSemiCriticalProcessWithNoTimeLimit;

/* class methods */
+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(int)running;
+ (int)processParentId:(int)id;

/* instance methods */
- (id)initWithPid:(int)pid;
- (id)initWithTask:(unsigned int)task;
- (id)initWithVMUTask:(id)vmutask;
- (void)dealloc;
- (struct timeval { long long x0; int x1; })startTime;
- (id)procTableName;
- (id)_infoFromCommandLine:(int)line;
- (id)realAppName;
- (id)requestedAppName;
- (id)firstArgument;
- (id)arguments;
- (id)envVars;
- (id)valueForEnvVar:(id)var;
- (id)userAppName;
- (id)name;
- (id)description;
- (int)pid;
- (int)ppid;
- (unsigned int)task;
- (void)update;
- (BOOL)isApp;
- (BOOL)isMachO;
- (BOOL)isCFM;
- (int)cpuType;
- (BOOL)isNative;
- (unsigned int)platform;
- (id)platformName;
- (BOOL)isRunning;
- (BOOL)isZombie;
- (BOOL)terminate;
- (BOOL)signal:(int)signal;
- (BOOL)isEqual:(id)equal;
- (long long)compare:(id)compare;
- (long long)compareByName:(id)name;
- (long long)compareByUserAppName:(id)name;
- (unsigned long long)hash;
@end

#endif /* VMUProcInfo_h */

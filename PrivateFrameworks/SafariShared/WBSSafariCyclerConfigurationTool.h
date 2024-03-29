//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSSafariCyclerConfigurationTool_h
#define WBSSafariCyclerConfigurationTool_h
@import Foundation;

#include "WBSCyclerServiceProxy.h"

@interface WBSSafariCyclerConfigurationTool : NSObject {
  /* instance variables */
  WBSCyclerServiceProxy *_cyclerProxy;
}

/* instance methods */
- (id)init;
- (void)run;
- (id)_supportedCommands;
- (id)_commandWithName:(id)name;
- (void)_printUsage;
- (void)_exitWithError:(id)error;
- (id)_errorWithCode:(long long)code;
- (id)_descriptionForErrorCode:(long long)code;
- (void)_runTest:(id)test;
- (void)_startCycler:(id)cycler;
- (void)_stopCycler:(id)cycler;
- (void)_resumeCycler:(id)cycler;
- (void)_setConfigurationOption:(id)option;
- (void)_sendRequestToTest:(id)test;
- (void)_configureDevice:(id)device;
- (void)_fetchStatus:(id)status;
- (void)_fetchLogs:(id)logs;
- (void)_fetchLastError:(id)error;
- (void)_waitForCyclerToFinish:(id)finish;
@end

#endif /* WBSSafariCyclerConfigurationTool_h */

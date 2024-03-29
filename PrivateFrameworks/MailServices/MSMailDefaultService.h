//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MSMailDefaultService_h
#define MSMailDefaultService_h
@import Foundation;

#include "MSService.h"

@interface MSMailDefaultService : MSService {
  /* instance variables */
  BOOL _shouldLaunch;
}

@property (nonatomic) BOOL shouldLaunchMobileMail;

/* instance methods */
- (id)init;
- (id)_createServiceOnQueue:(id)queue;
- (BOOL)_launchMobileMailSuspendedError:(id *)error;
- (id)_handleMessageSendFailure:(id)failure message:(id)message messageIndex:(long long)index context:(inout id *)context;
- (BOOL)_shouldSimulate;
@end

#endif /* MSMailDefaultService_h */

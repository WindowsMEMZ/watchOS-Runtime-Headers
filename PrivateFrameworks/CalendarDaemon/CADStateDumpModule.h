//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADStateDumpModule_h
#define CADStateDumpModule_h
@import Foundation;

#include "CADModule-Protocol.h"

@class NSString;

@interface CADStateDumpModule : NSObject<CADModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)activate;
- (void)deactivate;
- (void)registerForStateCapture;
- (id)_storeTypeStringFromType:(int)type;
- (void)receivedNotificationNamed:(id)named;
- (void)didRegisterForAlarms;
- (void)receivedAlarmNamed:(id)named;
- (void)protectedDataDidBecomeAvailable;
@end

#endif /* CADStateDumpModule_h */

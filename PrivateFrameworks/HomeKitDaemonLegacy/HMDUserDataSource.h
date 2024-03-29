//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDUserDataSource_h
#define HMDUserDataSource_h
@import Foundation;

#include "HMDUserDataSource-Protocol.h"

@class NSString;

@interface HMDUserDataSource : NSObject<HMDUserDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)userDataControllerWithDelegate:(id)delegate dataSource:(id)source queue:(id)queue userID:(id)id homeID:(id)id sharedSettingsController:(id)controller privateSettingsController:(id)controller isCurrentUser:(BOOL)user;
- (id)userDataBackingStoreControllerWithDelegate:(id)delegate queue:(id)queue zoneName:(id)name shareMessenger:(id)messenger;
- (BOOL)isCurrentUser:(id)user;
@end

#endif /* HMDUserDataSource_h */

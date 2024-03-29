//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef _IXDemoteToPlaceholderDelegate_h
#define _IXDemoteToPlaceholderDelegate_h
@import Foundation;

#include "IXAppInstallCoordinatorObserver-Protocol.h"
#include "IXDemotingAppInstallCoordinator.h"

@class NSString;

@interface _IXDemoteToPlaceholderDelegate : NSObject<IXAppInstallCoordinatorObserver>

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) IXDemotingAppInstallCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)coordinatorDidCompleteSuccessfully:(id)successfully forApplicationRecord:(id)record;
- (void)coordinator:(id)coordinator canceledWithReason:(id)reason client:(unsigned long long)client;
@end

#endif /* _IXDemoteToPlaceholderDelegate_h */

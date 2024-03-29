//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLSchoolModeConfiguration_h
#define SCLSchoolModeConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString, NSUUID, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue, SCLSchoolModeDelegate;

@interface SCLSchoolModeConfiguration : NSObject<NSCopying>

@property (retain, nonatomic) NSXPCListenerEndpoint *testingEndpoint;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (weak, nonatomic) NSObject<SCLSchoolModeDelegate> *delegate;
@property (copy, nonatomic) NSUUID *pairingID;
@property (nonatomic) BOOL loadsSynchronously;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SCLSchoolModeConfiguration_h */

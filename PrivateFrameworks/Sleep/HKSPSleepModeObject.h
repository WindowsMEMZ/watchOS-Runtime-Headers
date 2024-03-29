//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPSleepModeObject_h
#define HKSPSleepModeObject_h
@import Foundation;

#include "HKSPSyncAnchor-Protocol.h"
#include "HKSPXPCObject-Protocol.h"

@class NSString;

@interface HKSPSleepModeObject : NSObject<HKSPXPCObject>

@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *syncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSleepMode:(long long)mode syncAnchor:(id)anchor;
- (id)objectWithSyncAnchor:(id)anchor;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HKSPSleepModeObject_h */

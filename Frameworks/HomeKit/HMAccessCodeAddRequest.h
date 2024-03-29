//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMAccessCodeAddRequest_h
#define HMAccessCodeAddRequest_h
@import Foundation;

#include "HMAccessCodeModificationRequest-Protocol.h"
#include "HMAccessCodeValue.h"
#include "HMAccessory.h"

@class NSString;

@interface HMAccessCodeAddRequest : NSObject<HMAccessCodeModificationRequest>

@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (readonly) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccessCodeValue:(id)value accessory:(id)accessory;
- (id)createAccessCodeAddRequestValue;
@end

#endif /* HMAccessCodeAddRequest_h */

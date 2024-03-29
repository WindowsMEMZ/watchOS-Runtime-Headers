//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBLocalZoneConfiguration_h
#define HMBLocalZoneConfiguration_h
@import Foundation;

#include "HMFObject.h"
#include "HMBLocalZoneDelegate-Protocol.h"
#include "HMBModelContainer.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@interface HMBLocalZoneConfiguration : HMFObject<NSCopying, NSMutableCopying>

@property (nonatomic) BOOL readOnly;
@property (nonatomic) BOOL createIfNeeded;
@property (retain, nonatomic) HMBModelContainer *modelContainer;
@property (weak, nonatomic) NSObject<HMBLocalZoneDelegate> *delegate;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMBLocalZoneConfiguration_h */

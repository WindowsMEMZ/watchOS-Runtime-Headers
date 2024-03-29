//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBLocalDatabaseConfiguration_h
#define HMBLocalDatabaseConfiguration_h
@import Foundation;

#include "HMFObject.h"
#include "HMBModelContainer.h"
#include "NSCopying-Protocol.h"

@interface HMBLocalDatabaseConfiguration : HMFObject<NSCopying>

@property (nonatomic) BOOL readOnly;
@property (retain, nonatomic) HMBModelContainer *modelContainer;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMBLocalDatabaseConfiguration_h */

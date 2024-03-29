//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRChannelClusterLineupInfoStruct_h
#define MTRChannelClusterLineupInfoStruct_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface MTRChannelClusterLineupInfoStruct : NSObject<NSCopying>

@property (copy, nonatomic) NSString *operatorName;
@property (copy, nonatomic) NSString *lineupName;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSNumber *lineupInfoType;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* MTRChannelClusterLineupInfoStruct_h */

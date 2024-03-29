//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXDataPointValue_h
#define AXDataPointValue_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface AXDataPointValue : NSObject<NSCopying>

@property (nonatomic) double number;
@property (copy, nonatomic) NSString *category;

/* class methods */
+ (id)valueWithNumber:(double)number;
+ (id)valueWithCategory:(id)category;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* AXDataPointValue_h */

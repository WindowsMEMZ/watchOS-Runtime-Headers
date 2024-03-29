//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRColorComponents_h
#define MRColorComponents_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface MRColorComponents : NSObject<NSCopying>

@property (readonly, nonatomic) _MRColorProtobuf *protobuf;
@property (nonatomic) float red;
@property (nonatomic) float green;
@property (nonatomic) float blue;
@property (nonatomic) float alpha;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* MRColorComponents_h */

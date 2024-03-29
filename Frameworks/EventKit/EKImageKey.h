//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKImageKey_h
#define EKImageKey_h
@import Foundation;

#include "EKObjectID.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface EKImageKey : NSObject<NSCopying>

@property (readonly, nonatomic) EKObjectID *sourceID;
@property (readonly, nonatomic) NSString *identifier;

/* instance methods */
- (id)initWithSourceID:(id)id identifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* EKImageKey_h */

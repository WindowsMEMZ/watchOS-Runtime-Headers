//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKBasePlayer_h
#define GKBasePlayer_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface GKBasePlayer : NSObject<NSCopying>

@property (readonly, retain, @dynamic, nonatomic) NSString *playerID;
@property (readonly, @dynamic, nonatomic) NSString *displayName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* GKBasePlayer_h */

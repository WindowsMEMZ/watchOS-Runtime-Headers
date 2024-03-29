//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTAppDataUsage_h
#define CTAppDataUsage_h
@import Foundation;

#include "CTDataUsed.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CTAppDataUsage : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) CTDataUsed *used;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init:(id)init withDisplayName:(id)name andUsage:(id)usage;
- (id)usage;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CTAppDataUsage_h */

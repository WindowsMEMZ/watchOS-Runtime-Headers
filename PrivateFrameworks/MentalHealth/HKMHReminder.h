//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMHReminder_h
#define HKMHReminder_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDateComponents;

@interface HKMHReminder : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, nonatomic) BOOL isEnabled;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDateComponents:(id)components isEnabled:(BOOL)enabled;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HKMHReminder_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLFindMyAccessoryWildConfiguration_h
#define CLFindMyAccessoryWildConfiguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate;

@interface CLFindMyAccessoryWildConfiguration : NSObject<NSSecureCoding>

@property (readonly) NSDate *desiredKeyRollDate;
@property (readonly) unsigned int keyRollInterval;
@property (readonly) unsigned short keysRemaining;
@property (readonly) unsigned short keyCount;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithDesiredNextKeyRollDate:(id)date keyRollInterval:(unsigned int)interval keysRemainingInWildPeriod:(unsigned short)period wildPeriodKeyCount:(unsigned short)count;
- (void)dealloc;
- (id)encodeConfiguration;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CLFindMyAccessoryWildConfiguration_h */

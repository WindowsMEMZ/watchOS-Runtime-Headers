//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 421.2.0.0.0
//
#ifndef FMDSecureLocationContext_h
#define FMDSecureLocationContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface FMDSecureLocationContext : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *findMyId;
@property (copy, nonatomic) NSString *mode;
@property (nonatomic) BOOL stopMonitoringActivePolicy;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* FMDSecureLocationContext_h */

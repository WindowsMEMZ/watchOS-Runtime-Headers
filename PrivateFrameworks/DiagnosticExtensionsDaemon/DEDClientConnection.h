//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDClientConnection_h
#define DEDClientConnection_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSNumber;

@interface DEDClientConnection : NSObject<NSSecureCoding>

@property (nonatomic) NSNumber *pid;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* DEDClientConnection_h */

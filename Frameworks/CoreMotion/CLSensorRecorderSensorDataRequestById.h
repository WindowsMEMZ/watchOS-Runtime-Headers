//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLSensorRecorderSensorDataRequestById_h
#define CLSensorRecorderSensorDataRequestById_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface CLSensorRecorderSensorDataRequestById : NSObject<NSSecureCoding>

@property unsigned long long identifier;
@property unsigned long long metaIdentifier;
@property int dataType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CLSensorRecorderSensorDataRequestById_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1033.64.3.0.0
//
#ifndef TransparencyCloudDevice_h
#define TransparencyCloudDevice_h
@import Foundation;

#include "KTLoggableData.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface TransparencyCloudDevice : NSObject<NSSecureCoding>

@property (retain) KTLoggableData *loggableData;
@property (retain) NSString *state;
@property (retain) NSString *serialNumber;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* TransparencyCloudDevice_h */

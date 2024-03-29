//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPFirmwareUpdateStateResult_h
#define SPFirmwareUpdateStateResult_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate, NSError, NSString;

@interface SPFirmwareUpdateStateResult : NSObject<NSSecureCoding>

@property (nonatomic) long long state;
@property (retain, nonatomic) NSDate *stateDate;
@property (retain, nonatomic) NSString *currentSystemVersion;
@property (retain, nonatomic) NSError *error;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)firmwareUpdateState;
- (id)dictionary;
- (id)description;
@end

#endif /* SPFirmwareUpdateStateResult_h */

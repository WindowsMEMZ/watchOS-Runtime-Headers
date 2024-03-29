//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHSignatureMetrics_h
#define SHSignatureMetrics_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate;

@interface SHSignatureMetrics : NSObject<NSSecureCoding, NSCopying>

@property (nonatomic) long long audioRecordingSource;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) double sessionDuration;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSessionStartDate:(id)date;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SHSignatureMetrics_h */

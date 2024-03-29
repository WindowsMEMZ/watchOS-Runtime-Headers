//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 83.0.0.0.0
//
#ifndef SACrashDetectionEvent_h
#define SACrashDetectionEvent_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class CLLocation, NSDate;

@interface SACrashDetectionEvent : NSObject<NSSecureCoding, NSCopying>

@property (nonatomic) BOOL isNotified;
@property (readonly, nonatomic) double elapsed;
@property (readonly, nonatomic) NSDate *timeOfResolution;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long response;
@property (readonly, nonatomic) CLLocation *location;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (double)crashDetectionEventTimeout;

/* instance methods */
- (id)initWithTimeOfDetection:(id)detection timeOfResolution:(id)resolution response:(long long)response location:(id)location;
- (id)initWithTimeOfDetection:(id)detection timeOfResolution:(id)resolution response:(long long)response location:(id)location isNotified:(BOOL)notified;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* SACrashDetectionEvent_h */

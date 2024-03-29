//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDUserPresenceUpdateReason_h
#define HMDUserPresenceUpdateReason_h
@import Foundation;

@class NSNumber;

@interface HMDUserPresenceUpdateReason : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) unsigned long long value;

/* class methods */
+ (id)reasonWithValue:(unsigned long long)value;
+ (id)reasonWithNumber:(id)number;
+ (id)reasonWithMessage:(id)message;
+ (id)reasonWithDict:(id)dict;
+ (id)reasonWithCoder:(id)coder;

/* instance methods */
- (id)initWithNumber:(id)number;
- (void)addToCoder:(id)coder;
- (void)addToPayload:(id)payload;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* HMDUserPresenceUpdateReason_h */

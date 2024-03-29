//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef SMActiveSessionDetails_h
#define SMActiveSessionDetails_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSString, NSUUID;

@interface SMActiveSessionDetails : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) NSUUID *activeDeviceIdentifier;
@property (readonly, nonatomic) NSDate *cacheReleasedDate;
@property (readonly, nonatomic) NSString *scheduledSendGUID;
@property (readonly, nonatomic) NSArray *receiverHandles;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSessionID:(id)id activeDeviceIdentifier:(id)identifier cacheReleasedDate:(id)date scheduledSendGUID:(id)guid receiverHandles:(id)handles;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* SMActiveSessionDetails_h */

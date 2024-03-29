//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATSessionMessageResumed_h
#define CATSessionMessageResumed_h
@import Foundation;

#include "CATSessionMessage.h"

@class NSArray, NSDictionary, NSUUID;

@interface CATSessionMessageResumed : CATSessionMessage

@property (copy, nonatomic) NSUUID *sessionUUID;
@property (copy, nonatomic) NSDictionary *serverUserInfo;
@property (copy, nonatomic) NSArray *pendingRemoteTaskUUIDs;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSessionUUID:(id)uuid;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CATSessionMessageResumed_h */

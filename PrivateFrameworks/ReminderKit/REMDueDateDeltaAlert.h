//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMDueDateDeltaAlert_h
#define REMDueDateDeltaAlert_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "REMDueDateDeltaInterval.h"
#include "REMObjectID.h"
#include "REMObjectIDProviding-Protocol.h"

@class NSDate, NSUUID;

@interface REMDueDateDeltaAlert : NSObject<NSSecureCoding, NSCopying, REMObjectIDProviding>

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) REMObjectID *reminderID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMDueDateDeltaInterval *dueDateDelta;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *acknowledgedDate;
@property (readonly, nonatomic) long long minimumSupportedAppVersion;
@property (readonly, nonatomic) REMObjectID *remObjectID;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)uuid;
+ (id)cdEntityName;

/* instance methods */
- (id)initWithIdentifier:(id)identifier reminderID:(id)id accountID:(id)id dueDateDelta:(id)delta creationDate:(id)date acknowledgedDate:(id)date minimumSupportedAppVersion:(long long)version;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isContentEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* REMDueDateDeltaAlert_h */

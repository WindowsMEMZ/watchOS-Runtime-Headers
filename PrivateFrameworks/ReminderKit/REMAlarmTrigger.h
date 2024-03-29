//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMAlarmTrigger_h
#define REMAlarmTrigger_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "REMObjectID.h"
#include "REMObjectIDProviding-Protocol.h"

@interface REMAlarmTrigger : NSObject<REMObjectIDProviding, NSSecureCoding>

@property (retain, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) BOOL isTemporal;
@property (readonly, nonatomic) REMObjectID *remObjectID;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)uuid;
+ (id)cdEntityName;

/* instance methods */
- (id)initWithObjectID:(id)id;
- (id)initWithAlarmTrigger:(id)trigger objectID:(id)id;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isContentEqual:(id)equal;
- (id)_deepCopy;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* REMAlarmTrigger_h */

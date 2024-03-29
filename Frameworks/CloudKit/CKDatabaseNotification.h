//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDatabaseNotification_h
#define CKDatabaseNotification_h
@import Foundation;

#include "CKNotification.h"
#include "CKRecordZoneID.h"
#include "NSSecureCoding-Protocol.h"

@interface CKDatabaseNotification : CKNotification<NSSecureCoding>

@property (nonatomic) long long databaseScope;
@property (copy, nonatomic) CKRecordZoneID *recordZoneID;

/* class methods */
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRemoteNotificationDictionary:(id)dictionary;
- (id)CKPropertiesDescription;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CKDatabaseNotification_h */

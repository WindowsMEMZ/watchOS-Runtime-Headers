//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKSyncEnginePendingRecordZoneChange_h
#define CKSyncEnginePendingRecordZoneChange_h
@import Foundation;

#include "CKPropertiesDescription-Protocol.h"
#include "CKRecordID.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CKSyncEnginePendingRecordZoneChange : NSObject<CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)recordChangesWithOppositeTypeFromRecordChanges:(id)changes;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRecordID:(id)id type:(long long)type;
- (id)redactedDescription;
- (BOOL)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;
- (void)CKDescribePropertiesUsing:(id)using;
- (BOOL)isEqual:(id)equal;
- (id)oppositeTypeChange;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CKSyncEnginePendingRecordZoneChange_h */

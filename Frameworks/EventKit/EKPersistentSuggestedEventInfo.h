//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKPersistentSuggestedEventInfo_h
#define EKPersistentSuggestedEventInfo_h
@import Foundation;

#include "EKPersistentObject.h"
#include "EKPersistentEvent.h"

@class NSDate, NSString;

@interface EKPersistentSuggestedEventInfo : EKPersistentObject

@property (@dynamic, nonatomic) EKPersistentEvent *owner;
@property (copy, @dynamic, nonatomic) NSString *opaqueKey;
@property (copy, @dynamic, nonatomic) NSString *uniqueKey;
@property (@dynamic, nonatomic) unsigned long long changedFields;
@property (@dynamic, nonatomic) BOOL changesAcknowledged;
@property (copy, @dynamic, nonatomic) NSDate *timestamp;
@property (copy, @dynamic, nonatomic) NSString *extractionGroupIdentifier;

/* class methods */
+ (id)suggestedEventInfoWithOpaqueKey:(id)key uniqueKey:(id)key;
+ (Class)meltedClass;
+ (id)relations;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (int)entityType;
- (id)timestampAsDate;
- (void)setTimestampAsDate:(id)date;
- (id)semanticIdentifier;
@end

#endif /* EKPersistentSuggestedEventInfo_h */

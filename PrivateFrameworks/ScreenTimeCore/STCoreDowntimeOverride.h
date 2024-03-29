//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STCoreDowntimeOverride_h
#define STCoreDowntimeOverride_h
@import Foundation;

#include "NSManagedObject.h"
#include "STBlueprint.h"
#include "STSerializableManagedObject-Protocol.h"
#include "STSyncableSubObject-Protocol.h"

@class NSDate, NSString;

@interface STCoreDowntimeOverride : NSManagedObject<STSerializableManagedObject, STSyncableSubObject>

@property (@dynamic, nonatomic) long long type;
@property (@dynamic, nonatomic) long long state;
@property (copy, @dynamic) NSDate *creationDate;
@property (copy, @dynamic) NSString *calendarIdentifier;
@property (copy, @dynamic) NSDate *endDate;
@property (@dynamic, nonatomic) BOOL isTombstoned;
@property (retain, @dynamic) STBlueprint *downtime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<STSerializableManagedObject> *syncableRootObject;

/* instance methods */
- (BOOL)updateWithDictionaryRepresentation:(id)representation;
- (id)dictionaryRepresentation;
@end

#endif /* STCoreDowntimeOverride_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTSyncSnooze_h
#define MTSyncSnooze_h
@import Foundation;

#include "MTProtoBufferSerializable-Protocol.h"
#include "MTSerializable-Protocol.h"
#include "MTSyncable-Protocol.h"
#include "SYChange-Protocol.h"

@class NSDate, NSString;

@interface MTSyncSnooze : NSObject<MTProtoBufferSerializable, MTSerializable, SYChange, MTSyncable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly, nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *snoozeDate;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) float syncVersion;
@property (readonly, nonatomic) unsigned long long syncType;
@property (readonly, nonatomic) NSString *syncIdentifier;
@property (readonly, nonatomic) NSDate *syncDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)deserialize:(id)deserialize;
+ (BOOL)supportsSecureCoding;
+ (id)syncSnoozeOfObjectWithIdentifier:(id)identifier snoozeDate:(id)date date:(id)date;
+ (id)syncSnoozeOfObjectWithIdentifier:(id)identifier snoozeDate:(id)date date:(id)date version:(float)version;

/* instance methods */
- (id)serialize;
- (id)initWithCoder:(id)coder;
- (id)initFromDeserializer:(id)deserializer;
- (void)encodeWithCoder:(id)coder;
- (void)serializeWithSerializer:(id)serializer;
- (id)initWithSnoozedObjectIdentifier:(id)identifier snoozeDate:(id)date date:(id)date version:(float)version;
- (BOOL)isEqual:(id)equal;
- (BOOL)conflicts:(id)conflicts;
- (id)preferred:(id)preferred;
@end

#endif /* MTSyncSnooze_h */

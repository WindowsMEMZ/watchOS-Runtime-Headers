//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBStartAudioCallIntent_h
#define _INPBStartAudioCallIntent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBIntentMetadata.h"
#include "_INPBStartAudioCallIntent-Protocol.h"
#include "_INPBStartCallRequestMetadata.h"

@class NSArray, NSString;

@interface _INPBStartAudioCallIntent : PBCodable<_INPBStartAudioCallIntent, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 audioRoute; unsigned int x :1 destinationType; unsigned int x :1 preferredCallProvider; unsigned int x :1 recordTypeForRedialing; unsigned int x :1 ttyType; } _has;
}

@property (nonatomic) int audioRoute;
@property (nonatomic) BOOL hasAudioRoute;
@property (retain, nonatomic) _INPBStartCallRequestMetadata *callRequestMetadata;
@property (readonly, nonatomic) BOOL hasCallRequestMetadata;
@property (copy, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) unsigned long long contactsCount;
@property (nonatomic) int destinationType;
@property (nonatomic) BOOL hasDestinationType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) BOOL hasPreferredCallProvider;
@property (nonatomic) int recordTypeForRedialing;
@property (nonatomic) BOOL hasRecordTypeForRedialing;
@property (copy, nonatomic) NSArray *targetContacts;
@property (readonly, nonatomic) unsigned long long targetContactsCount;
@property (nonatomic) int ttyType;
@property (nonatomic) BOOL hasTtyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)contactType;
+ (Class)targetContactsType;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)audioRouteAsString:(int)string;
- (int)StringAsAudioRoute:(id)route;
- (void)clearContacts;
- (void)addContact:(id)contact;
- (id)contactAtIndex:(unsigned long long)index;
- (id)destinationTypeAsString:(int)string;
- (int)StringAsDestinationType:(id)type;
- (id)preferredCallProviderAsString:(int)string;
- (int)StringAsPreferredCallProvider:(id)provider;
- (id)recordTypeForRedialingAsString:(int)string;
- (int)StringAsRecordTypeForRedialing:(id)redialing;
- (void)clearTargetContacts;
- (void)addTargetContacts:(id)contacts;
- (id)targetContactsAtIndex:(unsigned long long)index;
- (id)ttyTypeAsString:(int)string;
- (int)StringAsTTYType:(id)ttytype;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBStartAudioCallIntent_h */

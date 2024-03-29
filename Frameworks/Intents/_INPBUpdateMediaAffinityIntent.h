//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBUpdateMediaAffinityIntent_h
#define _INPBUpdateMediaAffinityIntent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBIntentMetadata.h"
#include "_INPBMediaSearch.h"
#include "_INPBPrivateUpdateMediaAffinityIntentData.h"
#include "_INPBUpdateMediaAffinityIntent-Protocol.h"

@class NSArray, NSString;

@interface _INPBUpdateMediaAffinityIntent : PBCodable<_INPBUpdateMediaAffinityIntent, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 affinityType; } _has;
}

@property (nonatomic) int affinityType;
@property (nonatomic) BOOL hasAffinityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (copy, nonatomic) NSArray *mediaItems;
@property (readonly, nonatomic) unsigned long long mediaItemsCount;
@property (retain, nonatomic) _INPBMediaSearch *mediaSearch;
@property (readonly, nonatomic) BOOL hasMediaSearch;
@property (retain, nonatomic) _INPBPrivateUpdateMediaAffinityIntentData *privateUpdateMediaAffinityIntentData;
@property (readonly, nonatomic) BOOL hasPrivateUpdateMediaAffinityIntentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)mediaItemsType;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)affinityTypeAsString:(int)string;
- (int)StringAsAffinityType:(id)type;
- (void)clearMediaItems;
- (void)addMediaItems:(id)items;
- (id)mediaItemsAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBUpdateMediaAffinityIntent_h */

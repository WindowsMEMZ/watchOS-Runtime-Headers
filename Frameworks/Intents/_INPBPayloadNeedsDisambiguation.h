//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBPayloadNeedsDisambiguation_h
#define _INPBPayloadNeedsDisambiguation_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBPayloadNeedsDisambiguation-Protocol.h"

@class NSArray, NSString;

@interface _INPBPayloadNeedsDisambiguation : PBCodable<_INPBPayloadNeedsDisambiguation, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct  _has;
}

@property (copy, nonatomic) NSArray *disambiguationItems;
@property (readonly, nonatomic) unsigned long long disambiguationItemsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)disambiguationItemsType;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)clearDisambiguationItems;
- (void)addDisambiguationItems:(id)items;
- (id)disambiguationItemsAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBPayloadNeedsDisambiguation_h */

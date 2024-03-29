//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBProperty_h
#define _INPBProperty_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBIntentSlotValue.h"
#include "_INPBProperty-Protocol.h"

@class NSString;

@interface _INPBProperty : PBCodable<_INPBProperty, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct  _has;
}

@property (retain, nonatomic) _INPBIntentSlotValue *payload;
@property (readonly, nonatomic) BOOL hasPayload;
@property (copy, nonatomic) NSString *role;
@property (readonly, nonatomic) BOOL hasRole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBProperty_h */

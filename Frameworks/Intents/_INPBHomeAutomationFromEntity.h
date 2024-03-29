//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBHomeAutomationFromEntity_h
#define _INPBHomeAutomationFromEntity_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBHomeAutomationFromEntity-Protocol.h"
#include "_INPBString.h"

@class NSString;

@interface _INPBHomeAutomationFromEntity : PBCodable<_INPBHomeAutomationFromEntity, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 type; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) _INPBString *value;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBHomeAutomationFromEntity_h */

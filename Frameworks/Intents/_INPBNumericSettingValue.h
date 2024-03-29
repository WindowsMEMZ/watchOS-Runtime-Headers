//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBNumericSettingValue_h
#define _INPBNumericSettingValue_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBNumericSettingValue-Protocol.h"

@class NSString;

@interface _INPBNumericSettingValue : PBCodable<_INPBNumericSettingValue, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 unit; unsigned int x :1 value; } _has;
}

@property (nonatomic) int unit;
@property (nonatomic) BOOL hasUnit;
@property (nonatomic) double value;
@property (nonatomic) BOOL hasValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)unitAsString:(int)string;
- (int)StringAsUnit:(id)unit;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBNumericSettingValue_h */

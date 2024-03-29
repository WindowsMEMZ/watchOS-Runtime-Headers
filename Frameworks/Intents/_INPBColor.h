//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBColor_h
#define _INPBColor_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBColor-Protocol.h"

@class NSString;

@interface _INPBColor : PBCodable<_INPBColor, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 blue; unsigned int x :1 green; unsigned int x :1 red; } _has;
}

@property (nonatomic) double blue;
@property (nonatomic) BOOL hasBlue;
@property (nonatomic) double green;
@property (nonatomic) BOOL hasGreen;
@property (nonatomic) double red;
@property (nonatomic) BOOL hasRed;
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

#endif /* _INPBColor_h */

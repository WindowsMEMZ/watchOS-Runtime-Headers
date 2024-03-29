//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBListShortcutsIntent_h
#define _INPBListShortcutsIntent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBIntentMetadata.h"
#include "_INPBListShortcutsIntent-Protocol.h"

@class NSArray, NSString;

@interface _INPBListShortcutsIntent : PBCodable<_INPBListShortcutsIntent, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 originDevice; } _has;
}

@property (copy, nonatomic) NSArray *appTitles;
@property (readonly, nonatomic) unsigned long long appTitlesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int originDevice;
@property (nonatomic) BOOL hasOriginDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)appTitleType;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)clearAppTitles;
- (void)addAppTitle:(id)title;
- (id)appTitleAtIndex:(unsigned long long)index;
- (id)originDeviceAsString:(int)string;
- (int)StringAsOriginDevice:(id)device;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBListShortcutsIntent_h */

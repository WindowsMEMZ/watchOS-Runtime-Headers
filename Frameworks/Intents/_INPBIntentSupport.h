//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBIntentSupport_h
#define _INPBIntentSupport_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBIntentSupport-Protocol.h"

@class NSArray, NSString;

@interface _INPBIntentSupport : PBCodable<_INPBIntentSupport, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct  _has;
}

@property (copy, nonatomic) NSArray *intentsRestrictedWhileLockeds;
@property (readonly, nonatomic) unsigned long long intentsRestrictedWhileLockedsCount;
@property (copy, nonatomic) NSArray *intentsSupporteds;
@property (readonly, nonatomic) unsigned long long intentsSupportedsCount;
@property (copy, nonatomic) NSArray *supportedMediaCategories;
@property (readonly, nonatomic) unsigned long long supportedMediaCategoriesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)intentsRestrictedWhileLockedType;
+ (Class)intentsSupportedType;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)clearIntentsRestrictedWhileLockeds;
- (void)addIntentsRestrictedWhileLocked:(id)locked;
- (id)intentsRestrictedWhileLockedAtIndex:(unsigned long long)index;
- (void)clearIntentsSupporteds;
- (void)addIntentsSupported:(id)supported;
- (id)intentsSupportedAtIndex:(unsigned long long)index;
- (void)clearSupportedMediaCategories;
- (void)addSupportedMediaCategories:(id)categories;
- (id)supportedMediaCategoriesAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBIntentSupport_h */

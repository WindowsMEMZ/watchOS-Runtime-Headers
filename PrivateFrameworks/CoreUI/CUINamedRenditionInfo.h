//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 866.4.0.0.0
//
#ifndef CUINamedRenditionInfo_h
#define CUINamedRenditionInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface CUINamedRenditionInfo : NSObject<NSCopying> {
  /* instance variables */
  void * _bitmap;
  const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0] } * _keyFormat;
  long long _platform;
}

/* class methods */
+ (int)subtypeToIndexWithPlatform:(long long)platform andInput:(unsigned short)input;
+ (int)subtypeFromIndexWithPlatform:(long long)platform andIndex:(unsigned short)index;

/* instance methods */
- (id)initWithData:(id)data keyFormat:(const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0] } *)format andPlatform:(long long)platform;
- (id)initWithKeyFormat:(const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0] } *)format andPlatform:(long long)platform;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)archivedData;
- (BOOL)isEqualToNamedRenditionInfo:(id)info;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)debugDescription;
- (id)bitwiseAndWith:(id)with;
- (id)bitwiseOrWith:(id)with forAttribute:(int)attribute;
- (int)attributePresent:(int)present withValue:(unsigned short)value;
- (unsigned short)getValueOfAttribute:(int)attribute;
- (unsigned short)getClosestValueOfAttribute:(int)attribute withValue:(unsigned short)value;
- (BOOL)contentPresentForAttribute:(int)attribute;
- (BOOL)contentEqualForAttribute:(int)attribute withRenditionInfo:(id)info;
- (BOOL)diverseContentPresentForAttribute:(int)attribute;
- (void)setAttributePresent:(int)present withValue:(unsigned short)value;
- (void)clearAttributePresent:(int)present withValue:(unsigned short)value;
- (unsigned long long)numberOfBitsSet;
- (void)decrementValue:(long long *)value forAttribute:(int)attribute;
- (void)incrementIndex:(unsigned long long *)index inValues:(id)values forAttribute:(int)attribute;
@end

#endif /* CUINamedRenditionInfo_h */

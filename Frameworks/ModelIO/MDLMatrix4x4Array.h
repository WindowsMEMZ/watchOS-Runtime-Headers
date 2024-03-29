//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 266.1.0.0.0
//
#ifndef MDLMatrix4x4Array_h
#define MDLMatrix4x4Array_h
@import Foundation;

#include "NSCopying-Protocol.h"

@protocol {VtValue="_storage"{type="__lx"[8C]}"_info"{TfPointerAndBits<const VtValue::_TypeInfo>="_ptrAndBits"^{_TypeInfo}}};

@interface MDLMatrix4x4Array : NSObject<NSCopying> {
  /* instance variables */
  struct VtValue { struct type { unsigned char x[8] __lx; } _storage; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo *_ptrAndBits; } _info; } _data;
}

@property (readonly, nonatomic) unsigned long long elementCount;
@property (readonly, nonatomic) unsigned long long precision;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (struct VtValue { struct type { unsigned char x0[8] } x0; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo * x0; } x1; })defaultVtValue;
- (void)resetWithUsdAttribute:(const void *)attribute;
- (void)resetWithUsdAttribute:(const void *)attribute time:(double)time;
- (void)clear;
- (id)initWithElementCount:(unsigned long long)count;
- (void)setFloat4x4Array:(const struct { x0[4] } *)array count:(unsigned long long)count;
- (void)setDouble4x4Array:(const struct { x0[4] } *)array count:(unsigned long long)count;
- (unsigned long long)getFloat4x4Array:(struct { x0[4] } *)array maxCount:(unsigned long long)count;
- (unsigned long long)getDouble4x4Array:(struct { x0[4] } *)array maxCount:(unsigned long long)count;
@end

#endif /* MDLMatrix4x4Array_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef _CNUILikenessFingerprintGroupImpl_h
#define _CNUILikenessFingerprintGroupImpl_h
@import Foundation;

#include "CNUILikenessRenderingScope.h"
#include "_CNUILikenessFingerprintImpl-Protocol.h"

@class NSArray, NSString;

@interface _CNUILikenessFingerprintGroupImpl : NSObject<_CNUILikenessFingerprintImpl>

@property (readonly, copy) NSArray *impls;
@property (readonly, copy) CNUILikenessRenderingScope *scope;
@property (readonly, copy) NSArray *badges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithImpls:(id)impls scope:(id)scope badges:(id)badges;
- (BOOL)isEqual:(id)equal;
- (BOOL)hasContactIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _CNUILikenessFingerprintGroupImpl_h */

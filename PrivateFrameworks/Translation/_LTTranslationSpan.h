//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTTranslationSpan_h
#define _LTTranslationSpan_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface _LTTranslationSpan : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic) BOOL shouldTranslate;
@property (copy, nonatomic) NSData *metaInfoData;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithIdentifier:(id)identifier range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range shouldTranslate:(BOOL)translate metaInfoData:(id)data;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* _LTTranslationSpan_h */

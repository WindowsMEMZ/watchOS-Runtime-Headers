//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMCRMutableAttributedString_h
#define REMCRMutableAttributedString_h
@import Foundation;

#include "NSMutableAttributedString.h"

@class NSMutableAttributedString;
@protocol REMCRMutableAttributedStringEditObserver;

@interface REMCRMutableAttributedString : NSMutableAttributedString

@property (retain, nonatomic) NSMutableAttributedString *backingStore;
@property (weak, nonatomic) NSObject<REMCRMutableAttributedStringEditObserver> *editObserver;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)nonEditableAttributes;
+ (id)allowedAttributesForModel;

/* instance methods */
- (id)initWithBackingStore:(id)store;
- (id)string;
- (id)attributesAtIndex:(unsigned long long)index effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withString:(id)string;
- (void)setAttributes:(id)attributes range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)copyWithZone:(struct _NSZone *)zone;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (void)reportDidEdit:(long long)edit range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range changeInLength:(long long)length;
@end

#endif /* REMCRMutableAttributedString_h */

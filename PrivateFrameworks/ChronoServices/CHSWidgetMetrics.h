//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSWidgetMetrics_h
#define CHSWidgetMetrics_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "BSXPCCoding-Protocol.h"
#include "CHSWidgetMargins.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CHSWidgetMetrics : NSObject<BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) unsigned long long dynamicTextSupport;
@property (readonly, nonatomic) long long fontStyle;
@property (readonly, copy, nonatomic) CHSWidgetMargins *margins;
@property (readonly, nonatomic) struct CHSEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;
@property (readonly, nonatomic) struct CHSEdgeInsets { double x0; double x1; double x2; double x3; } layoutInsets;
@property (readonly, nonatomic) struct CHSEdgeInsets { double x0; double x1; double x2; double x3; } contentMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (void)_replaceFontStyleIn:(id)in withTextSizeAdjustment:(long long)adjustment;
+ (void)_removeSafeAreaInsetsIn:(id)in;

/* instance methods */
- (id)init;
- (id)initWithSize:(struct CGSize { double x0; double x1; })size cornerRadius:(double)radius;
- (id)initWithSize:(struct CGSize { double x0; double x1; })size cornerRadius:(double)radius textSizeAdjustment:(long long)adjustment;
- (id)initWithSize:(struct CGSize { double x0; double x1; })size cornerRadius:(double)radius scale:(struct CGSize { double x0; double x1; })scale textSizeAdjustment:(long long)adjustment;
- (id)initWithSize:(struct CGSize { double x0; double x1; })size cornerRadius:(double)radius scaleFactor:(double)factor textSizeAdjustment:(long long)adjustment;
- (id)initWithSize:(struct CGSize { double x0; double x1; })size cornerRadius:(double)radius scaleFactor:(double)factor fontStyle:(long long)style;
- (id)initWithSize:(struct CGSize { double x0; double x1; })size cornerRadius:(double)radius scaleFactor:(double)factor fontStyle:(long long)style safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)initWithSize:(struct CGSize { double x0; double x1; })size cornerRadius:(double)radius scaleFactor:(double)factor fontStyle:(long long)style safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })insets supportsDynamicText:(unsigned long long)text;
- (id)initWithSize:(struct CGSize { double x0; double x1; })size cornerRadius:(double)radius scaleFactor:(double)factor fontStyle:(long long)style safeAreaInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })insets layoutInsets:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })insets contentMargins:(struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })margins supportsDynamicText:(unsigned long long)text;
- (id)initWithSize:(struct CGSize { double x0; double x1; })size cornerRadius:(double)radius scaleFactor:(double)factor fontStyle:(long long)style margins:(id)margins supportsDynamicText:(unsigned long long)text;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (BOOL)_isUnitScale;
- (BOOL)_hasZeroLayoutInsets;
- (struct CGSize { double x0; double x1; })_rawEffectiveSize;
- (struct CGSize { double x0; double x1; })_effectiveSizePixelAlignedForDisplayScale:(double)scale;
- (struct CGSize { double x0; double x1; })_rawSizePixelAlignedForDisplayScale:(double)scale;
- (struct CGSize { double x0; double x1; })_rawLayoutInsetAdjustedSizePixelAlignedForDisplayScale:(double)scale;
- (double)_effectiveCornerRadius;
- (double)_roundToNearestOrUp:(double)up withScale:(double)scale;
- (id)_stringKeyRepresentation;
- (long long)compare:(id)compare;
- (struct CGSize { double x0; double x1; })scale;
- (long long)textSizeAdjustment;
@end

#endif /* CHSWidgetMetrics_h */

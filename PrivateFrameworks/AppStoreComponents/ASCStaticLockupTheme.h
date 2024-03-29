//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 6.2.9.0.0
//
#ifndef ASCStaticLockupTheme_h
#define ASCStaticLockupTheme_h
@import Foundation;

#include "ASCLockupTheme-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString, UIColor;

@interface ASCStaticLockupTheme : NSObject<ASCLockupTheme, NSCopying>

@property (copy, nonatomic) NSString *titleTextStyle;
@property (copy, nonatomic) id /* block */ titleFontSizeProvider;
@property (nonatomic) double titleFontWeight;
@property (copy, nonatomic) NSString *subtitleTextStyle;
@property (copy, nonatomic) id /* block */ subtitleFontSizeProvider;
@property (nonatomic) double subtitleFontWeight;
@property (copy, nonatomic) NSString *headingTextStyle;
@property (copy, nonatomic) id /* block */ headingFontSizeProvider;
@property (nonatomic) double headingFontWeight;
@property (readonly, nonatomic) UIColor *titleTextColor;
@property (readonly, nonatomic) UIColor *subtitleTextColor;
@property (readonly, nonatomic) UIColor *headingTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTitleTextColor:(id)color titleTextStyle:(id)style titleFontWeight:(double)weight subtitleTextColor:(id)color subtitleTextStyle:(id)style subtitleFontWeight:(double)weight headingTextColor:(id)color headingTextStyle:(id)style headingFontWeight:(double)weight;
- (id)initWithTitleTextColor:(id)color titleFontSizeProvider:(id /* block */)provider titleFontWeight:(double)weight subtitleTextColor:(id)color subtitleFontSizeProvider:(id /* block */)provider subtitleFontWeight:(double)weight headingTextColor:(id)color headingFontSizeProvider:(id /* block */)provider headingFontWeight:(double)weight;
- (id)titleFontCompatibleWithTraitCollection:(id)collection;
- (id)subtitleFontCompatibleWithTraitCollection:(id)collection;
- (id)headingFontCompatibleWithTraitCollection:(id)collection;
- (void)applyToLockupContentView:(id)view compatibleWithTraitCollection:(id)collection;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* ASCStaticLockupTheme_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UILabelSynthesizedContent_h
#define _UILabelSynthesizedContent_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "UIColor.h"
#include "_UILabelContent.h"

@class NSTextEncapsulation;

@interface _UILabelSynthesizedContent : NSObject<NSCopying, NSMutableCopying> {
  /* instance variables */
  struct { unsigned int x :1 eliminateShadows; unsigned int x :1 overallWritingDirectionFollowsLayoutDirection; unsigned int x :1 disableLinkHypenation; unsigned int x :1 hasExplicitBaselineOffset; } _flags;
}

@property (readonly, nonatomic) _UILabelContent *content;
@property (readonly, nonatomic) UIColor *overrideTextColor;
@property (readonly, nonatomic) BOOL eliminateShadows;
@property (readonly, nonatomic) long long semanticContentAttribute;
@property (readonly, nonatomic) BOOL overallWritingDirectionFollowsLayoutDirection;
@property (readonly, nonatomic) BOOL disableLinkHypenation;
@property (readonly, nonatomic) NSTextEncapsulation *textEncapsulation;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) BOOL hasExplicitBaselineOffset;

/* instance methods */
- (BOOL)reverseNaturalAlignment;
- (id)synthesizedAttributes;
- (id)synthesizedAttributedString;
- (id)_synthesizedAttributedString;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)mutableCopy;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)_disablingHyphenationIfURLsDetectedInAttributedString:(id)string;
- (void)_isolateStringWritingDirectionInAttributedString:(id)string;
- (id)description;
@end

#endif /* _UILabelSynthesizedContent_h */

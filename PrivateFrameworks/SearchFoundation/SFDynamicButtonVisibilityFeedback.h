//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFDynamicButtonVisibilityFeedback_h
#define SFDynamicButtonVisibilityFeedback_h
@import Foundation;

#include "SFFeedback.h"
#include "SFCardSection.h"

@class NSArray;

@interface SFDynamicButtonVisibilityFeedback : SFFeedback

@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) SFCardSection *cardSection;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCardSection:(id)section buttons:(id)buttons;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SFDynamicButtonVisibilityFeedback_h */

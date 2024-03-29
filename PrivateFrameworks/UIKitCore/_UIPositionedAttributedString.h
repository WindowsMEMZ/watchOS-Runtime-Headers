//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIPositionedAttributedString_h
#define _UIPositionedAttributedString_h
@import Foundation;

#include "UITextPosition.h"

@class NSAttributedString;

@interface _UIPositionedAttributedString : NSObject

@property (readonly, copy, nonatomic) NSAttributedString *string;
@property (readonly, nonatomic) UITextPosition *position;

/* class methods */
+ (id)attributedString:(id)string atPosition:(id)position;

/* instance methods */
- (id)description;
@end

#endif /* _UIPositionedAttributedString_h */

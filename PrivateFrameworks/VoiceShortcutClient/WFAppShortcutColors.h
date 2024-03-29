//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAppShortcutColors_h
#define WFAppShortcutColors_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "WFColor.h"
#include "WFGradient.h"

@interface WFAppShortcutColors : NSObject<NSSecureCoding>

@property (readonly, nonatomic) WFGradient *backgroundGradient;
@property (readonly, nonatomic) WFColor *tintColor;
@property (readonly, nonatomic) BOOL isDefaultTintColor;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithComplementingColors:(id)colors tintColor:(id)color;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFAppShortcutColors_h */

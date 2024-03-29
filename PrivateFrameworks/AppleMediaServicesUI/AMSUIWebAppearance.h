//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIWebAppearance_h
#define AMSUIWebAppearance_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class UIColor;

@interface AMSUIWebAppearance : NSObject<NSCopying>

@property (retain, nonatomic) UIColor *backgroundColor;

/* class methods */
+ (id)defaultAppearance;
+ (id)tableViewAppearance;
+ (id)systemBackgroundColor;
+ (id)systemClearColor;
+ (id)secondarySystemBackgroundColor;
+ (id)tertiarySystemBackgroundColor;
+ (id)systemGroupedBackgroundColor;
+ (id)secondarySystemGroupedBackgroundColor;
+ (id)tertiarySystemGroupedBackgroundColor;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)updateBackgroundColorWithJSString:(id)jsstring;
@end

#endif /* AMSUIWebAppearance_h */

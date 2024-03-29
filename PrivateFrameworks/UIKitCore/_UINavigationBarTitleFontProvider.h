//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UINavigationBarTitleFontProvider_h
#define _UINavigationBarTitleFontProvider_h
@import Foundation;

@interface _UINavigationBarTitleFontProvider : NSObject
/* class methods */
+ (void)registerProviderClass:(Class)class forIdiom:(long long)idiom;
+ (id)providerForIdiom:(long long)idiom;

/* instance methods */
- (id)defaultTitleFont;
- (id)defaultInlineTitleFont;
- (id)defaultLargeTitleFont;
@end

#endif /* _UINavigationBarTitleFontProvider_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIMenuLeafAlternate_Protocol_h
#define _UIMenuLeafAlternate_Protocol_h
@import Foundation;

@protocol _UIMenuLeafAlternate <NSObject>

@property (readonly, nonatomic) NSString *title;

/* instance methods */
- (long long)_leafKeyModifierFlags;
- (id)_resolvedTargetFromFirstTarget:(id)target sender:(id)sender;
@end

#endif /* _UIMenuLeafAlternate_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFFindOnPageViewDelegate_Protocol_h
#define _SFFindOnPageViewDelegate_Protocol_h
@import Foundation;

@protocol _SFFindOnPageViewDelegate <NSObject>
@optional
/* instance methods */
- (id)webViewForFindOnPageView:(id)view;
- (void)visibilityWillChangeForFindOnPageView:(id)view;
- (void)updateFindCompletionProviderWithMatchesCount:(unsigned long long)count forString:(id)string forFindOnPageView:(id)view;
@end

#endif /* _SFFindOnPageViewDelegate_Protocol_h */

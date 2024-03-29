//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSFooterMultiHyperlinkViewLinkSpec_h
#define PSFooterMultiHyperlinkViewLinkSpec_h
@import Foundation;

@class NSURL;

@interface PSFooterMultiHyperlinkViewLinkSpec : NSObject

@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } linkRange;
@property (copy, nonatomic) NSURL *URL;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

/* class methods */
+ (id)specWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range url:(id)url;
+ (id)specWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range target:(id)target action:(SEL)action;

/* instance methods */
@end

#endif /* PSFooterMultiHyperlinkViewLinkSpec_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.2.0.0
//
#ifndef WKImageAnimatable_Protocol_h
#define WKImageAnimatable_Protocol_h
@import Foundation;

@protocol WKImageAnimatable <NSObject>
/* instance methods */
- (void)startAnimating;
- (void)startAnimatingWithImagesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range duration:(double)duration repeatCount:(long long)count;
- (void)stopAnimating;
@end

#endif /* WKImageAnimatable_Protocol_h */

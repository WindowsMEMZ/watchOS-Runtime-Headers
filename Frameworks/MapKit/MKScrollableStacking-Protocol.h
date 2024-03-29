//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKScrollableStacking_Protocol_h
#define MKScrollableStacking_Protocol_h
@import Foundation;

@protocol MKScrollableStacking <NSObject>

@property (readonly, nonatomic) UIScrollView *scrollView;

/* instance methods */
- (void)scrollToTopAnimated:(BOOL)animated;
- (double)currentHeight;
@end

#endif /* MKScrollableStacking_Protocol_h */

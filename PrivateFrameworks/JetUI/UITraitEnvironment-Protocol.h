//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7.2.9.0.0
//
#ifndef UITraitEnvironment_Protocol_h
#define UITraitEnvironment_Protocol_h
@import Foundation;

@protocol UITraitEnvironment <NSObject>

@property (readonly, nonatomic) UITraitCollection *traitCollection;

/* instance methods */
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* UITraitEnvironment_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLTransactionSceneUpdating_Protocol_h
#define CSLTransactionSceneUpdating_Protocol_h
@import Foundation;

@protocol CSLTransactionSceneUpdating <NSObject>

@property (nonatomic) BOOL waitsForSceneCommits;

/* instance methods */
- (void)updateSceneWithIdentifier:(id)identifier parameters:(id)parameters transitionContext:(id)context;
@end

#endif /* CSLTransactionSceneUpdating_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLVideoPlaybackResourceChoiceOptimizer_h
#define PLVideoPlaybackResourceChoiceOptimizer_h
@import Foundation;

@class NSArray;

@interface PLVideoPlaybackResourceChoiceOptimizer : NSObject {
  /* instance variables */
  NSArray *_videoResources;
  NSArray *_playableVideos;
  BOOL _masterVideoIsPresent;
  BOOL _masterVideoIsPlayable;
}

@property (readonly, nonatomic) NSArray *preferredVideoResources;

/* instance methods */
- (id)initWithVideoResources:(id)resources;
@end

#endif /* PLVideoPlaybackResourceChoiceOptimizer_h */

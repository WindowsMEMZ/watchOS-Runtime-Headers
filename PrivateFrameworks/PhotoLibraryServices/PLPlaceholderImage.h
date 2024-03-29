//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPlaceholderImage_h
#define PLPlaceholderImage_h
@import Foundation;

@class NSCache;

@interface PLPlaceholderImage : NSObject {
  /* instance variables */
  NSCache *_dumbCache;
}

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (struct CGImage *)newPlaceholderImageWithSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* PLPlaceholderImage_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebGeolocation_h
#define WebGeolocation_h
@import Foundation;

@class WebGeolocationPrivate;

@interface WebGeolocation : NSObject {
  /* instance variables */
  WebGeolocationPrivate *_private;
}

/* instance methods */
- (id)_initWithWebCoreGeolocation:(void *)geolocation;
- (void)setIsAllowed:(BOOL)allowed;
- (void)dealloc;
@end

#endif /* WebGeolocation_h */

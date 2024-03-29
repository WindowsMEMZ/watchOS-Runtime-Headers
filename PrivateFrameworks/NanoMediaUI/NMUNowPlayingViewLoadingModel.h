//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUNowPlayingViewLoadingModel_h
#define NMUNowPlayingViewLoadingModel_h
@import Foundation;

@interface NMUNowPlayingViewLoadingModel : NSObject // (Swift)
/* class methods */
+ (id)sharedModel;

/* instance methods */
- (void)setLoadingSessionID:(id)id forPlayerPath:(id)path;
- (void)clearLoadingSessionID:(id)id forPlayerPath:(id)path;
- (id)init;
@end

#endif /* NMUNowPlayingViewLoadingModel_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDeletePhotosIntentHandling_Protocol_h
#define WFDeletePhotosIntentHandling_Protocol_h
@import Foundation;

@protocol WFDeletePhotosIntentHandling <NSObject>
/* instance methods */
- (void)handleDeletePhotos:(id)photos completion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmDeletePhotos:(id)photos completion:(id /* block */)completion;
@end

#endif /* WFDeletePhotosIntentHandling_Protocol_h */

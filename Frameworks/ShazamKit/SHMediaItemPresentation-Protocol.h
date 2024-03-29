//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHMediaItemPresentation_Protocol_h
#define SHMediaItemPresentation_Protocol_h
@import Foundation;

@protocol SHMediaItemPresentation <NSObject>
/* instance methods */
- (void)presentMediaItem:(id)item completionHandler:(id /* block */)handler;
- (void)presentMediaItem:(id)item presentationSettings:(id)settings completionHandler:(id /* block */)handler;
@end

#endif /* SHMediaItemPresentation_Protocol_h */

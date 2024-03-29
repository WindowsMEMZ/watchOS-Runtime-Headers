//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABContactDetailFMFSessionObserver_Protocol_h
#define NCABContactDetailFMFSessionObserver_Protocol_h
@import Foundation;

@protocol NCABContactDetailFMFSessionObserver <NSObject>
/* instance methods */
- (void)contactDetailFMFSession:(id)fmfsession hasGridImageData:(id)data;
- (void)contactDetailFMFSessionDidReceiveUpdatedHandles:(id)handles;
- (void)contactDetailFMFSession:(id)fmfsession receivedLocationUpdate:(id)update forContactWithIdentifier:(id)identifier;
- (void)contactDetailFMFSession:(id)fmfsession receivedUpdatedMapImageData:(id)data forContactWithIdentifier:(id)identifier;
@end

#endif /* NCABContactDetailFMFSessionObserver_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSOpportuneSpeakListenerDelegate_Protocol_h
#define CSOpportuneSpeakListenerDelegate_Protocol_h
@import Foundation;

@protocol CSOpportuneSpeakListenerDelegate <NSObject>
@optional
/* instance methods */
- (void)opportuneSpeakListener:(id)listener hasRemoteVADAvailable:(BOOL)vadavailable;
- (void)opportuneSpeakListener:(id)listener hasVADAvailable:(BOOL)vadavailable;
- (void)opportuneSpeakListener:(id)listener hasVADAvailable:(BOOL)vadavailable withHostTime:(float)time;
- (void)opportuneSpeakListener:(id)listener didStopUnexpectedly:(BOOL)unexpectedly;
@end

#endif /* CSOpportuneSpeakListenerDelegate_Protocol_h */

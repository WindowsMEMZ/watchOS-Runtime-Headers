//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCameraClipVideoAssetContextProviderDelegate_Protocol_h
#define HFCameraClipVideoAssetContextProviderDelegate_Protocol_h
@import Foundation;

@protocol HFCameraClipVideoAssetContextProviderDelegate <NSObject>
/* instance methods */
- (id)newFetchVideoAssetContextOperationForClip:(id)clip clipManager:(id)manager;
- (id)cachedVideoAssetContextForClip:(id)clip clipManager:(id)manager;
@end

#endif /* HFCameraClipVideoAssetContextProviderDelegate_Protocol_h */

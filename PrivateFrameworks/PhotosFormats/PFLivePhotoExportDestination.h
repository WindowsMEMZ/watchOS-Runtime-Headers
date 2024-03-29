//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFLivePhotoExportDestination_h
#define PFLivePhotoExportDestination_h
@import Foundation;

@class NSURL;

@interface PFLivePhotoExportDestination : NSObject

@property (readonly) NSURL *photoURL;
@property (readonly) NSURL *videoURL;

/* class methods */
+ (id)destinationWithPhotoURL:(id)url videoURL:(id)url;

/* instance methods */
- (id)initWithPhotoURL:(id)url videoURL:(id)url;
@end

#endif /* PFLivePhotoExportDestination_h */

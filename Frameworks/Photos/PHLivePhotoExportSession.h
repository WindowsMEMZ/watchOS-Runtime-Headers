//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHLivePhotoExportSession_h
#define PHLivePhotoExportSession_h
@import Foundation;

@class NSArray, NSURL;

@interface PHLivePhotoExportSession : NSObject

@property (readonly, nonatomic) NSArray *fileURLs;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSURL *videoURL;

/* class methods */
+ (BOOL)_identifyResourceURLs:(id)urls outImageURL:(id *)url outVideoURL:(id *)url error:(id *)error;
+ (BOOL)_canCreateLivePhotoWithURLs:(id)urls outError:(id *)error;

/* instance methods */
- (id)initWithResourceFileURLs:(id)urls;
- (id)writeToFileURL:(id)url options:(id)options completionHandler:(id /* block */)handler;
- (BOOL)_isOutputURLValid:(id)urlvalid withOptions:(id)options error:(out id *)error;
@end

#endif /* PHLivePhotoExportSession_h */

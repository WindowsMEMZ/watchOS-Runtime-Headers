//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLStreamShareSource_h
#define PLStreamShareSource_h
@import Foundation;

@class NSData, NSString, NSURL, PFVideoComplement, PLSandboxedURL;

@interface PLStreamShareSource : NSObject {
  /* instance variables */
  PLSandboxedURL *_sandboxedMediaURL;
  PLSandboxedURL *_sandboxedVideoComplementImageURL;
  PLSandboxedURL *_sandboxedVideoComplementVideoURL;
}

@property (retain, nonatomic) NSData *mediaData;
@property (retain, nonatomic) NSString *fileExtension;
@property (retain, nonatomic) NSURL *mediaURL;
@property (retain, nonatomic) PFVideoComplement *videoComplement;
@property (nonatomic) long long mediaType;

/* instance methods */
- (id)serializedDictionary;
- (id)initWithDictionary:(id)dictionary;
- (void)_cleanupIfNeededMediaAtURL:(id)url;
- (void)cleanupResources;
- (id)photoLibrary;
@end

#endif /* PLStreamShareSource_h */

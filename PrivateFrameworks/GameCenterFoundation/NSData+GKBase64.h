//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef NSData_GKBase64_h
#define NSData_GKBase64_h
@import Foundation;

@interface NSData (GKBase64)
/* class methods */
+ (void)_gkRequestClientsRemoteImageDataForURL:(id)url queue:(id)queue reply:(id /* block */)reply;
+ (void)_gkLoadRemoteImageDataForURL:(id)url subdirectory:(id)subdirectory filename:(id)filename queue:(id)queue handler:(id /* block */)handler;
+ (void)_gkLoadRemoteImageDataForUrl:(id)url subdirectory:(id)subdirectory filename:(id)filename queue:(id)queue imageQueue:(id)queue handler:(id /* block */)handler;
+ (id)_gkImageCachePathForURL:(id)url subdirectory:(id)subdirectory filename:(id)filename;

/* instance methods */
- (id)_gkAsHexString;
- (id)_gkZippedDictionaryValue;
@end

#endif /* NSData_GKBase64_h */

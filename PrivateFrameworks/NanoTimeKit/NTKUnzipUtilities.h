//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKUnzipUtilities_h
#define NTKUnzipUtilities_h
@import Foundation;

@interface NTKUnzipUtilities : NSObject
/* class methods */
+ (BOOL)unzipFile:(id)file toPath:(id)path;
+ (int)_read_extract_flags;
+ (void)_printError:(id)error;
@end

#endif /* NTKUnzipUtilities_h */

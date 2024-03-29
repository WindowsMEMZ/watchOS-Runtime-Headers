//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHCompression_h
#define SHCompression_h
@import Foundation;

@interface SHCompression : NSObject
/* class methods */
+ (int)supportedCompressionTypeFromFilePathExtension:(id)extension;
+ (int)supportedCompressionTypeFromFileURL:(id)url;
+ (BOOL)decompressFile:(id)file withAlgorithm:(int)algorithm toLocation:(id)location error:(id *)error;
@end

#endif /* SHCompression_h */

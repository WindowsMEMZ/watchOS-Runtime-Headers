//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOUnarchiver_h
#define GEOUnarchiver_h
@import Foundation;

@interface GEOUnarchiver : NSObject
/* class methods */
+ (BOOL)decompressDataAtURL:(id)url toURL:(id)url log:(id)log error:(id *)error;
+ (BOOL)decompressBZip2DataAtURL:(id)url toURL:(id)url log:(id)log error:(id *)error;
+ (BOOL)decompressGZipDataAtURL:(id)url toURL:(id)url log:(id)log error:(id *)error;
+ (BOOL)unarchiveDataAtURL:(id)url toURL:(id)url log:(id)log error:(id *)error;
+ (BOOL)unarchiveDataAtURL:(id)url log:(id)log inMemoryDataSizeThreshold:(unsigned long long)threshold fileVisitor:(id /* block */)visitor error:(id *)error;
+ (id)getContentsOfArchiveAtURL:(id)url log:(id)log error:(id *)error;
@end

#endif /* GEOUnarchiver_h */

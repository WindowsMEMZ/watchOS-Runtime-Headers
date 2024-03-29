//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOArchiveFileInfo_h
#define GEOArchiveFileInfo_h
@import Foundation;

@class NSString;

@interface GEOArchiveFileInfo : NSObject

@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long length;

/* instance methods */
- (id)initWithFilePath:(id)path offset:(unsigned long long)offset length:(unsigned long long)length;
@end

#endif /* GEOArchiveFileInfo_h */

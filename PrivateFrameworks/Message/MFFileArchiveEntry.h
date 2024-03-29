//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFFileArchiveEntry_h
#define MFFileArchiveEntry_h
@import Foundation;

@class NSData, NSString;

@interface MFFileArchiveEntry : NSObject

@property (retain) NSString *path;
@property long long uncompressedSize;
@property struct _NSRange { unsigned long long x0; unsigned long long x1; } compressedRange;
@property BOOL isDeflated;
@property BOOL isDirectory;
@property (retain) NSData *contents;

/* class methods */
+ (id)archiveEntry;
+ (id)archiveEntryWithCentralHeader:(struct CentralHeader { unsigned char x0[4] unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned int x16; unsigned int x17; char * x18; } *)header archiveData:(id)data;

/* instance methods */
- (id)initWithContents:(id)contents path:(id)path;
- (id)initWithDirectoryPath:(id)path;
- (id)description;
- (id)fileName;
- (long long)compressedSize;
- (void)merge:(id)merge;
@end

#endif /* MFFileArchiveEntry_h */

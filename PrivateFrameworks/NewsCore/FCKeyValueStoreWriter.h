//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCKeyValueStoreWriter_h
#define FCKeyValueStoreWriter_h
@import Foundation;

@class NSOutputStream, NSString, PBDataWriter;

@interface FCKeyValueStoreWriter : NSObject

@property (readonly, nonatomic) PBDataWriter *dataWriter;
@property (readonly, nonatomic) NSString *tempFilePath;
@property (readonly, nonatomic) NSOutputStream *tempFileOutputStream;

/* instance methods */
- (id)init;
- (BOOL)writeKVS:(id)kvs codables:(id)codables toFile:(id)file size:(unsigned long long *)size;
- (unsigned long long)_flushToDiskIfNeeded;
- (unsigned long long)_flushToDisk;
- (BOOL)_moveTempFileToPath:(id)path;
@end

#endif /* FCKeyValueStoreWriter_h */

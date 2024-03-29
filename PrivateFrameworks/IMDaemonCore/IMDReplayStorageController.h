//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDReplayStorageController_h
#define IMDReplayStorageController_h
@import Foundation;

@class IDSKVStore, NSString;

@interface IMDReplayStorageController : NSObject

@property (retain, nonatomic) IDSKVStore *store;
@property (readonly, retain, nonatomic) NSString *filePath;

/* instance methods */
- (id)initWithFilePath:(id)path;
- (BOOL)storeDictionary:(id)dictionary error:(id *)error;
- (id)copyNextBatchWithSize:(unsigned long long)size iterationContext:(id *)context;
- (void)deleteReplayDB;
- (void)dealloc;
@end

#endif /* IMDReplayStorageController_h */

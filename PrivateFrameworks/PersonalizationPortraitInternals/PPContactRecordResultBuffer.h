//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPContactRecordResultBuffer_h
#define PPContactRecordResultBuffer_h
@import Foundation;

@class NSMutableArray;

@interface PPContactRecordResultBuffer : NSObject

@property (readonly, nonatomic) NSMutableArray *records;
@property (nonatomic) BOOL loadingComplete;

/* instance methods */
- (id)init;
@end

#endif /* PPContactRecordResultBuffer_h */

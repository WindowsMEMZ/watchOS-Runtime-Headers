//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.2.1.0.0
//
#ifndef LCFBiomeManager_h
#define LCFBiomeManager_h
@import Foundation;

@class BMSource, BMStream;

@interface LCFBiomeManager : NSObject

@property (readonly, nonatomic) BMStream *biomeStream;
@property (retain, nonatomic) BMSource *biomeSource;

/* instance methods */
- (id)init:(id)init;
- (BOOL)writeData:(id)data;
- (id)readData:(id)data endDate:(id)date reversed:(BOOL)reversed;
- (id)readTimeStamps:(id)stamps endDate:(id)date reversed:(BOOL)reversed;
- (id)readDataWithTimestamp:(id)timestamp endDate:(id)date reversed:(BOOL)reversed;
@end

#endif /* LCFBiomeManager_h */

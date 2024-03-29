//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.3.3.0.0
//
#ifndef LBFBiomeManager_h
#define LBFBiomeManager_h
@import Foundation;

@class BMSource, BMStream;

@interface LBFBiomeManager : NSObject

@property (readonly, nonatomic) BMStream *biomeStream;
@property (retain, nonatomic) BMSource *biomeSource;

/* instance methods */
- (id)init:(id)init;
- (BOOL)writeData:(id)data;
- (id)readData:(id)data endDate:(id)date;
- (BOOL)enumerateData:(id)data endDate:(id)date reversed:(BOOL)reversed shouldContinue:(id /* block */)continue;
@end

#endif /* LBFBiomeManager_h */

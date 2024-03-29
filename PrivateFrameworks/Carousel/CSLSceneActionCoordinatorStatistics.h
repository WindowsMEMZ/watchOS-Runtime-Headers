//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSceneActionCoordinatorStatistics_h
#define CSLSceneActionCoordinatorStatistics_h
@import Foundation;

@class NSDate, NSMutableDictionary, NSString;

@interface CSLSceneActionCoordinatorStatistics : NSObject {
  /* instance variables */
  NSMutableDictionary *_statisticsMap;
}

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double duration;
@property (nonatomic) BOOL failed;
@property (nonatomic) unsigned long long failureType;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *bundleID;

/* instance methods */
- (id)init;
- (id)cpuStatisticsForProcessType:(unsigned long long)type;
- (void)setCPUStatistics:(id)cpustatistics forProcessType:(unsigned long long)type;
@end

#endif /* CSLSceneActionCoordinatorStatistics_h */

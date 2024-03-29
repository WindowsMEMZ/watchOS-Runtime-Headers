//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHeartbeatSequenceChartData_h
#define HKHeartbeatSequenceChartData_h
@import Foundation;

@class NSMutableArray;

@interface HKHeartbeatSequenceChartData : NSObject

@property (readonly, nonatomic) NSMutableArray *sections;
@property (nonatomic) double initialXAxisOffset;

/* instance methods */
- (id)init;
- (void)addSequencePoint:(id)point section:(long long)section;
- (long long)sectionCount;
- (void)enumerateSequences:(id /* block */)sequences;
- (void)_expandToSection:(long long)section;
@end

#endif /* HKHeartbeatSequenceChartData_h */

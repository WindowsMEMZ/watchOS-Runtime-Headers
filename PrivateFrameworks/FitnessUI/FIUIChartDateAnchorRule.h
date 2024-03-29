//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIChartDateAnchorRule_h
#define FIUIChartDateAnchorRule_h
@import Foundation;

@interface FIUIChartDateAnchorRule : NSObject

@property (nonatomic) unsigned long long calendarUnit;
@property (nonatomic) long long roundingValue;

/* instance methods */
- (id)generateAnchorFromDate:(id)date;
- (id)_floorDate:(id)date;
- (id)_anchorDiffComponents;
- (BOOL)_componentsSuccessful:(id)successful;
@end

#endif /* FIUIChartDateAnchorRule_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNAnnouncementPlan_h
#define MNAnnouncementPlan_h
@import Foundation;

@class NSArray, NSMutableArray;

@interface MNAnnouncementPlan : NSObject

@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSMutableArray *plannedEvents;
@property (nonatomic) double distance;
@property (nonatomic) double speed;

/* class methods */
+ (double)desiredTimeGapBetweenEvent:(id)event andEvent:(id)event;

/* instance methods */
- (id)initWithEvents:(id)events distance:(double)distance speed:(double)speed durations:(id)durations;
- (id)description;
- (id)nextConflict;
- (void)sortEvents;
@end

#endif /* MNAnnouncementPlan_h */

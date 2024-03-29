//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSProximityBooster_h
#define _PSProximityBooster_h
@import Foundation;

@class RPPeopleDiscovery;

@interface _PSProximityBooster : NSObject

@property (retain, nonatomic) RPPeopleDiscovery *peopleDiscovery;

/* instance methods */
- (id)init;
- (void)startMonitoringProximity;
- (void)stopMonitoringProximity;
- (id)suggestionsByBoostingNearbySuggestions:(id)suggestions;
@end

#endif /* _PSProximityBooster_h */

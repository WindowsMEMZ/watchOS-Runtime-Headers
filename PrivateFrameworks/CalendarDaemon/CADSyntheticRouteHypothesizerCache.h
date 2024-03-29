//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADSyntheticRouteHypothesizerCache_h
#define CADSyntheticRouteHypothesizerCache_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CADSyntheticRouteHypothesizerCache : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSMutableDictionary *eventExternalURLToSyntheticRouteHypothesizerMap;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)_init;
- (id)syntheticRouteHypothesizerForEventExternalURL:(id)url;
- (void)addSyntheticRouteHypothesizer:(id)hypothesizer forEventExternalURL:(id)url;
- (void)removeSyntheticRouteHypothesizerForEventExternalURL:(id)url;
@end

#endif /* CADSyntheticRouteHypothesizerCache_h */

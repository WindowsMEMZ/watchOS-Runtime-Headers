//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDPowerLogObserverContext_h
#define HMDPowerLogObserverContext_h
@import Foundation;

@class HMFPowerLogger, HMMIntervalMapper;
@protocol HMMLogEventDispatching;

@interface HMDPowerLogObserverContext : NSObject

@property (readonly, nonatomic) HMMIntervalMapper *homeConfigurationEventHistogram;
@property (readonly, nonatomic) HMMIntervalMapper *cameraConfigurationEventHistogram;
@property (readonly, weak, nonatomic) NSObject<HMMLogEventDispatching> *logEventDispatcher;
@property (readonly, weak, nonatomic) HMFPowerLogger *powerLogger;

/* instance methods */
- (id)initWithLogEventDispatcher:(id)dispatcher powerLogger:(id)logger;
@end

#endif /* HMDPowerLogObserverContext_h */

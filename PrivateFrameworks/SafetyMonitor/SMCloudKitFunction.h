//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef SMCloudKitFunction_h
#define SMCloudKitFunction_h
@import Foundation;

@class _TtC13SafetyMonitor23SMCloudKitFunctionSwift;
@protocol OS_dispatch_queue;

@interface SMCloudKitFunction : NSObject

@property (retain, nonatomic) SafetyMonitor.SMCloudKitFunctionSwift *swiftCKF;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* instance methods */
- (id)initWithEnvironment:(unsigned long long)environment version:(id)version queue:(id)queue;
- (void)requestSafetyCacheRecordFromZone:(id)zone withToken:(id)token completion:(id /* block */)completion;
@end

#endif /* SMCloudKitFunction_h */

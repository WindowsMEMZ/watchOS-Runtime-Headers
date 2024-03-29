//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef GSDataSourceObserver_Protocol_h
#define GSDataSourceObserver_Protocol_h
@import Foundation;

@protocol GSDataSourceObserver <GSPipelineStageObserver>
@optional
/* instance methods */
- (void)dataSourceDidStart:(id)start;
- (void)dataSourceDidStop:(id)stop;
@end

#endif /* GSDataSourceObserver_Protocol_h */

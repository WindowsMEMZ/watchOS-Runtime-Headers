//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef _TtP9WidgetKit27WidgetCenterConnection_Host__Protocol_h
#define _TtP9WidgetKit27WidgetCenterConnection_Host__Protocol_h
@import Foundation;

@protocol WidgetKit.WidgetCenterConnection_Host 
/* instance methods */
- (void)_loadCurrentConfigurations:(id /* block */)configurations;
- (void)_reloadTimelinesOfKind:(id)kind completion:(id /* block */)completion;
- (void)_reloadTimelinesOfKind:(id)kind inBundle:(id)bundle completion:(id /* block */)completion;
- (void)_reloadAllTimelines:(id /* block */)timelines;
- (void)invalidateConfigurationRecommendationsWithCompletion:(id /* block */)completion;
- (void)invalidateConfigurationRecommendationsInBundle:(id)bundle completion:(id /* block */)completion;
@end

#endif /* _TtP9WidgetKit27WidgetCenterConnection_Host__Protocol_h */

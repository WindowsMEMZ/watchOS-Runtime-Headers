//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMUILegacyProfilesViewModelProvider_h
#define RMUILegacyProfilesViewModelProvider_h
@import Foundation;

@class NSMutableArray, RMObserverStore;

@interface RMUILegacyProfilesViewModelProvider : NSObject

@property (readonly, nonatomic) long long scope;
@property (retain, nonatomic) NSMutableArray *profileViewModels;
@property (retain, nonatomic) RMObserverStore *observerStore;

/* instance methods */
- (id)initWithScope:(long long)scope;
- (void)_updateViewModelsWithDeclarations:(id)declarations;
- (void)loadProfilesFromConfigurationsWithCompletionHandler:(id /* block */)handler;
@end

#endif /* RMUILegacyProfilesViewModelProvider_h */

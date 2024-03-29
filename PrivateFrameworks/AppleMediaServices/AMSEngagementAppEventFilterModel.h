//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSEngagementAppEventFilterModel_h
#define AMSEngagementAppEventFilterModel_h
@import Foundation;

@class NSDictionary;

@interface AMSEngagementAppEventFilterModel : NSObject

@property (readonly, nonatomic) NSDictionary *definition;
@property (readonly, nonatomic) BOOL allowsResponse;
@property (readonly, nonatomic) unsigned long long components;

/* class methods */
+ (BOOL)matchEvent:(id)event toFilter:(id)filter;

/* instance methods */
- (id)init;
- (id)initWithCacheObject:(id)object;
- (id)initWithDefinition:(id)definition;
- (id)exportObject;
- (BOOL)matchesEvent:(id)event;
@end

#endif /* AMSEngagementAppEventFilterModel_h */

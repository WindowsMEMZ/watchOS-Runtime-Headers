//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHomeEventsGenerated_h
#define HMDHomeEventsGenerated_h
@import Foundation;

@interface HMDHomeEventsGenerated : NSObject
/* class methods */
+ (id)topicMap;
+ (id)allTopics;
+ (id)indexTopicForTopicSuffix:(id)suffix indexName:(id)name;
+ (id)homeInfoIndexForHomeUUID:(id)uuid;
+ (BOOL)isHomeInfoIndexTopic:(id)topic homeUUID:(id)uuid;
+ (id)clientIndexToHomeTopicsForHomeUUID:(id)uuid;
+ (id)forwardingTopicsWithTopics:(id)topics forHomeRouterWithUUID:(id)uuid;
+ (id)upstreamClientTopicForTopic:(id)topic;
+ (id)upstreamHomeTopicForTopic:(id)topic homeUUID:(id)uuid;
+ (id)upstreamHomeAndAccessoryTopicsForTopic:(id)topic homeUUID:(id)uuid accessoryUUID:(id)uuid;
+ (id)upstreamTopicsForTopic:(id)topic;
+ (id)accessoryTopicsForAccessory:(id)accessory homeUUID:(id)uuid;
+ (id)expandedTopicsWithTopics:(id)topics homeManager:(id)manager;
@end

#endif /* HMDHomeEventsGenerated_h */

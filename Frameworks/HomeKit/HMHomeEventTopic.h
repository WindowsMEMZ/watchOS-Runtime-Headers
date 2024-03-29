//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMHomeEventTopic_h
#define HMHomeEventTopic_h
@import Foundation;

@interface HMHomeEventTopic : NSObject
/* class methods */
+ (unsigned long long)suffixIDFromTopicSuffix:(id)suffix;
+ (id)topicFromSuffixID:(unsigned long long)id homeUUID:(id)uuid;
@end

#endif /* HMHomeEventTopic_h */

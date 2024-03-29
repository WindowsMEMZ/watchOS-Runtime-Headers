//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSProgressSubscriber_Protocol_h
#define NSProgressSubscriber_Protocol_h
@import Foundation;

@protocol NSProgressSubscriber <NSObject>
/* instance methods */
- (void)addPublisher:(id)publisher forID:(id)id withValues:(id)values isOld:(BOOL)old;
- (void)observePublisherForID:(id)id values:(id)values forKeys:(id)keys;
- (void)observePublisherUserInfoForID:(id)id value:(id)value forKey:(id)key;
- (void)removePublisherForID:(id)id;
@end

#endif /* NSProgressSubscriber_Protocol_h */

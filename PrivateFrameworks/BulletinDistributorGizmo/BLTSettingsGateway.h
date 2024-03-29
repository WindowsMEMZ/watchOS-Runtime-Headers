//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTSettingsGateway_h
#define BLTSettingsGateway_h
@import Foundation;

@class BBSettingsGateway, NSLock;

@interface BLTSettingsGateway : NSObject {
  /* instance variables */
  BBSettingsGateway *_actualSettingsGateway;
  NSLock *_actualSettingsGatewayLock;
  int _token;
}

/* class methods */
+ (id)surrogateWithQueue:(id)queue;
+ (BOOL)instancesRespondToSelector:(SEL)selector;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (void)dealloc;
- (void)forwardInvocation:(id)invocation;
- (BOOL)respondsToSelector:(SEL)selector;
- (BOOL)isKindOfClass:(Class)class;
- (id)methodSignatureForSelector:(SEL)selector;
@end

#endif /* BLTSettingsGateway_h */

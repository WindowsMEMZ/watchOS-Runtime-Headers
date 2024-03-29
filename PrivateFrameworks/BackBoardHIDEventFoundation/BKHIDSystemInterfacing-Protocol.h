//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKHIDSystemInterfacing_Protocol_h
#define BKHIDSystemInterfacing_Protocol_h
@import Foundation;

@protocol BKHIDSystemInterfacing <BKIOHIDServiceMatcherDataProviding>

@property (readonly) BKHIDEventDeliveryManager *deliveryManager;
@property (readonly) BKHIDEventSenderCache *senderCache;
@property (readonly) BKHIDClientConnectionManager *clientConnectionManager;

/* instance methods */
- (id)systemPropertyForKey:(id)key;
- (void)setSystemProperty:(id)property forKey:(id)key;
- (void)injectHIDEvent:(struct __IOHIDEvent *)hidevent;
- (void)injectGSEvent:(struct __GSEvent *)gsevent;
- (struct __IOHIDEvent *)systemEventOfType:(unsigned int)type matchingEvent:(struct __IOHIDEvent *)event options:(unsigned int)options;
@end

#endif /* BKHIDSystemInterfacing_Protocol_h */

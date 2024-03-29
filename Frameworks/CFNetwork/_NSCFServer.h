//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef _NSCFServer_h
#define _NSCFServer_h
@import Foundation;

@class NSDictionary, NSNumber, NSString;
@protocol OS_tcp_listener;

@interface _NSCFServer : NSObject {
  /* instance variables */
  NSNumber *_listenerID;
  NSObject<OS_tcp_listener> *_listener;
}

@property long long type;
@property long long listenerPort;
@property (retain) NSString *interface;
@property (retain) NSDictionary *configuration;
@property BOOL enableCoprocessorInterface;

/* class methods */
+ (BOOL)startSocksServerWithPort:(long long)port;
+ (BOOL)stopAll;
+ (id)adressesForInterface:(id)interface;

/* instance methods */
- (id)initWithType:(long long)type port:(long long)port interface:(id)interface;
- (id)initWithType:(long long)type;
- (id)initWithType:(long long)type port:(long long)port;
- (id)init;
- (BOOL)start;
- (BOOL)stop;
- (void)dealloc;
- (BOOL)isCoprocessorInterfaceEnabled;
@end

#endif /* _NSCFServer_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXUIClientMessenger_h
#define AXUIClientMessenger_h
@import Foundation;

@class AXMultiplexConnectionHandler, NSString;

@interface AXUIClientMessenger : NSObject

@property (copy, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) AXMultiplexConnectionHandler *connection;

/* class methods */
+ (id)clientMessengerWithIdentifier:(id)identifier;

/* instance methods */
- (id)init;
- (id)initWithClientIdentifier:(id)identifier connection:(id)connection;
- (void)sendAsynchronousMessage:(id)message withIdentifier:(unsigned long long)identifier targetAccessQueue:(id)queue completion:(id /* block */)completion;
- (void)sendAsynchronousMessage:(id)message withIdentifier:(unsigned long long)identifier targetAccessQueue:(id)queue completionRequiresWritingBlock:(BOOL)block completion:(id /* block */)completion;
- (id)sendSynchronousMessage:(id)message withIdentifier:(unsigned long long)identifier error:(id *)error;
- (id)description;
@end

#endif /* AXUIClientMessenger_h */

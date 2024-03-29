//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef KVXPCClient_h
#define KVXPCClient_h
@import Foundation;

@class NSString, NSXPCConnection;

@interface KVXPCClient : NSObject

@property (retain) NSXPCConnection *connection;
@property unsigned short failureCode;
@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) unsigned short interruptionCode;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)init;
- (id)initWithServiceProtocol:(id)protocol machServiceName:(id)name clientId:(id)id interruptionCode:(unsigned short)code invalidationCode:(unsigned short)code;
- (void)dealloc;
- (id /* block */)_failureHandlerWithResponse:(unsigned short)response;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)completion;
- (void)serviceRequest:(BOOL)request completion:(id /* block */)completion usingBlock:(id /* block */)block;
- (void)serviceOptionsRespondingRequest:(BOOL)request completion:(id /* block */)completion usingBlock:(id /* block */)block;
- (void)serviceVersionRespondingRequest:(BOOL)request completion:(id /* block */)completion usingBlock:(id /* block */)block;
- (void)serviceArrayRespondingRequestWithCompletion:(id /* block */)completion usingBlock:(id /* block */)block;
- (id)_remoteObjectProxy:(BOOL)proxy errorCompletion:(id /* block */)completion;
@end

#endif /* KVXPCClient_h */

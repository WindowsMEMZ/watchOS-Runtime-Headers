//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWNetworkAgentRegistration_h
#define NWNetworkAgentRegistration_h
@import Foundation;

@class NSUUID;
@protocol NWNetworkAgent, OS_dispatch_queue, OS_dispatch_source;

@interface NWNetworkAgentRegistration : NSObject

@property Class networkAgentClass;
@property (retain) NSObject<NWNetworkAgent> *networkAgent;
@property (retain) NSUUID *registeredUUID;
@property int registrationSocket;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *readSource;
@property (readonly, nonatomic) BOOL registered;
@property (readonly, nonatomic) unsigned int tokenCount;
@property (nonatomic) unsigned long long useCount;

/* class methods */
+ (int)newRegistrationFileDescriptor;
+ (BOOL)addActiveAssertionToNetworkAgent:(id)agent;
+ (BOOL)removeActiveAssertionFromNetworkAgent:(id)agent;
+ (BOOL)useNetworkAgent:(id)agent returnUseCount:(unsigned long long *)count;

/* instance methods */
- (id)initWithNetworkAgentClass:(Class)class;
- (id)initWithNetworkAgentClass:(Class)class queue:(id)queue;
- (void)dealloc;
- (id)descriptionWithIndent:(int)indent showFullContent:(BOOL)content;
- (id)description;
- (BOOL)isRegistered;
- (int)dupRegistrationFileDescriptor;
- (void)handleMessageFromAgent;
- (BOOL)createReadSourceWithRegistrationSocket:(int)socket;
- (BOOL)registerNetworkAgent:(id)agent withFileDescriptor:(int)descriptor;
- (BOOL)registerNetworkAgent:(id)agent;
- (BOOL)setRegisteredNetworkAgent:(id)agent fileDescriptor:(int)descriptor;
- (BOOL)updateNetworkAgent:(id)agent;
- (BOOL)unregisterNetworkAgent;
- (BOOL)addToken:(id)token;
- (BOOL)flushTokens;
- (BOOL)resetError;
- (BOOL)setLowWaterMark:(unsigned int)mark;
- (BOOL)addNetworkAgentToInterfaceNamed:(id)named;
- (BOOL)removeNetworkAgentFromInterfaceNamed:(id)named;
- (BOOL)assignNexusData:(id)data toClient:(id)client;
- (BOOL)assignDiscoveredEndpoints:(id)endpoints toClient:(id)client;
- (BOOL)assignResolvedEndpoints:(id)endpoints toClient:(id)client;
@end

#endif /* NWNetworkAgentRegistration_h */

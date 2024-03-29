//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef CSXPCConnection_h
#define CSXPCConnection_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSXPCConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (nonatomic) unsigned int user;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL machService;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL listener;
@property (nonatomic) BOOL nonLaunching;
@property (nonatomic) BOOL privateDaemon;
@property (nonatomic) BOOL previouslyInitialized;

/* class methods */
+ (id)copyNSStringForKey:(const char *)key fromXPCDictionary:(id)xpcdictionary;
+ (id)copyNSDataForKey:(const char *)key fromXPCDictionary:(id)xpcdictionary;
+ (id)copyNSStringArrayFromXPCArray:(id)xpcarray;
+ (id)copyNSString:(id)nsstring;
+ (id)copyNSObject:(id)nsobject;
+ (id)copyNSDictionaryFromXPCObject:(id)xpcobject;
+ (id)copyNSArrayFromXPCObject:(id)xpcobject;
+ (id)copyNSStringOrDictArrayFromXPCArray:(id)xpcarray;
+ (id)copyNSNumberArrayFromXPCArray:(id)xpcarray;
+ (id)copyNSStringSetFromXPCArray:(id)xpcarray;
+ (void)dictionary:(id)dictionary setStringArray:(id)array forKey:(const char *)key;
+ (void)dictionary:(id)dictionary setValue:(id)value forKey:(const char *)key;
+ (void)array:(id)array setValue:(id)value atIndex:(long long)index;
+ (id)constructArray:(id)array;
+ (id)constructDictionary:(id)dictionary;
+ (void)dictionary:(id)dictionary setStringOrDictionaryArray:(id)array forKey:(const char *)key;
+ (void)dictionary:(id)dictionary setNumberArray:(id)array forKey:(const char *)key;
+ (BOOL)dictionary:(id)dictionary setSharedMemory:(void *)memory forKey:(const char *)key size:(unsigned long long)size forSizeKey:(const char *)key;
+ (void)dictionary:(id)dictionary setPlistBytes:(struct __MDPlistBytes *)bytes forKey:(const char *)key sizeKey:(const char *)key;
+ (void)dictionary:(id)dictionary setPlistContainer:(struct _MDPlistContainer *)container forKey:(const char *)key sizeKey:(const char *)key;
+ (id)dataWrapperForKey:(const char *)key sizeKey:(const char *)key fromXPCDictionary:(id)xpcdictionary allowWritableSharedMemory:(BOOL)memory;
+ (id)dataWrapperForKey:(const char *)key sizeKey:(const char *)key fromXPCDictionary:(id)xpcdictionary;
+ (id)appIdentifierFromTeamAppTuple:(id)tuple;
+ (id)processNameForPID:(int)pid;
+ (BOOL)journalEnabled;
+ (void)setJournalEnabled:(BOOL)enabled;
+ (id)copyPlistFromXPCObject:(id)xpcobject;
+ (void)journalDictionary:(id)dictionary toFolderPath:(const char *)path forPID:(int)pid withLabel:(const char *)label andID:(unsigned long long)id;

/* instance methods */
- (void)startListener;
- (id)initWithMachServiceName:(id)name;
- (id)initWithServiceName:(id)name;
- (id)initWithServiceName:(id)name machService:(BOOL)service uuid:(id)uuid;
- (id)initWithServiceName:(id)name machService:(BOOL)service;
- (id)initListenerWithName:(id)name;
- (id)initMachServiceListenerWithName:(id)name;
- (void)_setUser:(unsigned int)user;
- (BOOL)handleCommand:(const char *)command info:(id)info connection:(id)connection;
- (BOOL)handleMessage:(id)message type:(struct _xpc_type_s *)type connection:(id)connection;
- (BOOL)addClientConnectionIfAllowedForConfiguration:(id)configuration;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)connection;
- (BOOL)lostClientConnection:(id)connection error:(id)error;
- (void)_lostClientConnection:(id)connection error:(id)error;
- (void)handleError:(id)error;
- (void)handleReply:(id)reply;
- (void)sendMessageAsync:(id)async completion:(id /* block */)completion;
- (void)sendMessageAsync:(id)async;
- (void)suspend;
- (void)resume;
@end

#endif /* CSXPCConnection_h */

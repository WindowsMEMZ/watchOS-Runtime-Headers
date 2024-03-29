//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2679.64.1.0.0
//
#ifndef LASSProperties4RB_h
#define LASSProperties4RB_h
@import Foundation;

@class NSString, NSUUID;
@protocol OS_xpc_object;

@interface LASSProperties4RB : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSUUID *instance;
@property (readonly, nonatomic) int requestedJetsamPriority;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *additionalProperties;
@property (readonly, nonatomic) NSString *program;
@property (readonly, nonatomic) unsigned int processType;
@property (readonly, nonatomic) BOOL keepAlive;
@property (readonly, nonatomic) BOOL runAtLoad;
@property (readonly, nonatomic) BOOL enableTransactions;
@property (readonly, nonatomic) BOOL enablePressuredExit;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *endpoints;
@property (readonly, nonatomic) long long serviceType;

/* class methods */
+ (id)_propertiesFromAttrs:(id)attrs;
+ (id)propertiesForPid:(int)pid error:(id *)error;
+ (id)propertiesForJob:(id)job error:(id *)error;

/* instance methods */
- (id)initWithLabel:(id)label instance:(id)instance requestedJetsamPriority:(int)priority additionalProperties:(id)properties program:(id)program processType:(unsigned int)type keepAlive:(BOOL)alive runAtLoad:(BOOL)load enableTransactions:(BOOL)transactions endpoints:(id)endpoints serviceType:(long long)type;
@end

#endif /* LASSProperties4RB_h */

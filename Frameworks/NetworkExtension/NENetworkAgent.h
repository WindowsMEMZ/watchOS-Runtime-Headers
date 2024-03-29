//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NENetworkAgent_h
#define NENetworkAgent_h
@import Foundation;

#include "NWNetworkAgent-Protocol.h"

@class NSString, NSUUID;

@interface NENetworkAgent : NSObject<NWNetworkAgent> {
  /* instance variables */
  int _internalSessionType;
  NSUUID *_internalUUID;
  NSString *_name;
  id /* block */ _internalStartHandler;
}

@property (readonly, copy) NSUUID *configurationUUID;
@property (copy) NSString *configurationName;
@property (readonly) int sessionType;
@property int lastStatus;
@property (copy, nonatomic) NSString *agentDescription;
@property (copy, nonatomic) NSUUID *agentUUID;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL kernelActivated;
@property (nonatomic) BOOL userActivated;
@property (nonatomic) BOOL voluntary;
@property (nonatomic) BOOL specificUseOnly;
@property (nonatomic) BOOL networkProvider;
@property (nonatomic) BOOL nexusProvider;
@property (nonatomic) BOOL supportsListenRequests;
@property (nonatomic) BOOL supportsBrowseRequests;
@property (nonatomic) BOOL supportsResolveRequests;
@property (nonatomic) BOOL requiresAssert;
@property (nonatomic) BOOL updateClientsImmediately;

/* class methods */
+ (id)agentDomain;
+ (id)agentType;
+ (id)agentFromData:(id)data;

/* instance methods */
- (id)initWithConfigUUID:(id)uuid sessionType:(int)type name:(id)name;
- (BOOL)matchesFileHandle:(id)handle;
- (id)copyAgentData;
- (void)setStartHandler:(id /* block */)handler;
- (BOOL)startAgentWithOptions:(id)options;
- (BOOL)isActive;
- (BOOL)isKernelActivated;
- (BOOL)isUserActivated;
- (BOOL)isVoluntary;
@end

#endif /* NENetworkAgent_h */

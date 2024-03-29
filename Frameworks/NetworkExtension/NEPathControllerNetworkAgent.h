//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEPathControllerNetworkAgent_h
#define NEPathControllerNetworkAgent_h
@import Foundation;

#include "NENetworkAgent.h"

@class NSMutableArray, NSString;

@interface NEPathControllerNetworkAgent : NENetworkAgent {
  /* instance variables */
  BOOL updateClientsImmediately;
  id /* block */ _internalAssertHandler;
  id /* block */ _internalUnassertHandler;
}

@property (retain) NSMutableArray *predictedInterfaceArray;
@property (retain) NSMutableArray *advisoryInterfaceArray;
@property (retain) NSString *advisoryAgentDomain;
@property (retain) NSString *advisoryAgentType;
@property BOOL weakAdvisory;
@property BOOL noAdvisoryTimer;
@property BOOL preferAdvisory;
@property (nonatomic) BOOL isForcedAdvisory;

/* class methods */
+ (id)agentType;
+ (id)agentFromData:(id)data;

/* instance methods */
- (id)copyAgentData;
- (BOOL)assertAgentWithOptions:(id)options;
- (void)unassertAgentWithOptions:(id)options;
- (void)setAssertHandler:(id /* block */)handler;
- (void)setUnassertHandler:(id /* block */)handler;
- (id)initWithAdvisoryInterface:(id)interface advisoryMode:(unsigned long long)mode;
- (id)initWithAdvisoryAgentDomain:(id)domain agentType:(id)type advisoryMode:(unsigned long long)mode;
- (BOOL)updateClientsImmediately;
- (void)setUpdateClientsImmediately:(BOOL)immediately;
@end

#endif /* NEPathControllerNetworkAgent_h */

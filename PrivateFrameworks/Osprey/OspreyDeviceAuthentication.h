//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.5.1.0.0
//
#ifndef OspreyDeviceAuthentication_h
#define OspreyDeviceAuthentication_h
@import Foundation;

#include "OspreyConnectionPreferences.h"
#include "OspreyDeviceAuthenticating-Protocol.h"
#include "OspreyPreferences.h"

@class NSDictionary, NSString;

@interface OspreyDeviceAuthentication : NSObject<OspreyDeviceAuthenticating> {
  /* instance variables */
  OspreyConnectionPreferences *_connectionPreferences;
  OspreyPreferences *_allPreferences;
  NSDictionary *_strategies;
  BOOL _hasCurrentStrategyVersion;
}

@property (nonatomic) unsigned long long currentStrategyVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithChannel:(id)channel connectionPreferences:(id)preferences allPreferences:(id)preferences;
- (unsigned long long)authenticationStrategyVersion;
- (id)_currentStrategy;
- (void)signData:(id)data success:(id /* block */)success failure:(id /* block */)failure;
@end

#endif /* OspreyDeviceAuthentication_h */

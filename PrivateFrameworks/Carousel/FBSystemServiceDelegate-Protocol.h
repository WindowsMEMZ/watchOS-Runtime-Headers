//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef FBSystemServiceDelegate_Protocol_h
#define FBSystemServiceDelegate_Protocol_h
@import Foundation;

@protocol FBSystemServiceDelegate <NSObject>
@optional
/* instance methods */
- (id)systemServiceApplicationInfoProvider:(id)provider;
- (void)systemService:(id)service canActivateApplication:(id)application withResult:(id /* block */)result;
- (void)systemService:(id)service handleOpenApplicationRequest:(id)request withCompletion:(id /* block */)completion;
- (void)systemService:(id)service handleOpenApplicationRequest:(id)request options:(id)options origin:(id)origin withResult:(id /* block */)result;
- (void)systemService:(id)service handleOpenURLRequest:(id)urlrequest application:(id)application options:(id)options origin:(id)origin withResult:(id /* block */)result;
- (void)systemService:(id)service isPasscodeLockedOrBlockedWithResult:(id /* block */)result;
- (void)systemService:(id)service handleActions:(id)actions origin:(id)origin withResult:(id /* block */)result;
- (void)systemService:(id)service prepareForShutdownWithOptions:(id)options origin:(id)origin;
- (void)systemServicePrepareForShutdown:(id)shutdown withOptions:(unsigned long long)options;
- (void)systemServicePrepareForExit:(id)exit andRelaunch:(BOOL)relaunch;
@end

#endif /* FBSystemServiceDelegate_Protocol_h */

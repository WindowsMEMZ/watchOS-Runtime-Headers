//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMMotionUtils_h
#define CMMotionUtils_h
@import Foundation;

@interface CMMotionUtils : NSObject
/* class methods */
+ (id)logDirectory;
+ (void)sendMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage * x0; struct __shared_weak_count * x1; })message withReplyClasses:(id)classes callback:(id /* block */)callback;
+ (id)sendMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage * x0; struct __shared_weak_count * x1; })message withReplyClassesSync:(id)sync;
+ (struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage * x0; struct __shared_weak_count * x1; })sendMessageSync:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage * x0; struct __shared_weak_count * x1; })sync;
+ (BOOL)isMotionActivityEntitled;
+ (BOOL)hasEntitlement:(id)entitlement;
+ (void)tccServiceMotionAccessWithLabel:(id)label;
+ (void)tccServiceMotionAccessWithBlock:(id /* block */)block;
+ (void)tccServiceMotionAccessAllowingMacWithBlock:(id /* block */)block;
+ (void)tccServiceMotionAccessAllowingMac:(BOOL)mac block:(id /* block */)block;
+ (BOOL)featureAvailability:(const char *)availability;
+ (long long)authorizationStatus;
+ (long long)isAuthorizedForEntitlement:(id)entitlement;
+ (id)getExecutablePathFromPid:(int)pid;
+ (id)fileHandleForWritingToURL:(id)url;
+ (unsigned long long)copyDataFrom:(id)from to:(id)to;
@end

#endif /* CMMotionUtils_h */

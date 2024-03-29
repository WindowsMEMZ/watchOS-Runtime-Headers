//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef FTEmbeddedReachability_h
#define FTEmbeddedReachability_h
@import Foundation;

@interface FTEmbeddedReachability : NSObject {
  /* instance variables */
  BOOL localWiFiRef;
  struct __SCNetworkReachability * reachabilityRef;
}

/* class methods */
+ (id)reachabilityWithHostName:(id)name;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8] } *)address;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;

/* instance methods */
- (void)dealloc;
- (long long)localWiFiStatusForFlags:(unsigned int)flags;
- (long long)networkStatusForFlags:(unsigned int)flags;
- (BOOL)connectionRequired;
- (long long)currentReachabilityStatus;
@end

#endif /* FTEmbeddedReachability_h */

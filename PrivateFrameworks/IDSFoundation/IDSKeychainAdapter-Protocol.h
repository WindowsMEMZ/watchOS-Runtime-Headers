//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSKeychainAdapter_Protocol_h
#define IDSKeychainAdapter_Protocol_h
@import Foundation;

@protocol IDSKeychainAdapter <NSObject>
/* instance methods */
- (BOOL)setKeychainData:(id)data service:(id)service account:(id)account accessGroup:(id)group allowSync:(BOOL)sync error:(int *)error;
- (BOOL)getKeychainData:(id *)data service:(id)service account:(id)account accessGroup:(id)group error:(int *)error;
- (BOOL)removeKeychainDataOnService:(id)service account:(id)account error:(int *)error;
@end

#endif /* IDSKeychainAdapter_Protocol_h */

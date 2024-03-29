//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef _CSLUIActivationAssertionServerEntry_h
#define _CSLUIActivationAssertionServerEntry_h
@import Foundation;

@class NSString;
@protocol BSXPCServerClient;

@interface _CSLUIActivationAssertionServerEntry : NSObject {
  /* instance variables */
  struct __CFUUID * _uuid;
}

@property (retain, nonatomic) NSObject<BSXPCServerClient> *owningClient;
@property (readonly, nonatomic) NSString *uuidString;

/* instance methods */
- (void)setUuid:(struct __CFUUID *)uuid;
- (struct __CFUUID *)uuid;
- (void)dealloc;
@end

#endif /* _CSLUIActivationAssertionServerEntry_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPhoneCallManager_h
#define CSLPhoneCallManager_h
@import Foundation;

@class NSString, TUCallCenter;

@interface CSLPhoneCallManager : NSObject {
  /* instance variables */
  TUCallCenter *_callCenter;
}

@property (readonly, nonatomic) BOOL inTinCanCall;
@property (readonly, nonatomic) BOOL inCall;
@property (readonly, nonatomic) NSString *currentPhoneCallBundleID;

/* class methods */
+ (id)sharedPhoneCallManager;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)isTelephonyBundleID:(id)id;
@end

#endif /* CSLPhoneCallManager_h */

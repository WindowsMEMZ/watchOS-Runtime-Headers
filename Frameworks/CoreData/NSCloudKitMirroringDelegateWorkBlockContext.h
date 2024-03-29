//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSCloudKitMirroringDelegateWorkBlockContext_h
#define NSCloudKitMirroringDelegateWorkBlockContext_h
@import Foundation;

@class NSString;

@interface NSCloudKitMirroringDelegateWorkBlockContext : NSObject {
  /* instance variables */
  NSString *_transactionLabel;
  NSString *_powerAssertionLabel;
  id _uiAppInstance;
  unsigned long long _powerAssertionID;
}

/* instance methods */
- (id)initWithTransactionLabel:(id)label powerAssertionLabel:(id)label;
- (void)dealloc;
@end

#endif /* NSCloudKitMirroringDelegateWorkBlockContext_h */

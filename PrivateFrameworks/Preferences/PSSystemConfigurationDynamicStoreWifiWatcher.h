//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSSystemConfigurationDynamicStoreWifiWatcher_h
#define PSSystemConfigurationDynamicStoreWifiWatcher_h
@import Foundation;

@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject {
  /* instance variables */
  struct __SCDynamicStore * _prefs;
  struct __CFString * _wifiKey;
  struct __CFString * _wifiInterface;
  struct __CFString * _tetheringLink;
}

/* class methods */
+ (id)sharedInstance;
+ (BOOL)wifiEnabled;

/* instance methods */
- (void)findKeysAirPortState:(id *)state andTetheringState:(id *)state;
- (id)_wifiTetheringWithState:(id)state;
- (id)_wifiPowerWithState:(id)state;
- (id)_wifiNameWithState:(id)state;
- (id)wifiConfig;
- (id)init;
- (void)dealloc;
@end

#endif /* PSSystemConfigurationDynamicStoreWifiWatcher_h */

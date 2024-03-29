//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1603.60.7.0.0
//
#ifndef BrightnessSystem_h
#define BrightnessSystem_h
@import Foundation;

@interface BrightnessSystem : NSObject {
  /* instance variables */
  BOOL _initializationComplete;
}

/* instance methods */
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (id)init;
- (void)dealloc;
- (BOOL)setProperty:(id)property forKey:(id)key;
- (id)copyPropertyForKey:(id)key;
- (BOOL)isAlsSupported;
- (void)registerNotificationBlock:(id /* block */)block;
@end

#endif /* BrightnessSystem_h */

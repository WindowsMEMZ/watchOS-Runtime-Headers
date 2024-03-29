//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVCMNotificationDispatcherListenerKey_h
#define AVCMNotificationDispatcherListenerKey_h
@import Foundation;

#include "AVWeakReference.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface AVCMNotificationDispatcherListenerKey : NSObject<NSCopying> {
  /* instance variables */
  AVWeakReference *_weakReferenceToListener;
  undefined * _callback;
  NSString *_name;
  void * _object;
}

/* class methods */
+ (id)listenerKeyWithWeakReferenceToListener:(id)listener callback:(undefined *)callback name:(id)name object:(void *)object;

/* instance methods */
- (id)init;
- (id)initWithWeakReferenceToListener:(id)listener callback:(undefined *)callback name:(id)name object:(void *)object;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* AVCMNotificationDispatcherListenerKey_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUUserAlert_h
#define CUUserAlert_h
@import Foundation;

#include "CUActivatable-Protocol.h"

@class NSBundle, NSString;
@protocol OS_dispatch_queue;

@interface CUUserAlert : NSObject<CUActivatable> {
  /* instance variables */
  BOOL _activateCalled;
  BOOL _invalidateCalled;
  BOOL _invalidateDone;
  BOOL _dismissed;
  struct __CFUserNotification * _userNotification;
  struct __CFRunLoopSource * _userRLS;
}

@property (retain, nonatomic) NSBundle *localizationBundle;
@property (copy, nonatomic) NSString *localizationTableName;
@property (copy, nonatomic) NSString *titleKey;
@property (copy, nonatomic) NSString *titleParameter;
@property (copy, nonatomic) NSString *subtitleKey;
@property (copy, nonatomic) NSString *subtitleParameter;
@property (copy, nonatomic) NSString *defaultButtonTitleKey;
@property (copy, nonatomic) NSString *alternativeButtonTitleKey;
@property (nonatomic) double timeoutSeconds;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)activateWithCompletion:(id /* block */)completion;
- (void)_activateWithCompletion:(id /* block */)completion;
- (void)invalidate;
- (void)_autoInvalidate;
- (void)_invalidated;
- (void)_responseCallback:(struct __CFUserNotification *)callback responseFlags:(unsigned long long)flags;
@end

#endif /* CUUserAlert_h */

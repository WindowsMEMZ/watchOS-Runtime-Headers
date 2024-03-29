//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 912.3.3.0.0
//
#ifndef NTSAlert_h
#define NTSAlert_h
@import Foundation;

#include "NTSAlertable-Protocol.h"

@class UNNotification;
@protocol NTSAlertProvider;

@interface NTSAlert : NSObject

@property (retain, nonatomic) NSObject<NTSAlertable> *alert;
@property (retain, nonatomic) UNNotification *notification;
@property (readonly, weak, nonatomic) NSObject<NTSAlertProvider> *alertProvider;

/* instance methods */
- (id)initWithAlertable:(id)alertable notification:(id)notification alertProvider:(id)provider;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (double)_assertionTimeout;
- (void)_takePowerAssertion;
- (void)_releasePowerAssertion;
@end

#endif /* NTSAlert_h */

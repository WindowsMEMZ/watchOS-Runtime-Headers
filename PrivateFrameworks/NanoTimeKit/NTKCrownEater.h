//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKCrownEater_h
#define NTKCrownEater_h
@import Foundation;

#include "UIView.h"
#include "CSLPIButtonHandlerProtocol-Protocol.h"

@class NSString;

@interface NTKCrownEater : UIView<CSLPIButtonHandlerProtocol>

@property (readonly, nonatomic) unsigned long long crownsEaten;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)handleButton:(unsigned long long)button eventType:(unsigned long long)type;
@end

#endif /* NTKCrownEater_h */

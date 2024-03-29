//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDEventHandlerForAppInFocus_h
#define _CDEventHandlerForAppInFocus_h
@import Foundation;

#include "_CDDataCollectionAnonymizer.h"
#include "_CDEventHandlerDelegate-Protocol.h"
#include "_CDFileUtility.h"

@class NSString;

@interface _CDEventHandlerForAppInFocus : NSObject<_CDEventHandlerDelegate>

@property (retain, nonatomic) _CDDataCollectionAnonymizer *anonymizer;
@property (retain, nonatomic) _CDFileUtility *utility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)eventHandler:(id)handler withFileHandle:(id)handle;
@end

#endif /* _CDEventHandlerForAppInFocus_h */

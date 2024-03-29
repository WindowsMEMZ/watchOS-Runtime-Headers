//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 976.40.4.0.0
//
#ifndef PCSCKKSSyncViewOperation_h
#define PCSCKKSSyncViewOperation_h
@import Foundation;

#include "PCSCKKSOperation.h"
#include "PCSCKKSItemModifyContext.h"

@class CKKSControl, NSString;

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation

@property (readonly) PCSCKKSItemModifyContext *context;
@property (retain) CKKSControl *CKKSControl;
@property (retain) NSString *view;

/* instance methods */
- (id)initWithItemModifyContext:(id)context;
- (void)start;
- (BOOL)ensureControl;
- (void)checkTLKStatus;
- (void)syncView;
@end

#endif /* PCSCKKSSyncViewOperation_h */

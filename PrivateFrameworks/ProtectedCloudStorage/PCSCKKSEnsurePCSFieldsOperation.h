//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 976.40.4.0.0
//
#ifndef PCSCKKSEnsurePCSFieldsOperation_h
#define PCSCKKSEnsurePCSFieldsOperation_h
@import Foundation;

#include "PCSCKKSOperation.h"
#include "PCSCKKSItemModifyContext.h"

@interface PCSCKKSEnsurePCSFieldsOperation : PCSCKKSOperation

@property (retain) PCSCKKSItemModifyContext *context;

/* instance methods */
- (id)initWithItemModifyContext:(id)context;
- (BOOL)haveCKKSPlaintextEntitlements;
- (void)start;
- (int)updateKeychain:(id)keychain withAttributes:(id)attributes;
@end

#endif /* PCSCKKSEnsurePCSFieldsOperation_h */

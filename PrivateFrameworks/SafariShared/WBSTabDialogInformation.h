//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSTabDialogInformation_h
#define WBSTabDialogInformation_h
@import Foundation;

@class NSArray;

@interface WBSTabDialogInformation : NSObject {
  /* instance variables */
  id /* block */ _dismissalBlock;
  BOOL _isInvokingPresentationBlock;
  id /* block */ _presentationBlock;
}

@property (nonatomic) struct { int x0; unsigned long long x1; } slot;
@property (copy, nonatomic) NSArray *cancellationExemptions;
@property (readonly, nonatomic) BOOL blockingWebProcess;
@property (readonly, nonatomic) BOOL dismissed;
@property (readonly, nonatomic) BOOL presented;

/* instance methods */
- (id)initWithPresentationBlock:(id /* block */)block dismissalBlock:(id /* block */)block blocksWebProcessUntilDismissed:(BOOL)dismissed;
- (id)description;
- (void)presentIfNeeded;
- (void)dismissWithResponse:(id)response;
- (BOOL)isExemptFromCancellationInContext:(id)context;
- (BOOL)isBlockingWebProcess;
- (BOOL)isDismissed;
- (BOOL)isPresented;
@end

#endif /* WBSTabDialogInformation_h */

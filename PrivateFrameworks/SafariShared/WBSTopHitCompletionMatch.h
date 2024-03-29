//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSTopHitCompletionMatch_h
#define WBSTopHitCompletionMatch_h
@import Foundation;

#include "WBSBookmarkAndHistoryCompletionMatch.h"

@interface WBSTopHitCompletionMatch : WBSBookmarkAndHistoryCompletionMatch {
  /* instance variables */
  BOOL _shouldPreload;
}

/* instance methods */
- (id)initWithBookmarkAndHistoryCompletionMatch:(void *)match userInput:(id)input forQueryID:(long long)id shouldPreload:(BOOL)preload;
- (BOOL)isTopHit;
- (id)parsecDomainIdentifier;
- (BOOL)shouldPreload;
@end

#endif /* WBSTopHitCompletionMatch_h */

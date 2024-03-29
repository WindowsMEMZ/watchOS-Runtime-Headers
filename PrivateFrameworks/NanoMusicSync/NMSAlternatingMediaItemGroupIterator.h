//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMSAlternatingMediaItemGroupIterator_h
#define NMSAlternatingMediaItemGroupIterator_h
@import Foundation;

#include "NMSMediaItemGroupIterator.h"

@interface NMSAlternatingMediaItemGroupIterator : NMSMediaItemGroupIterator {
  /* instance variables */
  unsigned long long _maxItemListSize;
}

/* instance methods */
- (unsigned long long)iteratingOrder;
- (void)_generateItemListAndSizesDictIfNecessary;
- (void)_continueToNextIdentifier;
- (void)_continueToNextContainer;
- (void)markAllRemainingContainersAsSkipped;
- (void)resetToIterateOverQuotaIdentifiers;
- (void)_resetMaxItemListSize;
@end

#endif /* NMSAlternatingMediaItemGroupIterator_h */

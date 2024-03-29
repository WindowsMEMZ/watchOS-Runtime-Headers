//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKPlaceCuratedCollectionRefiner_h
#define MKPlaceCuratedCollectionRefiner_h
@import Foundation;

#include "MKMapItemIdentifier.h"
#include "MKMapServiceCuratedCollectionItemsTicket-Protocol.h"
#include "MKMapServiceCuratedCollectionTicket-Protocol.h"

@interface MKPlaceCuratedCollectionRefiner : NSObject {
  /* instance variables */
  MKMapItemIdentifier *_collectionIdentifier;
  NSObject<MKMapServiceCuratedCollectionTicket> *_identifierRefinementTicket;
  NSObject<MKMapServiceCuratedCollectionItemsTicket> *_mapItemRefinementTicket;
}

/* instance methods */
- (id)initWithCollectionIdentifier:(unsigned long long)identifier;
- (id)initWithCollectionIdentifier:(unsigned long long)identifier providerIdentifier:(int)identifier;
- (void)fetchWithCallbackQueue:(id)queue completion:(id /* block */)completion;
- (void)_resolveMapItemsWithCollection:(id)collection callbackQueue:(id)queue completion:(id /* block */)completion;
@end

#endif /* MKPlaceCuratedCollectionRefiner_h */

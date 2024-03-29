//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDPInteractionStoreDataHarvester_h
#define _CDPInteractionStoreDataHarvester_h
@import Foundation;

#include "_CDInteractionStore.h"
#include "_CDPDataHarvester-Protocol.h"

@class NSArray, NSMutableDictionary, NSPredicate, NSString;

@interface _CDPInteractionStoreDataHarvester : NSObject<_CDPDataHarvester> {
  /* instance variables */
  NSMutableDictionary *_identifierToContactMap;
}

@property (retain, nonatomic) _CDInteractionStore *store;
@property (retain, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) NSArray *interactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)loadWithLimit:(unsigned long long)limit dataPointReader:(id /* block */)reader completion:(id /* block */)completion;
- (id)contactForIdentifier:(id)identifier;
@end

#endif /* _CDPInteractionStoreDataHarvester_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTGizmoMuteSync_h
#define BLTGizmoMuteSync_h
@import Foundation;

#include "BLTMuteSync.h"
#include "BLTSectionIdentifierMapper.h"

@interface BLTGizmoMuteSync : BLTMuteSync {
  /* instance variables */
  BLTSectionIdentifierMapper *_mapper;
}

/* instance methods */
- (id)initWithSectionIdentifierMapper:(id)mapper;
- (id)syncSectionIdentifierForSectionIdentifier:(id)identifier;
- (BOOL)isMutedForTodaySectionIdentifier:(id)identifier;
- (void)toggleSectionIdentifier:(id)identifier;
- (void)_addSectionIdentifier:(id)identifier;
- (void)_removeSectionIdentifier:(id)identifier;
- (void)addSectionIdentifiers:(id)identifiers;
- (void)removeSectionIdentifiers:(id)identifiers;
@end

#endif /* BLTGizmoMuteSync_h */

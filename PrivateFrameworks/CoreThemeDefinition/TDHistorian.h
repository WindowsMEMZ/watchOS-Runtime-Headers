//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 581.0.0.0.0
//
#ifndef TDHistorian_h
#define TDHistorian_h
@import Foundation;

#include "CoreThemeDocument.h"

@interface TDHistorian : NSObject {
  /* instance variables */
  CoreThemeDocument *document;
}

/* instance methods */
- (id)_updateRecordsWithName:(id)name sinceDate:(id)date;
- (void)_updateEntryForManagedObject:(id)object;
- (void)updateEntriesForManagedObjects:(id)objects;
- (BOOL)foundDataChangesSinceDate:(id)date;
- (id)productionsWithModifiedAssets;
- (id)productionsChangedSinceDate:(id)date uuidNeedsReset:(BOOL *)reset;
- (id)colorsChangedSinceDate:(id)date;
- (id)fontsChangedSinceDate:(id)date;
- (id)fontSizesChangedSinceDate:(id)date;
- (id)namedElementsChangedSinceDate:(id)date;
- (id)facetDefinitionsChangedSinceDate:(id)date;
- (id)keySpecsForRenditionsRemovedSinceDate:(id)date;
- (id)initWithDocument:(id)document;
@end

#endif /* TDHistorian_h */

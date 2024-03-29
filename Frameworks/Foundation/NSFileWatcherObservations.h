//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSFileWatcherObservations_h
#define NSFileWatcherObservations_h
@import Foundation;

#include "NSString.h"

@interface NSFileWatcherObservations : NSObject {
  /* instance variables */
  BOOL _attributesChanged;
  BOOL _contentsChanged;
  BOOL _deleted;
  BOOL _moved;
  NSString *_lastObservedPath;
  BOOL _didResetPath;
  NSString *_path;
}

/* instance methods */
- (id)initWithPath:(id)path;
- (void)dealloc;
- (void)addAttributeChange;
- (void)addContentsChange;
- (void)addDeletion;
- (void)addDetectedMoveToPath:(id)path;
- (void)addAnnouncedMoveToPath:(id)path;
- (id)description;
- (void)notifyObserver:(id /* block */)observer;
@end

#endif /* NSFileWatcherObservations_h */

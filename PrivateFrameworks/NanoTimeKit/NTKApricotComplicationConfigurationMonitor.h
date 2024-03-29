//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKApricotComplicationConfigurationMonitor_h
#define NTKApricotComplicationConfigurationMonitor_h
@import Foundation;

#include "NTKApricotComplicationConfigurationMonitorDelegate-Protocol.h"
#include "NTKFace.h"
#include "NTKFaceCollection.h"
#include "NTKFaceCollectionObserver-Protocol.h"
#include "NTKFaceObserver-Protocol.h"

@class CLKDevice, NSHashTable, NSMapTable, NSMutableArray, NSString;

@interface NTKApricotComplicationConfigurationMonitor : NSObject<NTKFaceCollectionObserver, NTKFaceObserver> {
  /* instance variables */
  NSMapTable *_faceToContainers;
  NSHashTable *_observedFaces;
  NTKFace *_selectedFace;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  CLKDevice *_device;
}

@property (weak, nonatomic) NSObject<NTKApricotComplicationConfigurationMonitorDelegate> *delegate;
@property (retain, nonatomic) NTKFaceCollection *libraryFaceCollection;
@property (readonly, copy, nonatomic) NSMutableArray *activeConfiguredWidgetContainerDescriptors;
@property (readonly, copy, nonatomic) NSMutableArray *inactiveConfiguredWidgetContainerDescriptors;
@property (nonatomic) BOOL includeOnDeckFaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDevice:(id)device;
- (void)dealloc;
- (void)_observeFace:(id)face;
- (void)_unobserveFace:(id)face;
- (void)_unobserveAllFaces;
- (void)_observeAllFaces;
- (void)_notifyDelegateConfiguredWidgetContainerDescriptorsChanged;
- (void)_updateContainersForFace:(id)face;
- (void)_removeContainersForFace:(id)face;
- (id)_lock_configuredContainersForFace:(id)face;
- (void)_lock_updateContainersForFace:(id)face;
- (id)_activeFaces;
- (void)_updateObservedFaces;
- (void)faceCollectionDidLoad:(id)load;
- (void)faceCollectionDidReset:(id)reset;
- (void)faceCollection:(id)collection didSelectFace:(id)face atIndex:(unsigned long long)index;
- (void)faceConfigurationDidChange:(id)change;
@end

#endif /* NTKApricotComplicationConfigurationMonitor_h */

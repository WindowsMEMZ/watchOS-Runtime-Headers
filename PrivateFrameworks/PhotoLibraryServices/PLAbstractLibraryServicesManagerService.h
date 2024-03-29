//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAbstractLibraryServicesManagerService_h
#define PLAbstractLibraryServicesManagerService_h
@import Foundation;

#include "PLLibraryServicesManager.h"

@interface PLAbstractLibraryServicesManagerService : NSObject

@property (readonly, nonatomic) PLLibraryServicesManager *libraryServicesManager;

/* instance methods */
- (id)initWithLibraryServicesManager:(id)manager;
- (id)newShortLivedLibraryWithName:(const char *)name;
@end

#endif /* PLAbstractLibraryServicesManagerService_h */

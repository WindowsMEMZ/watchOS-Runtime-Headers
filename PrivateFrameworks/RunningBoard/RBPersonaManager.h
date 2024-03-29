//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBPersonaManager_h
#define RBPersonaManager_h
@import Foundation;

#include "RBPersonaManaging-Protocol.h"

@interface RBPersonaManager : NSObject<RBPersonaManaging> {
  /* instance variables */
  BOOL _personasSupported;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

/* instance methods */
- (id)init;
- (BOOL)personaForIdentity:(id)identity context:(id)context personaUID:(out unsigned int *)uid personaUniqueString:(out id *)string;
- (BOOL)personasAreSupported;
- (id)personalPersonaUniqueString;
- (BOOL)isConcretePersona:(id)persona;
- (BOOL)personaRequiredForExtensionContext:(id)context serviceDict:(id)dict;
@end

#endif /* RBPersonaManager_h */

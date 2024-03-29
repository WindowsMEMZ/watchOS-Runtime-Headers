//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHAwardPluginSystem_h
#define ACHAwardPluginSystem_h
@import Foundation;

@class NSArray;

@interface ACHAwardPluginSystem : NSObject {
  /* instance variables */
  NSArray *_plugins;
  NSArray *_progressProviders;
}

/* instance methods */
- (id)init;
- (id)_pluginDirectoryPath;
- (id)_principalClassProtocols;
- (id)_pluginClasses;
- (id)_loadPrincipalClassesConformingToProtocols:(id)protocols fromBundlesInDirectoryAtPath:(id)path error:(id *)error;
- (Class)_loadPrincipalClassConformingToProtocols:(id)protocols fromBundleAtPath:(id)path;
- (id)_createPluginsFromClasses:(id)classes;
- (void)_loadPlugins;
- (id)createTemplateAssetSources;
- (id)createProgressProviders;
@end

#endif /* ACHAwardPluginSystem_h */

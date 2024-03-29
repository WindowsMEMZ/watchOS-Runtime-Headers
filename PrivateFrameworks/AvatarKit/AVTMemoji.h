//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef AVTMemoji_h
#define AVTMemoji_h
@import Foundation;

#include "AVTAvatar.h"
#include "AVTAssetResourceCache.h"
#include "AVTAvatarBodyPose.h"
#include "AVTCompositor.h"
#include "AVTMemojiWrapDeformerDriverInfo.h"

@class NSDictionary, SCNMaterial, SCNNode;

@interface AVTMemoji : AVTAvatar {
  /* instance variables */
  unsigned long long _usageIntent;
  unsigned long long _visibleBodyParts;
  AVTAssetResourceCache *_resourceCache;
  BOOL _needsUpdate;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updateLock;
  SCNNode *_headComponentContainer;
  SCNNode *_bodyComponentContainer;
  SCNNode *_handsComponentContainer;
  SCNNode *_headNode;
  SCNNode *_torsoNode;
  SCNNode *_avatarNode;
  SCNNode *_eyelashes;
  SCNNode *_eyesAndTongue;
  AVTMemojiWrapDeformerDriverInfo *_outfitWrapDeformerDriverInfo;
  AVTMemojiWrapDeformerDriverInfo *_headwearWrapDeformerDriverInfo;
  SCNMaterial *_eyeMaterialLeft;
  SCNMaterial *_eyeMaterialRight;
  NSDictionary *_eyesAndTongueSpecializationSettings;
  AVTComponent * _components[42];
  AVTComponentInstance * _componentInstances[42];
  unsigned long long _componentDirtyMask;
  unsigned long long _componentAnimatedMask;
  AVTPreset * _presets[40];
  AVTPreset * _resolvedPresets[40];
  AVTPreset * _currentPresetsForVariants[40];
  BOOL _hasPresetDependency[40];
  AVTColorPreset"] * x[40[3] _colorPresets;
  struct CGImage * _combinedAOImage;
  BOOL _aoValid;
  AVTCompositor *_compositor;
  unsigned long long _compositorComponentDirtyMask;
  BOOL _hairPhysicsShouldIgnoreUpperNodes;
  SCNNode *_headSkeletonRootNode;
  SCNNode *_bodySkeletonRootNode;
  AVTAvatarBodyPose *_bodyPose;
  NSDictionary *_specializationSettings;
  id /* block */ _componentAssetNodeObservationForStickerBlock;
}

/* class methods */
+ (id)neutralMemojiDataRepresentation;
+ (id)neutralMemojiDescriptor;
+ (id)neutralMemoji;
+ (id)neutralMemojiPresetsIdentifiersPerCategory;
+ (id)memoji;
+ (id)memojiWithContentsOfURL:(id)url error:(id *)error;
+ (id)memojiWithContentsOfURL:(id)url usageIntent:(unsigned long long)intent error:(id *)error;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)dealloc;
- (void)removeAllComponents;
- (void)resetToDefault;
- (id)newDescriptor;
- (id)initWithDescriptor:(id)descriptor usageIntent:(unsigned long long)intent error:(id *)error;
- (id)init;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (1)arOffset;
- (float)arScale;
- (id)assetResourceCache;
- (id)componentForType:(long long)type;
- (id)componentInstanceForType:(long long)type;
- (unsigned long long)usageIntent;
- (id)copyWithUsageIntent:(unsigned long long)intent;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)headNode;
- (id)avatarNode;
- (id)headComponentContainer;
- (id)bodyComponentContainer;
- (id)handsComponentContainer;
- (id)skinColor;
- (id)hairColor;
- (id)eyebrowsColor;
- (id)facialhairColor;
- (id)lipsColor;
- (void)_invalidateAOImage;
- (void)_applyAllColorPresetsForCategory:(long long)category;
- (void)_applyColorPresetForCategory:(long long)category colorIndex:(unsigned long long)index;
- (id)colorPresetForCategory:(long long)category;
- (id)secondaryColorPresetForCategory:(long long)category;
- (id)colorPresetForCategory:(long long)category colorIndex:(unsigned long long)index;
- (void)setColorPreset:(id)preset forCategory:(long long)category;
- (void)setSecondaryColorPreset:(id)preset forCategory:(long long)category;
- (void)setColorPreset:(id)preset forCategory:(long long)category colorIndex:(unsigned long long)index;
- (id)components;
- (id)componentWithType:(long long)type;
- (void)addComponent:(id)component animated:(BOOL)animated;
- (void)removeComponentWithType:(long long)type;
- (void)_removeComponent:(id)component;
- (void)invalidate;
- (void)componentDidChangeForType:(long long)type animated:(BOOL)animated;
- (void)componentMaterialDidUpdate:(id)update;
- (BOOL)usesSkinningForEyeOrientation;
- (void)randomize;
- (void)setPreset:(id)preset forCategory:(long long)category;
- (void)setPreset:(id)preset forCategory:(long long)category animated:(BOOL)animated;
- (unsigned long long)applyPresetDependenciesForPreset:(id)preset presetsBeingReplacedCategories:(unsigned long long)categories recursionDepth:(unsigned char)depth;
- (unsigned long long)unapplyPresetDependenciesForPreset:(id)preset presetsBeingReplacedCategories:(unsigned long long)categories recursionDepth:(unsigned char)depth;
- (id)presetForCategory:(long long)category;
- (BOOL)hasPresetDepencencyForCategory:(long long)category;
- (id)resolvedPresetForCategory:(long long)category;
- (void)morphTo:(id)to;
- (void)addComponentAssetNode:(id)node toNode:(id)node forBodyParts:(unsigned long long)parts;
- (void)removeComponentAssetNodeFromParentNode:(id)node forBodyParts:(unsigned long long)parts;
- (double)skinTextureSize;
- (struct CGImage *)createSkinAO;
- (void)updateSkinMaterial:(id)material;
- (void)updateEyeLashes;
- (void)updateHighlightsForComponentType:(long long)type;
- (void)_updateAO;
- (void)update;
- (void)setInstance:(id)instance forComponentType:(long long)type;
- (BOOL)_addTorsoComponentInstanceIfNeeded;
- (void)_addHandsComponentInstanceIfNeeded;
- (id)_wrapDeformerDriverInfoForComponentType:(long long)type;
- (id)wrapDeformedDriverNamed:(id)named forComponentType:(long long)type;
- (void)enumerateActiveWrapDeformerDriversForComponentType:(long long)type usingBlock:(id /* block */)block;
- (void)updateWrapDeformerIsActiveForComponentType:(long long)type;
- (void)_update;
- (id)upperNodesIgnoredByPhysicalizedDescriptors;
- (id)allBuiltinAssetNodes;
- (id)builtinAssetNodesForComponentType:(long long)type;
- (id)allAssetNodesForComponentType:(long long)type;
- (id)_assetNodesForComponentType:(long long)type includingBuiltInAssetNodes:(BOOL)nodes includingComponentAssetNode:(BOOL)node;
- (id)_componentInstanceAssetNodesForDependencyOfType:(long long)type isAssetSpecific:(BOOL)specific;
- (void)_setMorphWeight:(float)weight forDependencyVariant:(id)variant ofType:(long long)type isAssetSpecific:(BOOL)specific;
- (void)_setVariantDependenciesEnabled:(BOOL)enabled forPreset:(id)preset dirtyComponents:(unsigned long long)components;
- (void)_setAssetSpecificVariantDependenciesEnabled:(BOOL)enabled forPreset:(id)preset dirtyComponents:(unsigned long long)components;
- (void)applyVariantDependenciesForPreset:(id)preset dirtyComponents:(unsigned long long)components;
- (void)unapplyVariantDependenciesForPreset:(id)preset dirtyComponents:(unsigned long long)components;
- (void)updateMorphVariantsInNodeHierarchy:(id)hierarchy componentType:(long long)type variant:(id)variant weight:(float)weight;
- (id)effectiveMorphedNodeForTargetName:(id)name;
- (void)_didInstantiateLazyComponentInstanceOfType:(long long)type assetNode:(id)node;
- (void)_didActivateLazyComponentInstanceOfType:(long long)type assetNode:(id)node;
- (void)_willDeactivateLazyComponentInstanceOfType:(long long)type assetNode:(id)node;
- (void)updateMorphVariantsInStickerPropNodeHierarchy:(id)hierarchy;
- (BOOL)showsBody;
- (void)setShowsBody:(BOOL)body;
- (unsigned long long)visibleBodyParts;
- (void)setVisibleBodyParts:(unsigned long long)parts;
- (id)bodyPose;
- (void)setBodyPose:(id)pose;
- (void)updateBodyPoseForSkinnerVariantsWithDirtyComponents:(unsigned long long)components;
- (void)rebuildSpecializationSettings;
- (id)specializationSettings;
- (id)stickerPhysicsStateIdentifier;
- (void)setComponentAssetNodeObservationForStickerBlock:(id /* block */)block;
- (void)addDerivedNodesMatchingStickerPattern:(id)pattern toArray:(id)array options:(unsigned long long)options;
@end

#endif /* AVTMemoji_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFConversation_h
#define AFConversation_h
@import Foundation;

#include "AFConversationStorable-Protocol.h"
#include "AFTreeNode.h"

@class NSMutableDictionary, NSString, NSUUID;
@protocol AFConversationDelegate;

@interface AFConversation : NSObject {
  /* instance variables */
  NSMutableDictionary *_additionalInterpretationsForRefId;
  NSMutableDictionary *_updatedUserUtteranceForRefId;
}

@property (retain, nonatomic) AFTreeNode *rootNode;
@property (retain, nonatomic) NSObject<AFConversationStorable> *lastRestoredItem;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL synchronizedWithServer;
@property (weak, nonatomic) NSObject<AFConversationDelegate> *delegate;

/* instance methods */
- (id)initWithIdentifier:(id)identifier languageCode:(id)code rootNode:(id)node;
- (id)initWithIdentifier:(id)identifier languageCode:(id)code;
- (id)initWithLanguageCode:(id)code;
- (id)_nodeAtIndexPath:(id)path;
- (id)_itemAtIndexPath:(id)path;
- (void)_removeNodes:(id)nodes;
- (id)_childOfNode:(id)node withItemWhichCanBeUpdatedWithAceObject:(id)object inDialogPhase:(id)phase;
- (void)_processInsertions:(id)insertions inDialogPhase:(id)phase;
- (void)_addItemsForAceViews:(id)views withDialogPhase:(id)phase fromCommandWithIdentifier:(id)identifier atIndexPaths:(id)paths isSupplemental:(BOOL)supplemental isImmersiveExperience:(BOOL)experience;
- (id)_indexPathsForAddingItemsWithCount:(long long)count asChildrenOfItemWithIdentifier:(id)identifier;
- (void)_addItemsForAceViews:(id)views withDialogPhase:(id)phase fromCommandWithIdentifier:(id)identifier atIndexPaths:(id)paths;
- (void)_addItemsForAceViews:(id)views withDialogPhase:(id)phase fromCommandWithIdentifier:(id)identifier asChildrenOfItemWithIdentifier:(id)identifier isSupplemental:(BOOL)supplemental isImmersiveExperience:(BOOL)experience;
- (void)_addItemsForAceViews:(id)views withDialogPhase:(id)phase fromCommandWithIdentifier:(id)identifier asChildrenOfItemWithIdentifier:(id)identifier;
- (void)insertItemsForAceViews:(id)views withDialogPhase:(id)phase atIndexPaths:(id)paths;
- (void)addItemsForAceViews:(id)views withDialogPhase:(id)phase asChildrenOfItemWithIdentifier:(id)identifier;
- (void)addItemsForAddViewsCommand:(id)command;
- (void)_addItemsForAceObjects:(id)objects type:(long long)type aceCommandIdentifier:(id)identifier dialogPhase:(id)phase asChildrenOfItemWithIdentifier:(id)identifier;
- (void)addItemsForAceObjects:(id)objects type:(long long)type dialogPhase:(id)phase asChildrenOfItemWithIdentifier:(id)identifier;
- (void)addItemForSpeechRecognizedCommand:(id)command;
- (void)addAdditionalSpeechInterpretation:(id)interpretation refId:(id)id;
- (id)additionalSpeechInterpretationsForRefId:(id)id;
- (void)addRecognitionUpdateWithPhrases:(id)phrases utterances:(id)utterances refId:(id)id;
- (id)updatedUserUtteranceForRefId:(id)id;
- (void)addItemForPartialResultCommand:(id)command;
- (void)addItemsForShowHelpCommand:(id)command;
- (void)addItemForMusicStartSessionCommand:(id)command;
- (void)addSelectionResponse:(id)response;
- (void)updateWithUpdateViewsCommand:(id)command;
- (void)removeItemsWithIdentifiers:(id)identifiers;
- (void)removeItemsAtIndexPaths:(id)paths;
- (void)removeItemsFollowingItemAtIndexPath:(id)path;
- (void)removeTransientItems;
- (void)cancelItemWithIdentifier:(id)identifier;
- (BOOL)containsItemWithIdentifier:(id)identifier;
- (id)identifierOfItemAtIndexPath:(id)path;
- (id)indexPathForItemWithIdentifier:(id)identifier;
- (id)_indexPathForItemWithIdentifier:(id)identifier ignoreNonExistent:(BOOL)existent;
- (BOOL)hasItemWithIdentifier:(id)identifier;
- (id)itemWithIdentifier:(id)identifier;
- (id)parentOfItemWithIdentifier:(id)identifier;
- (id)itemAtIndexPath:(id)path;
- (id)lastItem;
- (long long)typeForItemAtIndexPath:(id)path;
- (id)dialogPhaseForItemAtIndexPath:(id)path;
- (id)aceObjectForItemAtIndexPath:(id)path;
- (long long)presentationStateForItemAtIndexPath:(id)path;
- (long long)numberOfChildrenForItemWithIdentifier:(id)identifier;
- (long long)numberOfChildrenForItemAtIndexPath:(id)path;
- (id)aceCommandIdentifierForItemAtIndexPath:(id)path;
- (BOOL)itemAtIndexPathIsVirgin:(id)virgin;
- (void)_enumerateItemsUsingBlock:(id /* block */)block;
- (BOOL)containsItemForAceViewWithIdentifier:(id)identifier;
- (BOOL)_nodeContainsProvisionalItems:(id)items;
- (id)_changePresentationStateForNodes:(id)nodes;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)representation;
- (void)notifyDelegateOfUpdates:(id)updates inserts:(id)inserts presentationChanges:(id)changes;
- (BOOL)isSynchronizedWithServer;
- (id)_rootNode;
- (void)_setRootNode:(id)node;
- (void)_setLastRestoredItem:(id)item;
@end

#endif /* AFConversation_h */

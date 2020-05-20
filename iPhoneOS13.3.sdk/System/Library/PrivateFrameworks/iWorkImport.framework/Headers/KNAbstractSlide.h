//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDCompatibilityAwareMediaContainer-Protocol.h>
#import <iWorkImport/TSDDrawableContainerInfo-Protocol.h>
#import <iWorkImport/TSDMutableContainerInfo-Protocol.h>
#import <iWorkImport/TSDReducibleImageContainer-Protocol.h>
#import <iWorkImport/TSDReplaceableMediaContainer-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>
#import <iWorkImport/TSSPropertySource-Protocol.h>
#import <iWorkImport/TSSStyleClient-Protocol.h>

@class KNBodyPlaceholderInfo, KNObjectPlaceholderInfo, KNSlideBackgroundInfo, KNSlideNode, KNSlideNumberPlaceholderInfo, KNSlideStyle, KNTitlePlaceholderInfo, KNTransition, NSArray, NSDictionary, NSObject, NSOrderedSet, NSSet, TSDFill, TSDInfoGeometry, TSUMutablePointerSet, TSUPointerKeyDictionary;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface KNAbstractSlide : TSPObject <TSSPropertySource, TSKDocumentObject, TSDDrawableContainerInfo, TSDMutableContainerInfo, TSKTransformableObject, TSSStyleClient, TSDReplaceableMediaContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer>
{
    KNSlideStyle *_style;
    KNSlideBackgroundInfo *_background;
    NSOrderedSet *_childInfos;
    NSSet *_builds;
    NSArray *_buildChunks;
    BOOL _needsSlideNodeEventCountUpdate;
    TSUPointerKeyDictionary *_drawableToGhostInfosMap;
    TSUMutablePointerSet *_drawablesWithInvalidatedGhosts;
    BOOL _shouldConsiderAllChunksActive;
    BOOL _inDocument;
    KNTransition *_transition;
    KNTitlePlaceholderInfo *_titlePlaceholder;
    KNBodyPlaceholderInfo *_bodyPlaceholder;
    KNObjectPlaceholderInfo *_objectPlaceholder;
    KNSlideNumberPlaceholderInfo *_slideNumberPlaceholder;
    KNSlideNode *_slideNode;
    NSDictionary _placeholdersForTags;
}

+ (Class)classForUnarchiver:(id)arg1;
+ (BOOL)needsObjectUUID;
+ (NSUInteger)deliveryGroupCountForBuildChunks:(id)arg1;
+ (id)buildChunksInDeliveryGroupAtIndex:(NSUInteger)arg1 inBuildChunks:(id)arg2;
+ (id)p_firstActiveChunkInChunks:(id)arg1;
+ (BOOL)chunk:(id)arg1 isFirstInDeliveryGroupForChunks:(id)arg2;
+ (NSUInteger)deliveryGroupIndexForBuildChunk:(id)arg1 inBuildChunks:(id)arg2;
+ (id)parentSlideForInfo:(id)arg1;
@property(copy, nonatomic) NSDictionary *placeholdersForTags; // @synthesize placeholdersForTags=_placeholdersForTags;
@property(nonatomic) BOOL inDocument; // @synthesize inDocument=_inDocument;
@property(readonly, nonatomic) __weak KNSlideNode *slideNode; // @synthesize slideNode=_slideNode;
@property(retain, nonatomic) KNSlideNumberPlaceholderInfo *slideNumberPlaceholder; // @synthesize slideNumberPlaceholder=_slideNumberPlaceholder;
@property(retain, nonatomic) KNObjectPlaceholderInfo *objectPlaceholder; // @synthesize objectPlaceholder=_objectPlaceholder;
@property(retain, nonatomic) KNBodyPlaceholderInfo *bodyPlaceholder; // @synthesize bodyPlaceholder=_bodyPlaceholder;
@property(retain, nonatomic) KNTitlePlaceholderInfo *titlePlaceholder; // @synthesize titlePlaceholder=_titlePlaceholder;
@property(retain, nonatomic) KNTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) KNSlideStyle *style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (void)p_updateChartBuildChunksImmediatelyWithoutUndoHistory;
- (void)p_updateBuildEffects:(BOOL)arg1 version:(NSUInteger)arg2;
- (NSUInteger)p_keynoteVersionFromUnarchiver:(id)arg1;
- (void)p_updateOverlappingBuildEventTriggers;
- (void)saveToArchive:(struct SlideArchive )arg1 archiver:(id)arg2;
- (void)p_updateStartAndEndOffsetsIfNecessaryForFileVersion:(NSUInteger)arg1;
- (void)p_updateChunkCount;
- (void)loadFromArchive:(const struct SlideArchive )arg1 unarchiver:(id)arg2;
- (void)p_updateBuildsReplacingPlaceholder:(id)arg1 withPlaceholder:(id)arg2;
- (void)replaceReferencedStylesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)referencedStyles;
- (double)CGFloatValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (BOOL)containsProperty:(int)arg1;
- (id)copyWithContext:(id)arg1;
- (id)childEnumerator;
- (CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (BOOL)isSelectable;
- (BOOL)isThemeContent;
- (Class)repClass;
- (Class)layoutClass;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (double)highestScaleFactorForRenderingDrawableInfo:(id)arg1;
- (id)infoForSelectionPath:(id)arg1;
- (id)infoCorrespondingToInfo:(id)arg1;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addChildInfo:(id)arg1;
- (void)p_insertChildInfos:(id)arg1 atIndex:(NSUInteger)arg2 dolcContext:(id)arg3;
- (void)moveModel:(id)arg1 toIndex:(NSUInteger)arg2;
- (void)removeContainedModel:(id)arg1;
- (void)insertContainedModel:(id)arg1 atIndex:(NSUInteger)arg2;
@property(readonly, nonatomic) NSArray *containedModels;
@property(readonly, nonatomic) TSUMutablePointerSet *drawablesWithInvalidatedGhosts;
@property(readonly, nonatomic) TSUPointerKeyDictionary *drawableToGhostInfosMap;
- (void)i_primitiveInsertBuildChunk:(id)arg1 afterChunk:(id)arg2 generateIdentifier:(BOOL)arg3;
- (void)i_primitiveAddBuild:(id)arg1;
- (void)i_primitiveSetBuildChunks:(id)arg1;
- (void)i_primitiveSetBuilds:(id)arg1;
- (void)i_invalidateActiveChunkCache;
- (BOOL)canMoveDeliveryGroupFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
@property(readonly, nonatomic) NSArray *buildsGroupedByDeliveryGroup;
@property(readonly, nonatomic) NSUInteger deliveryGroupCount;
- (BOOL)p_canMoveDeliveryGroupBuildChunks:(id)arg1 toIndex:(NSUInteger)arg2;
- (BOOL)p_canMoveDeliveryGroupBuildChunksFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
- (id)buildChunksInDeliveryGroupAtIndex:(NSUInteger)arg1;
- (id)deliveryGroupIndexesForBuilds:(id)arg1;
- (NSUInteger)deliveryGroupIndexForBuildChunk:(id)arg1;
- (BOOL)hasComplementForBuildChunk:(id)arg1;
- (BOOL)hasComplementForBuildChunk:(id)arg1 inBuildChunks:(id)arg2;
- (id)buildChunksForActiveBuildChunkIndexes:(id)arg1;
- (id)p_calculateActiveBuildChunks;
@property(readonly, nonatomic) NSArray *activeBuildChunks;
- (_NSRange)p_activeChunkRangeForBuild:(id)arg1 inActiveChunks:(id)arg2;
- (BOOL)p_activeChunks:(id)arg1 interleaveChunksForComplementOfBuild:(id)arg2;
- (BOOL)p_activeChunks:(id)arg1 areInOrderForBuild:(id)arg2;
- (BOOL)p_areActiveBuildChunksInValidOrder:(id)arg1;
- (BOOL)areBuildChunksInValidOrderIgnoringInactiveChunks:(id)arg1;
- (long long)validateMoveActiveBuildChunks:(id)arg1 toActiveIndex:(NSUInteger)arg2;
- (long long)canMoveBuildChunk:(id)arg1 toIndex:(NSUInteger)arg2;
- (BOOL)p_isValidToMoveChunk:(id)arg1 toIndex:(NSUInteger)arg2;
- (id)p_lastActiveChunkInChunksForBuild:(id)arg1;
- (id)p_firstActiveChunkInChunksForBuild:(id)arg1;
- (id)p_complementForBuild:(id)arg1;
- (id)chunksForDrawable:(id)arg1 animationType:(long long)arg2;
- (id)activeChunksForDrawable:(id)arg1 animationType:(long long)arg2;
- (id)p_ChunksForDrawable:(id)arg1 animationType:(long long)arg2 onlyActiveChunks:(BOOL)arg3;
- (id)activeChunksForDrawable:(id)arg1;
- (id)p_chunksWhichWillPlayWithChunksToSetToWith:(id)arg1;
- (id)chunksWhichPlayWithChunk:(id)arg1;
- (BOOL)canSetChunksToAutomaticWith:(id)arg1;
- (id)availableEventTriggersForBuildChunks:(id)arg1;
- (void)removeBuildChunk:(id)arg1 rollbackGeneratedIdentifier:(BOOL)arg2;
- (void)insertBuildChunk:(id)arg1 afterChunk:(id)arg2 generateIdentifier:(BOOL)arg3;
- (void)p_assertChunksInSequenceForBuild:(id)arg1;
- (void)setBuildChunks:(id)arg1 generateIdentifiers:(BOOL)arg2;
@property(readonly, nonatomic) NSUInteger buildChunkCount;
@property(readonly, nonatomic) NSArray *buildChunks;
- (void)removeInvalidBuildsOnDrawable:(id)arg1 usingParentCommand:(id)arg2;
- (id)p_invalidBuildsOnDrawable:(id)arg1;
- (id)contentBuildForDrawable:(id)arg1;
- (id)outBuildForDrawable:(id)arg1;
- (id)inBuildForDrawable:(id)arg1;
- (id)buildsForDrawable:(id)arg1;
- (id)buildsForDrawable:(id)arg1 type:(long long)arg2;
- (id)buildsForDrawables:(id)arg1;
- (void)removeBuild:(id)arg1;
- (void)addBuild:(id)arg1;
@property(copy, nonatomic) NSSet *builds;
@property(readonly, nonatomic) NSUInteger buildCount;
@property(readonly, nonatomic) BOOL supportsBuilds;
- (void)p_invalidateSlideNodeBuildEventCountCaches;
- (void)p_invalidateCachesForBuildUpdate:(id)arg1 isForRemoval:(BOOL)arg2;
- (void)p_invalidateCachesForChunkUpdate:(id)arg1 isForRemoval:(BOOL)arg2;
- (void)p_invalidateAllChunkAndBuildCaches;
@property(readonly, nonatomic) BOOL hasFreeformTextPlaceholders;
- (void)removeTagForDrawable:(id)arg1;
- (BOOL)infoIsPlaceholder:(id)arg1;
- (id)tagForInfo:(id)arg1;
- (BOOL)infoExistsForTag:(id)arg1;
- (id)infoForTag:(id)arg1;
- (void)setInfo:(id)arg1 forSageTag:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
@property(readonly, nonatomic, getter=isSlideNumberVisible) BOOL slideNumberVisible;
@property(readonly, nonatomic, getter=isObjectVisible) BOOL objectVisible;
@property(readonly, nonatomic, getter=isBodyVisible) BOOL bodyVisible;
@property(readonly, nonatomic, getter=isTitleVisible) BOOL titleVisible;
- (id)placeholderOfClass:(Class)arg1 withGeometry:(id)arg2 stylesheet:(id)arg3 shapePresetIndex:(long long)arg4 textPresetStyle:(id)arg5 listStyle:(id)arg6 layoutPropertyMap:(id)arg7 paragraphPropertyMap:(id)arg8 listPropertyMap:(id)arg9 context:(id)arg10;
- (id)placeholderOfClass:(Class)arg1 withGeometry:(id)arg2 stylesheet:(id)arg3 shapePresetIndex:(long long)arg4 textPresetStyle:(id)arg5 layoutPropertyMap:(id)arg6 paragraphPropertyMap:(id)arg7 listPropertyMap:(id)arg8 context:(id)arg9;
- (id)placeholderOfClass:(Class)arg1 withGeometry:(id)arg2 stylesheet:(id)arg3 shapePresetIndex:(long long)arg4 textPresetIndex:(long long)arg5 layoutPropertyMap:(id)arg6 paragraphPropertyMap:(id)arg7 listPropertyMap:(id)arg8 context:(id)arg9;
- (id)placeholderWithPlaceholder:(id)arg1 context:(id)arg2;
- (id)placeholderWithPlaceholder:(id)arg1 context:(id)arg2 placeholderClass:(Class)arg3;
- (id)defaultSlideNumberPlaceholderWithContext:(id)arg1;
- (id)defaultSlideNumberPlaceholder;
- (id)defaultBodyPlaceholderWithContext:(id)arg1;
- (id)defaultTitlePlaceholderWithContext:(id)arg1;
- (id)defaultBodyPlaceholder;
- (id)defaultTitlePlaceholder;
- (void)performBlockOnInfos:(id /* CDUnknownBlockType */)arg1;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (BOOL)canMoveDrawables:(id)arg1 toIndexes:(id)arg2;
- (void)removeDrawable:(id)arg1;
- (void)insertDrawables:(id)arg1 atIndex:(NSUInteger)arg2 dolcContext:(id)arg3;
- (void)insertDrawable:(id)arg1 atIndex:(NSUInteger)arg2 dolcContext:(id)arg3;
- (void)addDrawable:(id)arg1 dolcContext:(id)arg2;
@property(readonly, nonatomic) NSArray *infosToDisplay;
@property(readonly, nonatomic) BOOL isMasterSlide;
@property(readonly, nonatomic) KNSlideBackgroundInfo *background;
@property(readonly, nonatomic) NSArray *ownedChildInfos;
- (BOOL)p_isChildPlaceholderInfo:(id)arg1;
- (void)p_setChildInfosAsOrderedSet:(id)arg1 usingDOLC:(BOOL)arg2 dolcContext:(id)arg3;
- (void)p_checkChildInfosForDuplicates:(id)arg1;
- (void)setChildInfosWithoutDOLC:(id)arg1;
@property(copy, nonatomic) NSArray *childInfos;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
@property(readonly, nonatomic) BOOL hasBackgroundAlpha;
@property(readonly, nonatomic) TSDFill *backgroundFill;
- (id)objectUUIDPath;
- (void)didInitFromSOS;
- (id)initWithSlideNode:(id)arg1 context:(id)arg2;
- (id)imageUsingDocumentRoot:(id)arg1;
- (id)pdfDataUsingDocumentRoot:(id)arg1;

@end


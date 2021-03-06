//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class NSArray, NSMutableArray, NSSet, NSString;
@protocol IKEntityValueProviding, NSCopying, SKUIEntityProviding;

@interface SKUIViewElement : IKViewElement
{
    id <SKUIEntityProviding> _entityProvider;
    id <IKEntityValueProviding> _entityValueProvider;
    NSMutableArray *_flattenedChildren;
    BOOL _hasValidEntityProvider;
    long long _pinStyle;
    long long _pinGroup;
    id <IKEntityValueProviding> _explicitEntityValueProvider;
}

@property(retain, nonatomic) id <IKEntityValueProviding> explicitEntityValueProvider; // @synthesize explicitEntityValueProvider=_explicitEntityValueProvider;
@property(readonly, nonatomic) long long pinGroup; // @synthesize pinGroup=_pinGroup;
@property(readonly, nonatomic) long long pinStyle; // @synthesize pinStyle=_pinStyle;
// - (void).cxx_destruct;
- (void)_unregisterForNotificationsForEntityProvider:(id)arg1;
- (void)_registerForNotificationsForEntityProvider:(id)arg1;
- (void)_entityValueProviderDidChange;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) id <NSCopying> uniquingMapKey;
@property(retain, nonatomic) id <IKEntityValueProviding> entityValueProvider; // @synthesize entityValueProvider=_entityValueProvider;
@property(readonly, nonatomic) BOOL rendersWithParallax;
@property(readonly, nonatomic) BOOL rendersWithPerspective;
@property(readonly, nonatomic) NSSet *personalizationLibraryItems;
@property(readonly, nonatomic) long long pageComponentType;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, nonatomic, getter=isDynamicContainer) BOOL dynamicContainer;
@property(readonly, nonatomic) NSArray *flattenedChildren;
- (id)firstChildForElementName:(id)arg1;
- (id)firstChildForElementType:(NSUInteger)arg1;
- (id)featureWithName:(id)arg1;
- (void)enumerateViewElementsWithDictionary:(id)arg1 factory:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (void)enumerateChildrenUsingBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSSet *entityValueProperties;
@property(readonly, nonatomic) id <SKUIEntityProviding> explicitEntityProvider;
- (void)entityValueProviderDidChange;
@property(readonly, nonatomic) id <SKUIEntityProviding> entityProvider;
- (id)elementWithIdentifier:(id)arg1;
- (BOOL)isDescendentFromViewElement:(id)arg1;
- (id)persistenceKey;
- (BOOL)descendsFromElementWithType:(NSUInteger)arg1;
- (id)ancestorElementOfType:(NSUInteger)arg1;
- (id)ancestorElementMatchingPredicate:(id /* CDUnknownBlockType */)arg1;
- (BOOL)canMoveWithinCollection;
- (void)dealloc;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
@property(readonly, copy, nonatomic) NSString *indexBarEntryID;
- (id)firstDescendentWithIndexBarEntryID:(id)arg1;
- (BOOL)handlesBackgroundColorDirectly;
- (id)expandableLabelElementForWidth:(double)arg1 context:(id)arg2;

@end


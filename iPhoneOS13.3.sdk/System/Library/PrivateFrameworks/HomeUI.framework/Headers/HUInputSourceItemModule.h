//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUChildServiceEditorItemModule.h>

@class HFItem;

@interface HUInputSourceItemModule : HUChildServiceEditorItemModule
{
    HFItem *_chooseInputsSelectionItem;
}

+ (id /* CDUnknownBlockType */)_serviceItemComparatorForTelevisionProfile:(id)arg1;
+ (id)supportedServiceTypes;
@property(readonly, nonatomic) HFItem *chooseInputsSelectionItem; // @synthesize chooseInputsSelectionItem=_chooseInputsSelectionItem;
// - (void).cxx_destruct;
- (BOOL)canToggleConfigurationStateForItem:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;

@end

